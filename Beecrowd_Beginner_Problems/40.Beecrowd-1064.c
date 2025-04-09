/*
Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.

Input
The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.

Output
The first output value is the amount of positive numbers. The next line should show the average of the positive values ​typed.

*/

#include <stdio.h>

int main()
{
    int positive = 0;
    float num, sum = 0;

    /*
    The loop will run 6 times to get values. It will increase the value of positive number counter if the number is positive. Also add the value to sum.

    */

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            positive++;
            sum += num;
        }
    }

    float average = sum / positive; // get average from sum.

    printf("%d valores positivos\n", positive);
    printf("%.1f\n", average);

    return 0;
}