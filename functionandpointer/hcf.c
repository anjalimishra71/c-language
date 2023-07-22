#include <stdio.h>
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a, b, max = 0;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    int hcf = gcd(a, b);
    printf("%d", hcf);
    return 0;
}