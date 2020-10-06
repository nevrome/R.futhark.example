devtools::document()
Rcpp::compileAttributes()
system("cd src && futhark c --library futhark_test.fut")
devtools::install()
