#include <stdio.h>
int main()
{
    int r, c;
    printf("enter number of row in matrix");
    scanf("%d", &r);
    printf("enter the number of column in matrix");
    scanf("%d", &c);
    int a[r][c];
    printf("enter the r*m matrix");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("transpose matrix :\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}