#include "Rcpp.h"

// Define the method signature

#ifdef __cplusplus
extern "C" {
#endif

#include "futhark_bridge_c_cpp.h"

#ifdef __cplusplus
}
#endif

//' Call C function from Rcpp
//' @export
// [[Rcpp::export]]
SEXP futhark_entry_main_cpp(SEXP a, SEXP b) {

  int32_t a_mod = Rcpp::as<int32_t>(a);
  int32_t b_mod = Rcpp::as<int32_t>(b);

  int32_t ab = futhark_entry_main_c(a_mod, b_mod);

  return Rcpp::wrap(ab);
}
