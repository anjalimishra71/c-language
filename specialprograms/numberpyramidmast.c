#include <stdio.h>
int main()
{
    int n, a = 0;
    printf("enter number of lines");
    scanf("%d", &n);
    int s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (int j = a; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        s--;
        a++;
    }
    return 0;
}