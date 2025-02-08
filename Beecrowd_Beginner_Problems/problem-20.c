#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int year,months,days,n;
    
    scanf("%d",&n); // taking age as days.

    // calculating  year.
    year = n / 365; // 1 year = 365 days.
    int leftAfterYear = n % 365;
    printf("%d ano(s)\n",year);

    // calculating months.
    months = leftAfterYear / 30; // 1 month = 30 days (generally considered).
    printf("%d mes(es)\n",months);

    days = leftAfterYear % 30; // what's left after months is day.
    printf("%d dia(s)\n",days);
    
 
    return 0;
}