#include <stdio.h>

int main()
{

    int row, col;
    printf("Enter row number: ");
    scanf("%d", &row);

    printf("Enter col number: ");
    scanf("%d ", &col);

    int arr[row][col];

    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
        }
    }

    return 0;
}