#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("enter the num");
    scanf("%d", &num);
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("num of digits=%d", count);
    return 0;
}