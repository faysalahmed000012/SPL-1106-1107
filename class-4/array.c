#include <stdio.h>

int main()
{

    int ages[5] = {20, 22, 19, 19, 20};

    int sum = 0;

    float average;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < length; i++)
    {
        sum = sum + ages[i];
        printf("%d\n", ages[i]);
    }

    average = sum / length;

    printf("Average age of the class is : %.2f\n sum : %d\n", average, sum);

    return 0;
}