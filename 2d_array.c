#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    a[1][2] = 10;
    printf("%d", a[1][2]);
    return 0;
}