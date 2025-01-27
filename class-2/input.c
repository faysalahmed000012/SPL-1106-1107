#include <stdio.h>


void main(){
    int num1,num2; // variable declaration.
    printf("Input the First Number : ");
    scanf("%d",&num1);
    printf("Input the Second Number :");
    scanf("%d",&num2);

    float avg = (num1 + num2)/2.0;

    printf("The Average of %d and %d is %.2f.\n",num1,num2,avg);

}
