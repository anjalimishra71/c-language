#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter the num");
    scanf("%d", &num);
    int r;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + r;
    }
    printf("sum of digits=%d", sum);
    return 0;
}