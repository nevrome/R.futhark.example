#include <R.h>
#include <Rinternals.h>

#include "futhark_test.h"
#include "futhark_bridge_c_cpp.h"

int32_t futhark_entry_main_c(int32_t a, int32_t b) {

  struct futhark_context_config *cfg = futhark_context_config_new();
  struct futhark_context *ctx = futhark_context_new(cfg);

  int32_t *res = NULL;

  futhark_entry_main(ctx, res, a, b);

  return *res;

}
