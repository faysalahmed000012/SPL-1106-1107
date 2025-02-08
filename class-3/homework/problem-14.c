#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int distance;
    float consumption;
    scanf("%d %f",&distance,&consumption);

    float average = distance / consumption;

    printf("%.3f km/l\n",average);
 
    return 0;
}