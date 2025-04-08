/*
Write a program that prints all even numbers between 1 and 100, including them if it is the case.

Input
In this extremely simple problem there is no input.

Output
Print all even numbers between 1 and 100, including them, one by row.

*/

#include <stdio.h>

int main()
{

    // running loop as such only even number will be the value of i.
    for (int i = 2; i <= 100; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}