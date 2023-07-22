#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return n;
    if (n == 3)
        return 4;
    int fibo = fibonacci(n - 1) + fibonacci(n - 2) + fibonacci(n - 3);
    return fibo; // one and two and three steps
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