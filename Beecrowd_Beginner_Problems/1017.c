#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    float time,speed, fuelEconomy = 12;  
    scanf("%f %f",&time,&speed);  // taking values as float to prevent type casting.
    float fuelNeeded = (speed * time) / fuelEconomy; // s=vt and 12km for each litter

    printf("%.3f\n",fuelNeeded);
    
 
    return 0;
}