#include <stdio.h>
int main()
{
    int m, n;
    printf("enter the number of row in matrix");
    scanf("%d", &m);
    printf("enter the num of column in matrix");
    scanf("%d", &n);
    int a[m][n];
    printf("enter the m*n matrix");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // spiral print
    int minr = 0, minc = 0, maxr = m - 1, maxc = n - 1;
    int tne = m * n;
    int count = 0;
    while (count < tne)
    {
        // print the minimum row
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d", a[minr][j]);
            count++;
        }
        minr++;
        // print the maximum column
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d", a[i][maxc]);
            count++;
        }
        maxc--;
        // print the max column
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d", a[maxr][j]);
            count++;
        }
        maxr--;
        // print the min column
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d", a[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}