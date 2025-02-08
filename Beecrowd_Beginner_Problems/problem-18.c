#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    // possible bank notes are : 100,50,20,10,5,2 and 1.
    
    int amount;
    scanf("%d",&amount);
    printf("%d\n",amount);

    // calculating $100 notes.
    int oneHundredNotes = amount / 100;
    printf("%d nota(s) de R$ 100,00\n",oneHundredNotes);
    int leftAfterOneHundredNotes = amount % 100;
   
    // calculating $50 notes.
    int fiftyNotes = leftAfterOneHundredNotes / 50;
    printf("%d nota(s) de R$ 50,00\n",fiftyNotes);
    int leftAfterFiftyNotes = leftAfterOneHundredNotes % 50;

    // calculating $20 notes.
    int twentyNotes = leftAfterFiftyNotes / 20;
    printf("%d nota(s) de R$ 20,00\n",twentyNotes);
    int leftAfterTwentyNotes = leftAfterFiftyNotes % 20;
    
    // calculating $10 notes.
    int tenNotes = leftAfterTwentyNotes / 10;
    printf("%d nota(s) de R$ 10,00\n",tenNotes);
    int leftAfterTenNotes = leftAfterTwentyNotes % 10;

    // calculating $5 notes.
    int fiveNotes = leftAfterTenNotes / 5;
    printf("%d nota(s) de R$ 5,00\n",fiveNotes);
    int leftAfterFiveNotes = leftAfterTenNotes % 5;

    // calculating $2 notes.
    int twoNotes = leftAfterFiveNotes / 2;
    printf("%d nota(s) de R$ 2,00\n",twoNotes);
    int leftAfterTwoNotes = leftAfterFiveNotes % 2;

    // calculating $1 notes.
    printf("%d nota(s) de R$ 1,00\n",leftAfterTwoNotes);
 
    return 0;
}