// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lag_vec
arma::vec lag_vec(arma::vec tseries, arma::sword lagg, bool pad_zeros);
RcppExport SEXP _HighFreq_lag_vec(SEXP tseriesSEXP, SEXP laggSEXP, SEXP pad_zerosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::sword >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type pad_zeros(pad_zerosSEXP);
    rcpp_result_gen = Rcpp::wrap(lag_vec(tseries, lagg, pad_zeros));
    return rcpp_result_gen;
END_RCPP
}
// lag_it
arma::mat lag_it(arma::mat tseries, arma::sword lagg, bool pad_zeros);
RcppExport SEXP _HighFreq_lag_it(SEXP tseriesSEXP, SEXP laggSEXP, SEXP pad_zerosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::sword >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type pad_zeros(pad_zerosSEXP);
    rcpp_result_gen = Rcpp::wrap(lag_it(tseries, lagg, pad_zeros));
    return rcpp_result_gen;
END_RCPP
}
// diff_vec
arma::vec diff_vec(arma::vec tseries, int lagg, bool padd);
RcppExport SEXP _HighFreq_diff_vec(SEXP tseriesSEXP, SEXP laggSEXP, SEXP paddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< int >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type padd(paddSEXP);
    rcpp_result_gen = Rcpp::wrap(diff_vec(tseries, lagg, padd));
    return rcpp_result_gen;
END_RCPP
}
// diff_it
arma::mat diff_it(arma::mat tseries, arma::uword lagg, bool padd);
RcppExport SEXP _HighFreq_diff_it(SEXP tseriesSEXP, SEXP laggSEXP, SEXP paddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type padd(paddSEXP);
    rcpp_result_gen = Rcpp::wrap(diff_it(tseries, lagg, padd));
    return rcpp_result_gen;
END_RCPP
}
// calc_endpoints
arma::uvec calc_endpoints(arma::uword numel, arma::uword step, arma::uword stub);
RcppExport SEXP _HighFreq_calc_endpoints(SEXP numelSEXP, SEXP stepSEXP, SEXP stubSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type numel(numelSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type step(stepSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stub(stubSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_endpoints(numel, step, stub));
    return rcpp_result_gen;
END_RCPP
}
// calc_startpoints
arma::uvec calc_startpoints(arma::uvec endp, arma::uword look_back);
RcppExport SEXP _HighFreq_calc_startpoints(SEXP endpSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_startpoints(endp, look_back));
    return rcpp_result_gen;
END_RCPP
}
// mult_vec_mat
arma::uword mult_vec_mat(arma::vec vector, arma::mat matrix, bool by_col);
RcppExport SEXP _HighFreq_mult_vec_mat(SEXP vectorSEXP, SEXP matrixSEXP, SEXP by_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vector(vectorSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type by_col(by_colSEXP);
    rcpp_result_gen = Rcpp::wrap(mult_vec_mat(vector, matrix, by_col));
    return rcpp_result_gen;
END_RCPP
}
// calc_eigen
List calc_eigen(arma::mat returns);
RcppExport SEXP _HighFreq_calc_eigen(SEXP returnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type returns(returnsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_eigen(returns));
    return rcpp_result_gen;
END_RCPP
}
// calc_inv
arma::mat calc_inv(arma::mat returns, double eigen_thresh, int eigen_max);
RcppExport SEXP _HighFreq_calc_inv(SEXP returnsSEXP, SEXP eigen_threshSEXP, SEXP eigen_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< double >::type eigen_thresh(eigen_threshSEXP);
    Rcpp::traits::input_parameter< int >::type eigen_max(eigen_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_inv(returns, eigen_thresh, eigen_max));
    return rcpp_result_gen;
END_RCPP
}
// calc_scaled
arma::mat calc_scaled(arma::mat tseries, bool use_median);
RcppExport SEXP _HighFreq_calc_scaled(SEXP tseriesSEXP, SEXP use_medianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< bool >::type use_median(use_medianSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_scaled(tseries, use_median));
    return rcpp_result_gen;
END_RCPP
}
// calc_var_vec
double calc_var_vec(arma::vec tseries);
RcppExport SEXP _HighFreq_calc_var_vec(SEXP tseriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type tseries(tseriesSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var_vec(tseries));
    return rcpp_result_gen;
END_RCPP
}
// calc_var
arma::mat calc_var(arma::mat tseries, std::string method);
RcppExport SEXP _HighFreq_calc_var(SEXP tseriesSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var(tseries, method));
    return rcpp_result_gen;
END_RCPP
}
// calc_var_ohlc
double calc_var_ohlc(arma::mat ohlc, std::string method, arma::colvec lag_close, bool scale, arma::colvec in_dex);
RcppExport SEXP _HighFreq_calc_var_ohlc(SEXP ohlcSEXP, SEXP methodSEXP, SEXP lag_closeSEXP, SEXP scaleSEXP, SEXP in_dexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type ohlc(ohlcSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type lag_close(lag_closeSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type in_dex(in_dexSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var_ohlc(ohlc, method, lag_close, scale, in_dex));
    return rcpp_result_gen;
END_RCPP
}
// calc_ranks
arma::uvec calc_ranks(arma::vec vector);
RcppExport SEXP _HighFreq_calc_ranks(SEXP vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vector(vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ranks(vector));
    return rcpp_result_gen;
END_RCPP
}
// calc_skew
arma::mat calc_skew(arma::mat tseries, std::string method, double confi_level);
RcppExport SEXP _HighFreq_calc_skew(SEXP tseriesSEXP, SEXP methodSEXP, SEXP confi_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_skew(tseries, method, confi_level));
    return rcpp_result_gen;
END_RCPP
}
// calc_kurtosis
arma::mat calc_kurtosis(arma::mat tseries, std::string method, double confi_level);
RcppExport SEXP _HighFreq_calc_kurtosis(SEXP tseriesSEXP, SEXP methodSEXP, SEXP confi_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_kurtosis(tseries, method, confi_level));
    return rcpp_result_gen;
END_RCPP
}
// calc_lm
Rcpp::List calc_lm(arma::vec response, arma::mat design);
RcppExport SEXP _HighFreq_calc_lm(SEXP responseSEXP, SEXP designSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type response(responseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type design(designSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_lm(response, design));
    return rcpp_result_gen;
END_RCPP
}
// calc_reg
arma::colvec calc_reg(arma::vec response, arma::mat design, std::string method, double eigen_thresh, int eigen_max, double confi_level, double alpha);
RcppExport SEXP _HighFreq_calc_reg(SEXP responseSEXP, SEXP designSEXP, SEXP methodSEXP, SEXP eigen_threshSEXP, SEXP eigen_maxSEXP, SEXP confi_levelSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type response(responseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type design(designSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigen_thresh(eigen_threshSEXP);
    Rcpp::traits::input_parameter< int >::type eigen_max(eigen_maxSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_reg(response, design, method, eigen_thresh, eigen_max, confi_level, alpha));
    return rcpp_result_gen;
END_RCPP
}
// agg_ohlc
arma::mat agg_ohlc(arma::mat tseries);
RcppExport SEXP _HighFreq_agg_ohlc(SEXP tseriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    rcpp_result_gen = Rcpp::wrap(agg_ohlc(tseries));
    return rcpp_result_gen;
END_RCPP
}
// roll_count
arma::uvec roll_count(arma::uvec vector);
RcppExport SEXP _HighFreq_roll_count(SEXP vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type vector(vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_count(vector));
    return rcpp_result_gen;
END_RCPP
}
// roll_ohlc
arma::mat roll_ohlc(arma::mat tseries, arma::uvec endp);
RcppExport SEXP _HighFreq_roll_ohlc(SEXP tseriesSEXP, SEXP endpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_ohlc(tseries, endp));
    return rcpp_result_gen;
END_RCPP
}
// roll_vec
NumericVector roll_vec(NumericVector tseries, int look_back);
RcppExport SEXP _HighFreq_roll_vec(SEXP tseriesSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< int >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_vec(tseries, look_back));
    return rcpp_result_gen;
END_RCPP
}
// roll_vecw
arma::vec roll_vecw(arma::vec tseries, arma::vec weights);
RcppExport SEXP _HighFreq_roll_vecw(SEXP tseriesSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_vecw(tseries, weights));
    return rcpp_result_gen;
END_RCPP
}
// roll_conv
arma::mat roll_conv(arma::mat tseries, arma::mat weights);
RcppExport SEXP _HighFreq_roll_conv(SEXP tseriesSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_conv(tseries, weights));
    return rcpp_result_gen;
END_RCPP
}
// roll_conv_ref
arma::mat roll_conv_ref(arma::mat tseries, arma::mat weights);
RcppExport SEXP _HighFreq_roll_conv_ref(SEXP tseriesSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_conv_ref(tseries, weights));
    return rcpp_result_gen;
