% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{calc_mean}
\alias{calc_mean}
\title{Calculate the mean (location) of the columns of a \emph{time series} or a
\emph{matrix} using \code{RcppArmadillo}.}
\usage{
calc_mean(tseries, method = "moment", con_fi = 0.75)
}
\arguments{
\item{\code{tseries}}{A \emph{time series} or a \emph{matrix} of data.}

\item{\code{method}}{A \emph{string} specifying the type of the mean
(location) model (the default is \code{method = "moment"} - see Details).}

\item{\code{con_fi}}{The confidence level for calculating the
quantiles (the default is \code{con_fi = 0.75}).}
}
\value{
A single-row matrix with the mean (location) of the columns of
  \code{tseries}.
}
\description{
Calculate the mean (location) of the columns of a \emph{time series} or a
\emph{matrix} using \code{RcppArmadillo}.
}
\details{
The function \code{calc_mean()} calculates the mean (location) values of
  the columns of the \emph{time series} \code{tseries} using
  \code{RcppArmadillo} \code{C++} code.

  If \code{method = "moment"} (the default) then \code{calc_mean()}
  calculates the location as the mean - the first moment of the data.

  If \code{method = "quantile"} then it calculates the location \eqn{\mu} as
  the sum of the quantiles as follows:
  \deqn{
    \mu = q_{\alpha} + q_{1-\alpha}
  }
  Where \eqn{\alpha} is the confidence level for calculating the quantiles.

  If \code{method = "nonparametric"} then it calculates the location as the
  median.
  
  The code examples below compare the function \code{calc_mean()} with the
  mean (location) calculated using \code{R} code.
}
\examples{
\dontrun{
# Calculate historical returns
re_turns <- na.omit(rutils::etf_env$re_turns[, c("XLP", "VTI")])
# Calculate the column means in RcppArmadillo
HighFreq::calc_mean(re_turns)
# Calculate the column means in R
sapply(re_turns, mean)
# Compare the values
all.equal(drop(HighFreq::calc_mean(re_turns)), 
  sapply(re_turns, mean), check.attributes=FALSE)
# Compare the speed of RcppArmadillo with R code
library(microbenchmark)
summary(microbenchmark(
  Rcpp=HighFreq::calc_mean(re_turns),
  Rcode=sapply(re_turns, mean),
  times=10))[, c(1, 4, 5)]  # end microbenchmark summary
# Calculate the quantile mean (location)
HighFreq::calc_mean(re_turns, method="quantile", con_fi=0.9)
# Calculate the quantile mean (location) in R
colSums(sapply(re_turns, quantile, c(0.9, 0.1), type=5))
# Compare the values
all.equal(drop(HighFreq::calc_mean(re_turns, method="quantile", con_fi=0.9)), 
  colSums(sapply(re_turns, quantile, c(0.9, 0.1), type=5)), 
  check.attributes=FALSE)
# Compare the speed of RcppArmadillo with R code
summary(microbenchmark(
  Rcpp=HighFreq::calc_mean(re_turns, method="quantile", con_fi=0.9),
  Rcode=colSums(sapply(re_turns, quantile, c(0.9, 0.1), type=5)),
  times=10))[, c(1, 4, 5)]  # end microbenchmark summary
# Calculate the column medians in RcppArmadillo
HighFreq::calc_mean(re_turns, method="nonparametric")
# Calculate the column medians in R
sapply(re_turns, median)
# Compare the values
all.equal(drop(HighFreq::calc_mean(re_turns, method="nonparametric")), 
  sapply(re_turns, median), check.attributes=FALSE)
# Compare the speed of RcppArmadillo with R code
summary(microbenchmark(
  Rcpp=HighFreq::calc_mean(re_turns, method="nonparametric"),
  Rcode=sapply(re_turns, median),
  times=10))[, c(1, 4, 5)]  # end microbenchmark summary
}

}
