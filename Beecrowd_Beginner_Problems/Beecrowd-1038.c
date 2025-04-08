/*
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.



Input
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

*/

#include <stdio.h>

int main()
{

    int code, quantity;
    float price;

    scanf("%d %d", &code, &quantity);

    // setup different prices for different codes.
    switch (code)
    {
    case 1:
        price = 4.00;
        break;
    case 2:
        price = 4.50;
        break;
    case 3:
        price = 5.00;
        break;
    case 4:
        price = 2.00;
        break;

    case 5:
        price = 1.50;
        break;
    default:
        printf("Invalid Product code. \n");
        break;
    }

    float subtotal = price * quantity;

    printf("Total: R$ %.2f\n", subtotal);

    return 0;
}
