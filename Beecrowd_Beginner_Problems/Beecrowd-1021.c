/*
Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

*/

#include <stdio.h>
#include <math.h>

int main()
{

    double amount;
    scanf("%lf", &amount);

    int remainder = round(amount * 100); // converting everything to coin and rounding up remaining value
    printf("NOTAS:\n");

    // calculating $100 notes
    int oneHundredNotes = remainder / 10000;
    printf("%d nota(s) de R$ 100.00\n", oneHundredNotes);
    int leftAfterOneHundredNotes = remainder % 10000;

    // calculating $50 notes
    int fiftyNotes = leftAfterOneHundredNotes / 5000;
    printf("%d nota(s) de R$ 50.00\n", fiftyNotes);
    int leftAfterFiftyNotes = leftAfterOneHundredNotes % 5000;

    // calculating $20 notes
    int twentyNotes = leftAfterFiftyNotes / 2000;
    printf("%d nota(s) de R$ 20.00\n", twentyNotes);
    int leftAfterTwentyNotes = leftAfterFiftyNotes % 2000;

    // calculating $10 notes
    int tenNotes = leftAfterTwentyNotes / 1000;
    printf("%d nota(s) de R$ 10.00\n", tenNotes);
    int leftAfterTenNotes = leftAfterTwentyNotes % 1000;

    // calculating $5 notes
    int fiveNotes = leftAfterTenNotes / 500;
    printf("%d nota(s) de R$ 5.00\n", fiveNotes);
    int leftAfterFiveNotes = leftAfterTenNotes % 500;

    // calculating $2 notes
    int twoNotes = leftAfterFiveNotes / 200;
    printf("%d nota(s) de R$ 2.00\n", twoNotes);
    int leftAfterTwoNotes = leftAfterFiveNotes % 200;

    printf("MOEDAS:\n");

    // calculating $1 coins
    int oneCoin = leftAfterTwoNotes / 100;
    printf("%d moeda(s) de R$ 1.00\n", oneCoin);
    int leftAfterOneCoin = leftAfterTwoNotes % 100;

    // calculating $0.50 coins
    int fiftyCents = leftAfterOneCoin / 50;
    printf("%d moeda(s) de R$ 0.50\n", fiftyCents);
    int leftAfterFiftyCents = leftAfterOneCoin % 50;

    // calculating $0.25 coins
    int twentyFiveCents = leftAfterFiftyCents / 25;
    printf("%d moeda(s) de R$ 0.25\n", twentyFiveCents);
    int leftAfterTwentyFiveCents = leftAfterFiftyCents % 25;

    // calculating $0.10 coins
    int tenCents = leftAfterTwentyFiveCents / 10;
    printf("%d moeda(s) de R$ 0.10\n", tenCents);
    int leftAfterTenCents = leftAfterTwentyFiveCents % 10;

    // calculating $0.05 coins
    int fiveCents = leftAfterTenCents / 5;
    printf("%d moeda(s) de R$ 0.05\n", fiveCents);
    int leftAfterFiveCents = leftAfterTenCents % 5;

    // calculating $0.01 coins
    int oneCent = leftAfterFiveCents;
    printf("%d moeda(s) de R$ 0.01\n", oneCent);

    return 0;
}
