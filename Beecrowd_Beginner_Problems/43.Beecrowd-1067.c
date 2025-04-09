/*
Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

Input
The input will be an integer value.

Output
Print all odd values between 1 and X, including X if is the case.

*/

#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    // running loop as such only odd numbers will be the value of i.
    for (int i = 1; i <= num; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}