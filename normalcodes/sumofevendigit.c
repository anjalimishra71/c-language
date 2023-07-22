#include <stdio.h>
int main()
{
    int num, sum = 0, r;
    printf("enter the num");
    scanf("%d", &num);
    while (num > 0)
    {
        r = num % 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
        num = num / 10;
    }
    printf("sum of even digits %d", sum);
    return 0;
}