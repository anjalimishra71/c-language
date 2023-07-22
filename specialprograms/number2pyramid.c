#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of lines");
    scanf("%d", &n);
    int s = 1;
    int nst = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("%d", i);
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
            a++;
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        printf("\n");
        s = s + 2;
        nst--;
    }

    return 0;
}