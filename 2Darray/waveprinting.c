#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the row of matrix");
    scanf("%d", &n);
    printf("enter the row of matrix");
    scanf("%d", &m);
    int a[n][m];
    printf("enter the 3*3 matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d", a[i][j]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}