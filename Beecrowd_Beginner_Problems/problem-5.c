#include <stdio.h>

int main(){

    float a,b,average; // initializing float a,b and average.
    scanf("%f",&a); 
    scanf("%f",&b);

    average = (a*3.5 + b*7.5)/(3.5 + 7.5); // calculating weighted average

    printf("MEDIA = %.5f\n",average); 

    return 0;
}