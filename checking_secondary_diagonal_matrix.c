#include <stdio.h>
#include <stdbool.h>
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

    int total_val = r * c;
    int zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j != r - 1)
                {
                    if (a[i][j] != 0)
                    {
                        flag = false;
                    }
                }
            }
        }
    }
    else
    {
        printf("This isn't a Square Matrix");
    }

    if (flag)
    {
        printf("This is Secondary Diagonal Matrix");
    }
    else
    {
        printf("This isn't Secondary Diagonal Matrix");
    }

    return 0;
}