#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int hour,minute,seconds,n;
    scanf("%d",&n);  // taking n as seconds.
 
    // calculating hour.
     hour = n / 3600; // 1 hour = 3600 seconds.
    int leftAfterHour = n % 3600;

    // calculating minutes.
     minute = leftAfterHour / 60; // 1 minute = 60 seconds.
     seconds = leftAfterHour % 60;
     
     printf("%d:%d:%d\n",hour,minute,seconds);
 
    return 0;
}