/*
Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many of these values ​​are even, odd, positive and negative.

*/

#include <stdio.h>

int main()
{

    int even = 0, odd = 0, pos = 0, neg = 0, num;

    /*
    The loop will run 5 times to get values. It will increase the value of positive, negative, even, odd number counter accordingly.
    */

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}