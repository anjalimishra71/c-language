#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of row/column in matrix");
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
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = n * n;
    int count = 0;
    int b = 0, c = 0;
    int brr[n][n];

    while (count < tne)
    {
        for (int j = minc; j <= maxc && count < tne; j++)
        {

            brr[minr][j] = a[minr][j];
            printf("%d", brr[minr][j]);
            count++;
        }
        minr++;

        for (int i = minr; i <= maxr && count < tne; i++)
        {

            brr[i][maxc] = a[i][maxc];
            printf("%d", brr[i][maxc]);
            count++;
        }
        maxc--;

        for (int j = maxc; j >= minc && count < tne; j--)
        {

            brr[maxr][j] = a[maxr][j];
            printf("%d", brr[maxr][j]);
            count++;
        }
        maxr--;

        for (int i = maxr; i >= minr && count < tne; i--)
        {

            brr[i][minc] = a[i][minc];
            printf("%d", brr[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}