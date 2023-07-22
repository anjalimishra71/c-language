#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int fibo = fibonacci(n - 1) + fibonacci(n - 2);
    return fibo;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int f = fibonacci(n);
    printf("%d", f);
    return 0;
}