#include <stdio.h>
int main()
{
    int num, rev = 0;
    printf("enter the number");
    scanf("%d", &num);
    int t = num;
    int r;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        rev = rev * 10 + r;
    }
    if (t == rev)
    {
        printf("number is palindrom");
    }
    else
    {
        printf("number is not palindrom");
    }
    return 0;
}