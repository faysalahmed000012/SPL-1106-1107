/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.

*/

#include <stdio.h>
#define PI 3.14159

int main()
{

    // initializing all the variables
    double A, B, C;
    double areaTriangle, areaCircle, areaTrapezium, areaSquare, areaRectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    // calculating area of triangle, circle, trapezium, square and recangle
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