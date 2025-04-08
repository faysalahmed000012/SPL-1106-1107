/*
Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.

Input
The input will be a positive integer value.

Output
The output will be a sequence of six odd numbers.

*/

#include <stdio.h>

int main()
{

    int num;

    scanf("%d", &num);

    // loop will run 6 times to print 6 numbers
    for (int i = 0; i < 6; num++)
    {
        // only increase if the numer is odd
        if (num % 2 != 0)
        {
            printf("%d\n", num);
            i++;
        }
    }

    return 0;
}