END_RCPP
}
// roll_sum
arma::mat roll_sum(arma::mat tseries, arma::uword look_back);
RcppExport SEXP _HighFreq_roll_sum(SEXP tseriesSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_sum(tseries, look_back));
    return rcpp_result_gen;
END_RCPP
}
// roll_wsum
arma::mat roll_wsum(arma::mat tseries, Rcpp::Nullable<Rcpp::IntegerVector> endp, arma::uword look_back, Rcpp::Nullable<int> stub, Rcpp::Nullable<Rcpp::NumericVector> weights);
RcppExport SEXP _HighFreq_roll_wsum(SEXP tseriesSEXP, SEXP endpSEXP, SEXP look_backSEXP, SEXP stubSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type stub(stubSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_wsum(tseries, endp, look_back, stub, weights));
    return rcpp_result_gen;
END_RCPP
}
// roll_var_vec
arma::vec roll_var_vec(arma::vec tseries, arma::uword look_back);
RcppExport SEXP _HighFreq_roll_var_vec(SEXP tseriesSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var_vec(tseries, look_back));
    return rcpp_result_gen;
END_RCPP
}
// roll_var
arma::mat roll_var(arma::mat tseries, arma::uvec startp, arma::uvec endp, arma::uword step, arma::uword look_back, arma::uword stub, std::string method);
RcppExport SEXP _HighFreq_roll_var(SEXP tseriesSEXP, SEXP startpSEXP, SEXP endpSEXP, SEXP stepSEXP, SEXP look_backSEXP, SEXP stubSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type startp(startpSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type step(stepSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stub(stubSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var(tseries, startp, endp, step, look_back, stub, method));
    return rcpp_result_gen;
END_RCPP
}
// roll_var_ohlc
arma::vec roll_var_ohlc(arma::mat ohlc, arma::uvec startp, arma::uvec endp, arma::uword step, arma::uword look_back, arma::uword stub, std::string method, bool scale, arma::colvec in_dex);
RcppExport SEXP _HighFreq_roll_var_ohlc(SEXP ohlcSEXP, SEXP startpSEXP, SEXP endpSEXP, SEXP stepSEXP, SEXP look_backSEXP, SEXP stubSEXP, SEXP methodSEXP, SEXP scaleSEXP, SEXP in_dexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type ohlc(ohlcSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type startp(startpSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type step(stepSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stub(stubSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type in_dex(in_dexSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var_ohlc(ohlc, startp, endp, step, look_back, stub, method, scale, in_dex));
    return rcpp_result_gen;
END_RCPP
}
// roll_skew
arma::mat roll_skew(arma::mat tseries, arma::uvec startp, arma::uvec endp, arma::uword step, arma::uword look_back, arma::uword stub, std::string method, double confi_level);
RcppExport SEXP _HighFreq_roll_skew(SEXP tseriesSEXP, SEXP startpSEXP, SEXP endpSEXP, SEXP stepSEXP, SEXP look_backSEXP, SEXP stubSEXP, SEXP methodSEXP, SEXP confi_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type startp(startpSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type step(stepSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stub(stubSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_skew(tseries, startp, endp, step, look_back, stub, method, confi_level));
    return rcpp_result_gen;
END_RCPP
}
// roll_kurtosis
arma::mat roll_kurtosis(arma::mat tseries, arma::uvec startp, arma::uvec endp, arma::uword step, arma::uword look_back, arma::uword stub, std::string method, double confi_level);
RcppExport SEXP _HighFreq_roll_kurtosis(SEXP tseriesSEXP, SEXP startpSEXP, SEXP endpSEXP, SEXP stepSEXP, SEXP look_backSEXP, SEXP stubSEXP, SEXP methodSEXP, SEXP confi_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type startp(startpSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type step(stepSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stub(stubSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_kurtosis(tseries, startp, endp, step, look_back, stub, method, confi_level));
    return rcpp_result_gen;
END_RCPP
}
// roll_reg
arma::mat roll_reg(arma::vec response, arma::mat design, arma::uvec startp, arma::uvec endp, arma::uword step, arma::uword look_back, arma::uword stub, std::string method, double eigen_thresh, int eigen_max, double confi_level, double alpha);
RcppExport SEXP _HighFreq_roll_reg(SEXP responseSEXP, SEXP designSEXP, SEXP startpSEXP, SEXP endpSEXP, SEXP stepSEXP, SEXP look_backSEXP, SEXP stubSEXP, SEXP methodSEXP, SEXP eigen_threshSEXP, SEXP eigen_maxSEXP, SEXP confi_levelSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type response(responseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type design(designSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type startp(startpSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type step(stepSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stub(stubSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigen_thresh(eigen_threshSEXP);
    Rcpp::traits::input_parameter< int >::type eigen_max(eigen_maxSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_reg(response, design, startp, endp, step, look_back, stub, method, eigen_thresh, eigen_max, confi_level, alpha));
    return rcpp_result_gen;
END_RCPP
}
// roll_scale
arma::mat roll_scale(arma::mat matrix, arma::uword look_back, bool use_median);
RcppExport SEXP _HighFreq_roll_scale(SEXP matrixSEXP, SEXP look_backSEXP, SEXP use_medianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< bool >::type use_median(use_medianSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_scale(matrix, look_back, use_median));
    return rcpp_result_gen;
END_RCPP
}
// roll_zscores
arma::vec roll_zscores(arma::vec response, arma::mat design, arma::uvec startp, arma::uvec endp, arma::uword step, arma::uword look_back, arma::uword stub);
RcppExport SEXP _HighFreq_roll_zscores(SEXP responseSEXP, SEXP designSEXP, SEXP startpSEXP, SEXP endpSEXP, SEXP stepSEXP, SEXP look_backSEXP, SEXP stubSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type response(responseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type design(designSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type startp(startpSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type step(stepSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type stub(stubSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_zscores(response, design, startp, endp, step, look_back, stub));
    return rcpp_result_gen;
END_RCPP
}
// sim_garch
NumericMatrix sim_garch(double omega, double alpha, double beta, NumericVector innov);
RcppExport SEXP _HighFreq_sim_garch(SEXP omegaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP innovSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type innov(innovSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_garch(omega, alpha, beta, innov));
    return rcpp_result_gen;
END_RCPP
}
// sim_ou
NumericVector sim_ou(double eq_price, double volat, double theta, NumericVector innov);
RcppExport SEXP _HighFreq_sim_ou(SEXP eq_priceSEXP, SEXP volatSEXP, SEXP thetaSEXP, SEXP innovSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type eq_price(eq_priceSEXP);
    Rcpp::traits::input_parameter< double >::type volat(volatSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type innov(innovSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_ou(eq_price, volat, theta, innov));
    return rcpp_result_gen;
END_RCPP
}
// sim_schwartz
NumericVector sim_schwartz(double eq_price, double volat, double theta, NumericVector innov);
RcppExport SEXP _HighFreq_sim_schwartz(SEXP eq_priceSEXP, SEXP volatSEXP, SEXP thetaSEXP, SEXP innovSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type eq_price(eq_priceSEXP);
    Rcpp::traits::input_parameter< double >::type volat(volatSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type innov(innovSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_schwartz(eq_price, volat, theta, innov));
    return rcpp_result_gen;
END_RCPP
}
// sim_arima
arma::vec sim_arima(arma::vec innov, arma::vec coeff);
RcppExport SEXP _HighFreq_sim_arima(SEXP innovSEXP, SEXP coeffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type innov(innovSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type coeff(coeffSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_arima(innov, coeff));
    return rcpp_result_gen;
END_RCPP
}
// calc_weights
arma::vec calc_weights(arma::mat returns, std::string method, double eigen_thresh, int eigen_max, double confi_level, double alpha, bool scale, double vol_target);
RcppExport SEXP _HighFreq_calc_weights(SEXP returnsSEXP, SEXP methodSEXP, SEXP eigen_threshSEXP, SEXP eigen_maxSEXP, SEXP confi_levelSEXP, SEXP alphaSEXP, SEXP scaleSEXP, SEXP vol_targetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigen_thresh(eigen_threshSEXP);
    Rcpp::traits::input_parameter< int >::type eigen_max(eigen_maxSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type vol_target(vol_targetSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_weights(returns, method, eigen_thresh, eigen_max, confi_level, alpha, scale, vol_target));
    return rcpp_result_gen;
END_RCPP
}
// back_test
arma::mat back_test(arma::mat excess, arma::mat returns, arma::uvec startp, arma::uvec endp, std::string method, double eigen_thresh, int eigen_max, double confi_level, double alpha, bool scale, double vol_target, double coeff, double bid_offer);
RcppExport SEXP _HighFreq_back_test(SEXP excessSEXP, SEXP returnsSEXP, SEXP startpSEXP, SEXP endpSEXP, SEXP methodSEXP, SEXP eigen_threshSEXP, SEXP eigen_maxSEXP, SEXP confi_levelSEXP, SEXP alphaSEXP, SEXP scaleSEXP, SEXP vol_targetSEXP, SEXP coeffSEXP, SEXP bid_offerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type excess(excessSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type startp(startpSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type endp(endpSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigen_thresh(eigen_threshSEXP);
    Rcpp::traits::input_parameter< int >::type eigen_max(eigen_maxSEXP);
    Rcpp::traits::input_parameter< double >::type confi_level(confi_levelSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type vol_target(vol_targetSEXP);
    Rcpp::traits::input_parameter< double >::type coeff(coeffSEXP);
    Rcpp::traits::input_parameter< double >::type bid_offer(bid_offerSEXP);
    rcpp_result_gen = Rcpp::wrap(back_test(excess, returns, startp, endp, method, eigen_thresh, eigen_max, confi_level, alpha, scale, vol_target, coeff, bid_offer));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HighFreq_lag_vec", (DL_FUNC) &_HighFreq_lag_vec, 3},
    {"_HighFreq_lag_it", (DL_FUNC) &_HighFreq_lag_it, 3},
    {"_HighFreq_diff_vec", (DL_FUNC) &_HighFreq_diff_vec, 3},
    {"_HighFreq_diff_it", (DL_FUNC) &_HighFreq_diff_it, 3},
    {"_HighFreq_calc_endpoints", (DL_FUNC) &_HighFreq_calc_endpoints, 3},
    {"_HighFreq_calc_startpoints", (DL_FUNC) &_HighFreq_calc_startpoints, 2},
    {"_HighFreq_mult_vec_mat", (DL_FUNC) &_HighFreq_mult_vec_mat, 3},
    {"_HighFreq_calc_eigen", (DL_FUNC) &_HighFreq_calc_eigen, 1},
    {"_HighFreq_calc_inv", (DL_FUNC) &_HighFreq_calc_inv, 3},
    {"_HighFreq_calc_scaled", (DL_FUNC) &_HighFreq_calc_scaled, 2},
    {"_HighFreq_calc_var_vec", (DL_FUNC) &_HighFreq_calc_var_vec, 1},
    {"_HighFreq_calc_var", (DL_FUNC) &_HighFreq_calc_var, 2},
    {"_HighFreq_calc_var_ohlc", (DL_FUNC) &_HighFreq_calc_var_ohlc, 5},
    {"_HighFreq_calc_ranks", (DL_FUNC) &_HighFreq_calc_ranks, 1},
    {"_HighFreq_calc_skew", (DL_FUNC) &_HighFreq_calc_skew, 3},
    {"_HighFreq_calc_kurtosis", (DL_FUNC) &_HighFreq_calc_kurtosis, 3},
    {"_HighFreq_calc_lm", (DL_FUNC) &_HighFreq_calc_lm, 2},
    {"_HighFreq_calc_reg", (DL_FUNC) &_HighFreq_calc_reg, 7},
    {"_HighFreq_agg_ohlc", (DL_FUNC) &_HighFreq_agg_ohlc, 1},
    {"_HighFreq_roll_count", (DL_FUNC) &_HighFreq_roll_count, 1},
    {"_HighFreq_roll_ohlc", (DL_FUNC) &_HighFreq_roll_ohlc, 2},
    {"_HighFreq_roll_vec", (DL_FUNC) &_HighFreq_roll_vec, 2},
    {"_HighFreq_roll_vecw", (DL_FUNC) &_HighFreq_roll_vecw, 2},
    {"_HighFreq_roll_conv", (DL_FUNC) &_HighFreq_roll_conv, 2},
    {"_HighFreq_roll_conv_ref", (DL_FUNC) &_HighFreq_roll_conv_ref, 2},
    {"_HighFreq_roll_sum", (DL_FUNC) &_HighFreq_roll_sum, 2},
    {"_HighFreq_roll_wsum", (DL_FUNC) &_HighFreq_roll_wsum, 5},
    {"_HighFreq_roll_var_vec", (DL_FUNC) &_HighFreq_roll_var_vec, 2},
    {"_HighFreq_roll_var", (DL_FUNC) &_HighFreq_roll_var, 7},
    {"_HighFreq_roll_var_ohlc", (DL_FUNC) &_HighFreq_roll_var_ohlc, 9},
    {"_HighFreq_roll_skew", (DL_FUNC) &_HighFreq_roll_skew, 8},
    {"_HighFreq_roll_kurtosis", (DL_FUNC) &_HighFreq_roll_kurtosis, 8},
    {"_HighFreq_roll_reg", (DL_FUNC) &_HighFreq_roll_reg, 12},
    {"_HighFreq_roll_scale", (DL_FUNC) &_HighFreq_roll_scale, 3},
    {"_HighFreq_roll_zscores", (DL_FUNC) &_HighFreq_roll_zscores, 7},
    {"_HighFreq_sim_garch", (DL_FUNC) &_HighFreq_sim_garch, 4},
    {"_HighFreq_sim_ou", (DL_FUNC) &_HighFreq_sim_ou, 4},
    {"_HighFreq_sim_schwartz", (DL_FUNC) &_HighFreq_sim_schwartz, 4},
    {"_HighFreq_sim_arima", (DL_FUNC) &_HighFreq_sim_arima, 2},
    {"_HighFreq_calc_weights", (DL_FUNC) &_HighFreq_calc_weights, 8},
    {"_HighFreq_back_test", (DL_FUNC) &_HighFreq_back_test, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_HighFreq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
