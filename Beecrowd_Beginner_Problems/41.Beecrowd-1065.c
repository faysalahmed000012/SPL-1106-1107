/*
Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many even numbers were typed.

*/

#include <stdio.h>

int main()
{

    int count = 0;
    int num;

    /*

    The loop will run 5 times to get values. It will increase the value of even number counter if the number is even.
    */

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            count++;
        }
    }

    printf("%d valores pares\n", count);

    return 0;
}