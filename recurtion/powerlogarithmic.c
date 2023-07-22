#include <stdio.h>
int power(int a, int b)
{
       if (b == 0)
        return 1;
    int p = power(a, b / 2);
    if (b % 2 == 0)
    {
        return p * p;
    }
    return p * p * a;
}
int main()
{
    int a, b;
    printf("enter the base number");
    scanf("%d", &a);
    printf("enter the power number");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d", p);
    return 0;
}