#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}