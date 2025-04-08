/*
Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

*/

#include <stdio.h>

int main()
{

    int a, b, c, d, differenceProduct; // initializing a,b,c,d and differenceProduct.

    scanf("%d %d %d %d", &a, &b, &c, &d); // taking a,b,c,d as input;

    differenceProduct = (a * b - c * d); // calculating differenceProduct

    printf("DIFERENCA = %d\n", differenceProduct);

    return 0;
}