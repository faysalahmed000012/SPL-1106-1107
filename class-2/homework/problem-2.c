#include <stdio.h>

int main(){
    double n,r,area;  // initializing n(pi),r(radius) and area as double

    n = 3.14159;     // assigning n as given value of pi.

    scanf("%lf",&r); // taking radius as input from user

    area = n * r * r;   // calculating area of the circle 

    printf("A=%.4lf\n",area);
    
    return 0;
}