#include <stdio.h>
int main()
{
    int n;
    printf("enter n(row and column) number");
    scanf("%d", &n);
    int a[n][n];
    printf("enter n*n matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            // if (i <= j)

            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}