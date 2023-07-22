#include <stdio.h>
int fibonacci(int n)
{
    int a = 1, b = 0, c;
    for (int i = 1; i <= n - 1; i++)
    {
        a = a + b;
        c = a - b;
        b = c;
    }
    return a;
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int fibo = fibonacci(n);
    printf("%d", fibo);
    return 0;
}