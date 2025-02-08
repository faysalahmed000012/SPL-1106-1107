#include <stdio.h>
#define PI 3.14159   // defining PI as global constant (not shown in the class)
 
int main() {
 
    double radius, volume;  // initializing radius and volume.

   
    scanf("%lf", &radius);

   
    volume = (4.0/3.0) * PI * radius * radius * radius;  // calculating volume. using .0 so that compiler does not cast type to int. 

    
    printf("VOLUME = %.3f\n", volume);

    return 0;
}