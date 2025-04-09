/*
Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:


Perimetro = XX.X


If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:


Area = XX.X

Input
The input file has tree floating point numbers.

Output
Print the result with one digit after the decimal point.

*/

#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    // checking if a triangle is possible
    /*
    Any two sides must be greater than the third side
    */
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        float perimeter = a + b + c;
        printf("Perimetro = %.1f\n", perimeter);
    }
    else
    {
        float area = ((a + b) * c) / 2.0;
        printf("Area = %.1f\n", area);
    }

    return 0;
}