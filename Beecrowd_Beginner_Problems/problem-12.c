#include <stdio.h>
#define PI 3.14159
 
int main() {
 

     double A, B, C;
     double areaTriangle, areaCircle, areaTrapezium, areaSquare, areaRectangle;

 
    scanf("%lf %lf %lf", &A, &B, &C);

   
    areaTriangle = (A * C) / 2.0;
    areaCircle = PI * C * C;
    areaTrapezium = ((A + B) * C) / 2.0;
    areaSquare = B * B;
    areaRectangle = A * B;

   
    printf("TRIANGULO: %.3f\n", areaTriangle);
    printf("CIRCULO: %.3f\n", areaCircle);
    printf("TRAPEZIO: %.3f\n", areaTrapezium);
    printf("QUADRADO: %.3f\n", areaSquare);
    printf("RETANGULO: %.3f\n", areaRectangle);

    
 
    return 0;
}