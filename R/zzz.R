#' @useDynLib R.futhark.example
#' @importFrom Rcpp evalCpp
NULL

#' @export
.onUnload <- function(libpath) {
  library.dynam.unload("R.futhark.example", libpath)
}
