/*
Read two integer values X and Y. Print the sum of all odd values between them.

Input
The input file contain two integer values.

Output
The program must print an integer number. This number is the sum off all odd values between both input values that must fit in an integer number.


*/

#include <stdio.h>

int main()
{

    int num1, num2, sum = 0;

    scanf("%d %d", &num1, &num2);

    // making sure num1 is the bigger one.
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    /*
    integer i in the loop will only give the integers between these two numbers.

    */
    for (int i = num1 + 1; i < num2; i++)
    {
        // adding only odd numbers to the sum.
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}