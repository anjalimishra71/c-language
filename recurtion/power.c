#include <stdio.h>
int power(int a, int b)
{
    int pow = 1;
    if (b == 0)
        return 1;
    pow = a * power(a, b - 1);
      return pow;
}
int main()
{
    int a, b;
    printf("enter the base number");
    scanf("%d", &a);
    printf("enter the power num");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d", p);
    return 0;
}