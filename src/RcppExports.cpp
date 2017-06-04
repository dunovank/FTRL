// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// omp_thread_count
int omp_thread_count();
RcppExport SEXP FTRL_omp_thread_count() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(omp_thread_count());
    return rcpp_result_gen;
END_RCPP
}
// get_ftrl_weights
NumericVector get_ftrl_weights(const List& R_model);
RcppExport SEXP FTRL_get_ftrl_weights(SEXP R_modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type R_model(R_modelSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ftrl_weights(R_model));
    return rcpp_result_gen;
END_RCPP
}
// ftrl_partial_fit
NumericVector ftrl_partial_fit(const S4& m, const NumericVector& y, const List& R_model, const NumericVector& weights, int do_update, int n_threads);
RcppExport SEXP FTRL_ftrl_partial_fit(SEXP mSEXP, SEXP ySEXP, SEXP R_modelSEXP, SEXP weightsSEXP, SEXP do_updateSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const S4& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type R_model(R_modelSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type do_update(do_updateSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(ftrl_partial_fit(m, y, R_model, weights, do_update, n_threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"FTRL_omp_thread_count", (DL_FUNC) &FTRL_omp_thread_count, 0},
    {"FTRL_get_ftrl_weights", (DL_FUNC) &FTRL_get_ftrl_weights, 1},
    {"FTRL_ftrl_partial_fit", (DL_FUNC) &FTRL_ftrl_partial_fit, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_FTRL(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
