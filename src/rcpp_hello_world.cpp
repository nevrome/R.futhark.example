
#include <Rcpp.h>
using namespace Rcpp;

//' Check if a point is within a polygon (2D)
//' Based on this solution:
//' Copyright (c) 1970-2003, Wm. Randolph Franklin
//' \url{http://wrf.ecse.rpi.edu/pmwiki/pmwiki.php/Main/Software#toc24}
//' For discussion see: \url{http://stackoverflow.com/questions/217578/how-can-i-determine-whether-a-2d-point-is-within-a-polygon/2922778#2922778}
//' @noRd
// [[Rcpp::export]]
List rcpp_hello_world() {

    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}
