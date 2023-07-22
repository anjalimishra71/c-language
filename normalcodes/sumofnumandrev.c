#include <stdio.h>
int main()
{
    int num, r, rev = 0, sum = 0;
    printf("enter the num");
    scanf("%d", &num);
    int c = num;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;

        rev = rev * 10 + r;
    }
    printf("sum of num and its rev=%d", rev + c);
    return 0;
}