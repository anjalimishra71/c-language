#include <stdio.h>
void sumfun(n, sum)
{
    if (n == 0)
    {
        printf("sum of num %d", sum);
        return;
    }
    sumfun(n - 1, sum + n);
    return;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    sumfun(n, 0);
    return 0;
}