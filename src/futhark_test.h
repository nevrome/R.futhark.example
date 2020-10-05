#pragma once

// Headers

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>


// Initialisation

struct futhark_context_config ;
struct futhark_context_config *futhark_context_config_new(void);
void futhark_context_config_free(struct futhark_context_config *cfg);
void futhark_context_config_set_debugging(struct futhark_context_config *cfg,
                                          int flag);
void futhark_context_config_set_logging(struct futhark_context_config *cfg,
                                        int flag);
struct futhark_context ;
struct futhark_context *futhark_context_new(struct futhark_context_config *cfg);
void futhark_context_free(struct futhark_context *ctx);

// Arrays


// Opaque values


// Entry points

int futhark_entry_main(struct futhark_context *ctx, int32_t *out0, const
                       int32_t in0, const int32_t in1);

// Miscellaneous

int futhark_context_sync(struct futhark_context *ctx);
int futhark_context_clear_caches(struct futhark_context *ctx);
char *futhark_context_report(struct futhark_context *ctx);
char *futhark_context_get_error(struct futhark_context *ctx);
void futhark_context_pause_profiling(struct futhark_context *ctx);
void futhark_context_unpause_profiling(struct futhark_context *ctx);
#define FUTHARK_BACKEND_c
