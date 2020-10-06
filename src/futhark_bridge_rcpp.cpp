#include "Rcpp.h"
using namespace Rcpp;

extern "C" int32_t futhark_entry_main_c(int32_t a, int32_t b);

//' Call C function from Rcpp
//' @export
// [[Rcpp::export]]
SEXP futhark_entry_main_cpp(SEXP a, SEXP b) {

  int32_t a_mod = Rcpp::as<int32_t>(a);
  int32_t b_mod = Rcpp::as<int32_t>(b);

  int32_t ab = futhark_entry_main_c(a_mod, b_mod);

  return Rcpp::wrap(ab);
}
