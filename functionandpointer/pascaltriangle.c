#include <stdio.h>
int factorial(int n)
{
    int f = 1;
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    printf("enter the num");
    scanf("%d", &n);
    int s = n;
    for (int i = 0; i <= n; i++)
    {
        // int a = 1;
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int a = 0;

            int ncr = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", ncr);
            a++;
        }
        printf("\n");
        s--;
    }
    return 0;
}