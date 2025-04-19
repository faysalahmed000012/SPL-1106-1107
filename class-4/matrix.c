#include <stdio.h>

int main()
{

    int rowCol[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int lenRow = sizeof(rowCol) / sizeof(rowCol[0]);
    int lenCol = sizeof(rowCol[0]) / sizeof(rowCol[0][0]);

    for (int i = 0; i < lenRow; i++)
    {

        for (int j = 0; j < lenCol; j++)
        {
            printf("%d\t", rowCol[i][j]);
        }
        printf("\n");
    }

    // printf("%d\n", lenRow);
    // printf("%d\n", lenCol);

    return 0;
}