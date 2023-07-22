#include <stdio.h>
int main()
{
    int num, r, rev = 0;
    printf("enter the num");
    scanf("%d", &num);
    while (num > 0)
    {
        r = num % 10;

        num = num / 10;
        rev = rev * 10 + r;
    }
    printf("%d\n", rev);
    return 0;
}