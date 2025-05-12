#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int row, col;
    scanf("%d %d", &row, &col);

    //  print specific row
    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[row][i]);
    }

    //  print specific col
    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][col]);
    }

    return 0;
}