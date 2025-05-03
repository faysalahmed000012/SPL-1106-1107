#include <stdio.h>

int main()
{

    int row, col;

    printf("Please Enter Row and Col for the Matrix :\t");
    scanf("%d %d", &row, &col);
    int mat1[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Input data for position %d %d", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    /// printing the matrix :

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("%d %d", mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
}