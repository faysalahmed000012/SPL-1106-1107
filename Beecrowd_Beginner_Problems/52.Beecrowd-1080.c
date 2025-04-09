/*
Read 100 integer numbers. Print the highest read value and the input position.

Input
The input file contains 100 distinct positive integer numbers.

Output
Print the highest number read and the input position of this value, according to the given example.
*/

#include <stdio.h>

int main()
{

    int max = 0, index;

    /*
    The loop will run 100 times. Each time it will take a value and tract if it's the max value by comparing it with current max value. If so, then it also stores it's index. They are printed at the end
    */

    for (int i = 1; i <= 100; i++)
    {
        int num;
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
            index = i;
        }
    }

    printf("%d\n", max);
    printf("%d\n", index);

    return 0;
}