#include <stdio.h>
int main()
{
    int n, b;
    printf("enter the number of lines");
    scanf("%d", &n);
    int s = 1;
    int nst = n - 1;
    int mid = n + 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i >= mid)
        {
            b--;
            printf("%d", b);
                }
        else
        {
            printf("%d", i);
            b = i;
        }
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = nst; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        s = s + 2;
        nst--;
    }

    return 0;
}