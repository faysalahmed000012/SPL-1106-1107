/*
Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.


*/

#include <stdio.h>

int main()
{
    int positive = 0;
    float num;

    /*
    The loop will run 6 times to get values. It will increase the value of positive number counter if the number is positive.

    */
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            positive++;
        }
    }

    printf("%d valores positivos\n", positive);

    return 0;
}