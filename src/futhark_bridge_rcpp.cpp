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
int32_t futhark_entry_main_cpp(int32_t a, int32_t b) {

  int32_t ab = futhark_entry_main_c(a, b);

  return ab;
}
