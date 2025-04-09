/*
Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.

Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases. Each case is a integer number X (-107 < X <107)..

Output
For each test case, print a corresponding message, according to the below example. All messages must be printed in uppercase letters and always will have one space between two words in the same line.
*/

#include <stdio.h>

int main()
{

    int range, num;

    scanf("%d", &range);

    /*
    The loop will run 'range' times. Each time it will take a value and check even-odd and positive-negative.
    */

    for (int i = 0; i < range; i++)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            printf("NULL\n");
        }
        else if (num % 2 == 0)
        {
            if (num > 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("EVEN NEGATIVE\n");
            }
        }
        else
        {

            if (num > 0)
            {
                printf("ODD POSITIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}