#include <stdio.h>

int main(){

    int a,b,c,d,differenceProduct; // initializing a,b,c,d and differenceProduct.

    scanf("%d %d %d %d",&a,&b,&c,&d); // taking a,b,c,d as input;

    differenceProduct = (a * b - c * d);  //calculating differenceProduct

    printf("DIFERENCA = %d\n",differenceProduct);

    return 0;
}