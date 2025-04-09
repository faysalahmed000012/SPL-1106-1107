/*
Read an integer N. This N will be the number of integer numbers X that will be read.

Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.


Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases.
Each case is an integer number X (-107 < X < 107).



Output
For each test case, print how many numbers are in and how many values are out of the interval.


*/

#include <stdio.h>

int main()
{

    int n, x, in = 0, out = 0;

    scanf("%d", &n);

    /*
    The loop will run n times, and take a value from user. If the number is between 10 and 20, the value of in will be increased otherwise out will increase.
    */

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}