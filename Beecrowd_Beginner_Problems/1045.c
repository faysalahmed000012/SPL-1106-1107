#include <stdio.h>


void threeItemSort(double *x,double *y,double *z){
    double temp;
    if (*x < *y) { temp = *x; *x = *y; *y = temp; }
    if (*x < *z) { temp = *x; *x = *z; *z = temp; }
    if (*y < *z) { temp = *y; *y = *z; *z = temp; }
}

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", & a, & b, & c);

  threeItemSort(&a,&b,&c);

  if (a >= (b + c)) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if (a * a == b * b + c * c) {
      printf("TRIANGULO RETANGULO\n");
    }
    if (a * a > b * b + c * c) {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if (a * a < b * b + c * c) {
      printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || b == c || a == c) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}