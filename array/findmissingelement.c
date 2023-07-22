#include <stdio.h>
int main()
{
    int a[10];
    printf("enter eight elements");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0, sum2 = 0;
    for (int i = 0; i < 9; i++)
    {
        sum += a[i];
    }
    // for (int i = 0; i <= 9; i++)
    // {
    //     sum2 += a[i];
    // }
    sum2 = 10 * (10 + 1) / 2; // n(n+1)/2
    int n = sum2 - sum;
    printf("%d", n);
    return 0;
}