// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lag_vec
arma::vec lag_vec(arma::vec se_ries, arma::sword lagg, bool pad_zeros);
RcppExport SEXP _HighFreq_lag_vec(SEXP se_riesSEXP, SEXP laggSEXP, SEXP pad_zerosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::sword >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type pad_zeros(pad_zerosSEXP);
    rcpp_result_gen = Rcpp::wrap(lag_vec(se_ries, lagg, pad_zeros));
    return rcpp_result_gen;
END_RCPP
}
// lag_it
arma::mat lag_it(arma::mat se_ries, arma::sword lagg, bool pad_zeros);
RcppExport SEXP _HighFreq_lag_it(SEXP se_riesSEXP, SEXP laggSEXP, SEXP pad_zerosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::sword >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type pad_zeros(pad_zerosSEXP);
    rcpp_result_gen = Rcpp::wrap(lag_it(se_ries, lagg, pad_zeros));
    return rcpp_result_gen;
END_RCPP
}
// diff_vec
arma::vec diff_vec(arma::vec se_ries, int lagg, bool padd);
RcppExport SEXP _HighFreq_diff_vec(SEXP se_riesSEXP, SEXP laggSEXP, SEXP paddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< int >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type padd(paddSEXP);
    rcpp_result_gen = Rcpp::wrap(diff_vec(se_ries, lagg, padd));
    return rcpp_result_gen;
END_RCPP
}
// diff_it
arma::mat diff_it(arma::mat se_ries, arma::uword lagg, bool padd);
RcppExport SEXP _HighFreq_diff_it(SEXP se_riesSEXP, SEXP laggSEXP, SEXP paddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type lagg(laggSEXP);
    Rcpp::traits::input_parameter< bool >::type padd(paddSEXP);
    rcpp_result_gen = Rcpp::wrap(diff_it(se_ries, lagg, padd));
    return rcpp_result_gen;
END_RCPP
}
// calc_endpoints
arma::uvec calc_endpoints(arma::uword len_gth, arma::uword ste_p, bool front);
RcppExport SEXP _HighFreq_calc_endpoints(SEXP len_gthSEXP, SEXP ste_pSEXP, SEXP frontSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type len_gth(len_gthSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ste_p(ste_pSEXP);
    Rcpp::traits::input_parameter< bool >::type front(frontSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_endpoints(len_gth, ste_p, front));
    return rcpp_result_gen;
END_RCPP
}
// calc_startpoints
arma::uvec calc_startpoints(arma::uvec end_p, arma::uword look_back);
RcppExport SEXP _HighFreq_calc_startpoints(SEXP end_pSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type end_p(end_pSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_startpoints(end_p, look_back));
    return rcpp_result_gen;
END_RCPP
}
// mult_vec_mat
arma::uword mult_vec_mat(arma::vec vec_tor, arma::mat mat_rix, bool by_col);
RcppExport SEXP _HighFreq_mult_vec_mat(SEXP vec_torSEXP, SEXP mat_rixSEXP, SEXP by_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vec_tor(vec_torSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mat_rix(mat_rixSEXP);
    Rcpp::traits::input_parameter< bool >::type by_col(by_colSEXP);
    rcpp_result_gen = Rcpp::wrap(mult_vec_mat(vec_tor, mat_rix, by_col));
    return rcpp_result_gen;
END_RCPP
}
// calc_eigen
List calc_eigen(arma::mat re_turns);
RcppExport SEXP _HighFreq_calc_eigen(SEXP re_turnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type re_turns(re_turnsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_eigen(re_turns));
    return rcpp_result_gen;
END_RCPP
}
// calc_inv
arma::mat calc_inv(arma::mat re_turns, double to_l, int max_eigen);
RcppExport SEXP _HighFreq_calc_inv(SEXP re_turnsSEXP, SEXP to_lSEXP, SEXP max_eigenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type re_turns(re_turnsSEXP);
    Rcpp::traits::input_parameter< double >::type to_l(to_lSEXP);
    Rcpp::traits::input_parameter< int >::type max_eigen(max_eigenSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_inv(re_turns, to_l, max_eigen));
    return rcpp_result_gen;
END_RCPP
}
// calc_scaled
arma::mat calc_scaled(arma::mat se_ries, bool use_median);
RcppExport SEXP _HighFreq_calc_scaled(SEXP se_riesSEXP, SEXP use_medianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< bool >::type use_median(use_medianSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_scaled(se_ries, use_median));
    return rcpp_result_gen;
END_RCPP
}
// calc_var_vec
double calc_var_vec(arma::vec se_ries);
RcppExport SEXP _HighFreq_calc_var_vec(SEXP se_riesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type se_ries(se_riesSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var_vec(se_ries));
    return rcpp_result_gen;
END_RCPP
}
// calc_var
arma::rowvec calc_var(arma::mat se_ries, std::string method);
RcppExport SEXP _HighFreq_calc_var(SEXP se_riesSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var(se_ries, method));
    return rcpp_result_gen;
END_RCPP
}
// calc_var_ohlc
double calc_var_ohlc(arma::mat oh_lc, std::string method, arma::colvec lag_close, bool scal_e, arma::colvec in_dex);
RcppExport SEXP _HighFreq_calc_var_ohlc(SEXP oh_lcSEXP, SEXP methodSEXP, SEXP lag_closeSEXP, SEXP scal_eSEXP, SEXP in_dexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type oh_lc(oh_lcSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type lag_close(lag_closeSEXP);
    Rcpp::traits::input_parameter< bool >::type scal_e(scal_eSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type in_dex(in_dexSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_var_ohlc(oh_lc, method, lag_close, scal_e, in_dex));
    return rcpp_result_gen;
END_RCPP
}
// calc_ranks
arma::uvec calc_ranks(arma::vec vec_tor);
RcppExport SEXP _HighFreq_calc_ranks(SEXP vec_torSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vec_tor(vec_torSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ranks(vec_tor));
    return rcpp_result_gen;
END_RCPP
}
// calc_skew
arma::mat calc_skew(arma::mat se_ries, std::string method, double al_pha);
RcppExport SEXP _HighFreq_calc_skew(SEXP se_riesSEXP, SEXP methodSEXP, SEXP al_phaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_skew(se_ries, method, al_pha));
    return rcpp_result_gen;
END_RCPP
}
// calc_kurtosis
arma::mat calc_kurtosis(arma::mat se_ries, std::string method, double al_pha);
RcppExport SEXP _HighFreq_calc_kurtosis(SEXP se_riesSEXP, SEXP methodSEXP, SEXP al_phaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_kurtosis(se_ries, method, al_pha));
    return rcpp_result_gen;
END_RCPP
}
// calc_lm
Rcpp::List calc_lm(arma::vec res_ponse, arma::mat de_sign);
RcppExport SEXP _HighFreq_calc_lm(SEXP res_ponseSEXP, SEXP de_signSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type res_ponse(res_ponseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type de_sign(de_signSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_lm(res_ponse, de_sign));
    return rcpp_result_gen;
END_RCPP
}
// agg_ohlc
arma::mat agg_ohlc(arma::mat se_ries);
RcppExport SEXP _HighFreq_agg_ohlc(SEXP se_riesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    rcpp_result_gen = Rcpp::wrap(agg_ohlc(se_ries));
    return rcpp_result_gen;
END_RCPP
}
// roll_count
arma::uvec roll_count(arma::uvec vec_tor);
RcppExport SEXP _HighFreq_roll_count(SEXP vec_torSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type vec_tor(vec_torSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_count(vec_tor));
    return rcpp_result_gen;
END_RCPP
}
// roll_ohlc
arma::mat roll_ohlc(arma::mat se_ries, arma::uvec end_p);
RcppExport SEXP _HighFreq_roll_ohlc(SEXP se_riesSEXP, SEXP end_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type end_p(end_pSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_ohlc(se_ries, end_p));
    return rcpp_result_gen;
END_RCPP
}
// roll_vec
NumericVector roll_vec(NumericVector se_ries, int look_back);
RcppExport SEXP _HighFreq_roll_vec(SEXP se_riesSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< int >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_vec(se_ries, look_back));
    return rcpp_result_gen;
END_RCPP
}
// roll_vecw
arma::vec roll_vecw(arma::vec se_ries, arma::vec weight_s);
RcppExport SEXP _HighFreq_roll_vecw(SEXP se_riesSEXP, SEXP weight_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weight_s(weight_sSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_vecw(se_ries, weight_s));
    return rcpp_result_gen;
END_RCPP
}
// roll_conv
arma::mat roll_conv(arma::mat se_ries, arma::mat weight_s);
RcppExport SEXP _HighFreq_roll_conv(SEXP se_riesSEXP, SEXP weight_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weight_s(weight_sSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_conv(se_ries, weight_s));
    return rcpp_result_gen;
END_RCPP
}
// roll_conv_ref
arma::mat roll_conv_ref(arma::mat se_ries, arma::mat weight_s);
RcppExport SEXP _HighFreq_roll_conv_ref(SEXP se_riesSEXP, SEXP weight_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weight_s(weight_sSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_conv_ref(se_ries, weight_s));
    return rcpp_result_gen;
END_RCPP
}
// roll_sum
arma::mat roll_sum(arma::mat se_ries, arma::uword look_back);
RcppExport SEXP _HighFreq_roll_sum(SEXP se_riesSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_sum(se_ries, look_back));
    return rcpp_result_gen;
END_RCPP
}
// roll_wsum
arma::mat roll_wsum(arma::mat se_ries, arma::uword look_back, Rcpp::Nullable<int> stu_b, Rcpp::Nullable<Rcpp::IntegerVector> end_p, Rcpp::Nullable<Rcpp::NumericVector> weight_s);
RcppExport SEXP _HighFreq_roll_wsum(SEXP se_riesSEXP, SEXP look_backSEXP, SEXP stu_bSEXP, SEXP end_pSEXP, SEXP weight_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type stu_b(stu_bSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type end_p(end_pSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type weight_s(weight_sSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_wsum(se_ries, look_back, stu_b, end_p, weight_s));
    return rcpp_result_gen;
END_RCPP
}
// roll_var_vec
arma::vec roll_var_vec(arma::vec se_ries, arma::uword look_back);
RcppExport SEXP _HighFreq_roll_var_vec(SEXP se_riesSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var_vec(se_ries, look_back));
    return rcpp_result_gen;
END_RCPP
}
// roll_var
arma::mat roll_var(arma::mat se_ries, arma::uword ste_p, arma::uword look_back, std::string method);
RcppExport SEXP _HighFreq_roll_var(SEXP se_riesSEXP, SEXP ste_pSEXP, SEXP look_backSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ste_p(ste_pSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var(se_ries, ste_p, look_back, method));
    return rcpp_result_gen;
END_RCPP
}
// roll_var_ohlc
arma::vec roll_var_ohlc(arma::mat oh_lc, arma::uword ste_p, arma::uword look_back, std::string method, bool scal_e, arma::colvec in_dex);
RcppExport SEXP _HighFreq_roll_var_ohlc(SEXP oh_lcSEXP, SEXP ste_pSEXP, SEXP look_backSEXP, SEXP methodSEXP, SEXP scal_eSEXP, SEXP in_dexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type oh_lc(oh_lcSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ste_p(ste_pSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type scal_e(scal_eSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type in_dex(in_dexSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_var_ohlc(oh_lc, ste_p, look_back, method, scal_e, in_dex));
    return rcpp_result_gen;
END_RCPP
}
// roll_skew
arma::mat roll_skew(arma::mat se_ries, arma::uword ste_p, arma::uword look_back, std::string method, double al_pha);
RcppExport SEXP _HighFreq_roll_skew(SEXP se_riesSEXP, SEXP ste_pSEXP, SEXP look_backSEXP, SEXP methodSEXP, SEXP al_phaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ste_p(ste_pSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_skew(se_ries, ste_p, look_back, method, al_pha));
    return rcpp_result_gen;
END_RCPP
}
// roll_kurtosis
arma::mat roll_kurtosis(arma::mat se_ries, arma::uword ste_p, arma::uword look_back, std::string method, double al_pha);
RcppExport SEXP _HighFreq_roll_kurtosis(SEXP se_riesSEXP, SEXP ste_pSEXP, SEXP look_backSEXP, SEXP methodSEXP, SEXP al_phaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type se_ries(se_riesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ste_p(ste_pSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_kurtosis(se_ries, ste_p, look_back, method, al_pha));
    return rcpp_result_gen;
END_RCPP
}
// roll_scale
arma::mat roll_scale(arma::mat mat_rix, arma::uword look_back, bool use_median);
RcppExport SEXP _HighFreq_roll_scale(SEXP mat_rixSEXP, SEXP look_backSEXP, SEXP use_medianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mat_rix(mat_rixSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    Rcpp::traits::input_parameter< bool >::type use_median(use_medianSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_scale(mat_rix, look_back, use_median));
    return rcpp_result_gen;
END_RCPP
}
// roll_zscores
arma::vec roll_zscores(arma::vec res_ponse, arma::mat de_sign, arma::uword look_back);
RcppExport SEXP _HighFreq_roll_zscores(SEXP res_ponseSEXP, SEXP de_signSEXP, SEXP look_backSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type res_ponse(res_ponseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type de_sign(de_signSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type look_back(look_backSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_zscores(res_ponse, de_sign, look_back));
    return rcpp_result_gen;
END_RCPP
}
// sim_garch
NumericMatrix sim_garch(double om_ega, double al_pha, double be_ta, NumericVector in_nov);
RcppExport SEXP _HighFreq_sim_garch(SEXP om_egaSEXP, SEXP al_phaSEXP, SEXP be_taSEXP, SEXP in_novSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type om_ega(om_egaSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    Rcpp::traits::input_parameter< double >::type be_ta(be_taSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type in_nov(in_novSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_garch(om_ega, al_pha, be_ta, in_nov));
    return rcpp_result_gen;
END_RCPP
}
// sim_ou
NumericVector sim_ou(double eq_price, double vol_at, double the_ta, NumericVector in_nov);
RcppExport SEXP _HighFreq_sim_ou(SEXP eq_priceSEXP, SEXP vol_atSEXP, SEXP the_taSEXP, SEXP in_novSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type eq_price(eq_priceSEXP);
    Rcpp::traits::input_parameter< double >::type vol_at(vol_atSEXP);
    Rcpp::traits::input_parameter< double >::type the_ta(the_taSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type in_nov(in_novSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_ou(eq_price, vol_at, the_ta, in_nov));
    return rcpp_result_gen;
END_RCPP
}
// sim_schwartz
NumericVector sim_schwartz(double eq_price, double vol_at, double the_ta, NumericVector in_nov);
RcppExport SEXP _HighFreq_sim_schwartz(SEXP eq_priceSEXP, SEXP vol_atSEXP, SEXP the_taSEXP, SEXP in_novSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type eq_price(eq_priceSEXP);
    Rcpp::traits::input_parameter< double >::type vol_at(vol_atSEXP);
    Rcpp::traits::input_parameter< double >::type the_ta(the_taSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type in_nov(in_novSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_schwartz(eq_price, vol_at, the_ta, in_nov));
    return rcpp_result_gen;
END_RCPP
}
// sim_arima
arma::vec sim_arima(arma::vec in_nov, arma::vec co_eff);
RcppExport SEXP _HighFreq_sim_arima(SEXP in_novSEXP, SEXP co_effSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type in_nov(in_novSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type co_eff(co_effSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_arima(in_nov, co_eff));
    return rcpp_result_gen;
END_RCPP
}
// calc_weights
arma::vec calc_weights(arma::mat re_turns, std::string model_type, double to_l, int max_eigen, double pro_b, double al_pha, bool scal_e, double vo_l);
RcppExport SEXP _HighFreq_calc_weights(SEXP re_turnsSEXP, SEXP model_typeSEXP, SEXP to_lSEXP, SEXP max_eigenSEXP, SEXP pro_bSEXP, SEXP al_phaSEXP, SEXP scal_eSEXP, SEXP vo_lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type re_turns(re_turnsSEXP);
    Rcpp::traits::input_parameter< std::string >::type model_type(model_typeSEXP);
    Rcpp::traits::input_parameter< double >::type to_l(to_lSEXP);
    Rcpp::traits::input_parameter< int >::type max_eigen(max_eigenSEXP);
    Rcpp::traits::input_parameter< double >::type pro_b(pro_bSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    Rcpp::traits::input_parameter< bool >::type scal_e(scal_eSEXP);
    Rcpp::traits::input_parameter< double >::type vo_l(vo_lSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_weights(re_turns, model_type, to_l, max_eigen, pro_b, al_pha, scal_e, vo_l));
    return rcpp_result_gen;
END_RCPP
}
// back_test
arma::mat back_test(arma::mat ex_cess, arma::mat re_turns, arma::uvec start_p, arma::uvec end_p, std::string model_type, double to_l, int max_eigen, double pro_b, double al_pha, bool scal_e, double vo_l, double co_eff, double bid_offer);
RcppExport SEXP _HighFreq_back_test(SEXP ex_cessSEXP, SEXP re_turnsSEXP, SEXP start_pSEXP, SEXP end_pSEXP, SEXP model_typeSEXP, SEXP to_lSEXP, SEXP max_eigenSEXP, SEXP pro_bSEXP, SEXP al_phaSEXP, SEXP scal_eSEXP, SEXP vo_lSEXP, SEXP co_effSEXP, SEXP bid_offerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type ex_cess(ex_cessSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type re_turns(re_turnsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type start_p(start_pSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type end_p(end_pSEXP);
    Rcpp::traits::input_parameter< std::string >::type model_type(model_typeSEXP);
    Rcpp::traits::input_parameter< double >::type to_l(to_lSEXP);
    Rcpp::traits::input_parameter< int >::type max_eigen(max_eigenSEXP);
    Rcpp::traits::input_parameter< double >::type pro_b(pro_bSEXP);
    Rcpp::traits::input_parameter< double >::type al_pha(al_phaSEXP);
    Rcpp::traits::input_parameter< bool >::type scal_e(scal_eSEXP);
    Rcpp::traits::input_parameter< double >::type vo_l(vo_lSEXP);
    Rcpp::traits::input_parameter< double >::type co_eff(co_effSEXP);
    Rcpp::traits::input_parameter< double >::type bid_offer(bid_offerSEXP);
    rcpp_result_gen = Rcpp::wrap(back_test(ex_cess, re_turns, start_p, end_p, model_type, to_l, max_eigen, pro_b, al_pha, scal_e, vo_l, co_eff, bid_offer));
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
    {"_HighFreq_roll_var", (DL_FUNC) &_HighFreq_roll_var, 4},
    {"_HighFreq_roll_var_ohlc", (DL_FUNC) &_HighFreq_roll_var_ohlc, 6},
    {"_HighFreq_roll_skew", (DL_FUNC) &_HighFreq_roll_skew, 5},
    {"_HighFreq_roll_kurtosis", (DL_FUNC) &_HighFreq_roll_kurtosis, 5},
    {"_HighFreq_roll_scale", (DL_FUNC) &_HighFreq_roll_scale, 3},
    {"_HighFreq_roll_zscores", (DL_FUNC) &_HighFreq_roll_zscores, 3},
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
