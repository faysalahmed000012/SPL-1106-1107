#include <stdio.h>
#include <math.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);

    int sumAB = A + B;
    int sumCD = C + D;
    
    // applying all the conditions
    if(B > C && D > A && sumCD > sumAB && C > 0 && D > 0 && A % 2 == 0){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }

 
    return 0;
}