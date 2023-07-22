#include <stdio.h>
int main()
{
    int m, n;
    printf("enter first matrix row number");
    scanf("%d", &m);
    printf("enter first matrix column number");
    scanf("%d", &n);

    int a[m][n];
    printf("enter m*n matrix");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p, q;
    printf("enter second matrix row number");
    scanf("%d", &p);
    printf("enter second matrix column number");
    scanf("%d", &q);

    int b[p][q];
    printf("enter p*q matrix");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (n != p)
    {
        printf("not multiply this matrix");
    }
    else
    {
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf(" %d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}