#include <mkl.h>
double specex_dot(int n, const double *x, const double *y){
  
  return cblas_ddot(n, x, 1, y, 1);

}

