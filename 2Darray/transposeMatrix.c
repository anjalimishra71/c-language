#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the number of rows");
    scanf("%d", &r);
    printf("enter the number of columns");
    scanf("%d", &c);
    int a[r][c];
    printf("enter the 2*3 matrix");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}