#include <stdio.h>
int add(int a, int b);
int main()
{
    int a, b;
    printf("enter the two numbers");
    scanf("%d %d", &a, &b);
    int sum = add(a, b);
    printf("%d", sum);
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
