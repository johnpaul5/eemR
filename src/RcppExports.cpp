// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// read_lines
std::vector<Rcpp::CharacterVector> read_lines(std::string path);
RcppExport SEXP eemR_read_lines(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    __result = Rcpp::wrap(read_lines(path));
    return __result;
END_RCPP
}