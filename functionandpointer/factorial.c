#include <stdio.h>
int factorial(int n)
{
    int prod = 1;
    for (int i = n; i >= 1; i--)
    {
        prod = prod * i;
    }
    return prod;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int f = factorial(n);
    printf("%d", f);
    return 0;
}