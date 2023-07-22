#include <stdio.h>
int main()
{
    int num, r;
    printf("enter the num");
    scanf("%d", &num);
    int t, sum = 0;
    t = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if (t == sum)
    {
        printf("num is armstrong");
    }
    else
        printf("num is not arms");
    return 0;
}