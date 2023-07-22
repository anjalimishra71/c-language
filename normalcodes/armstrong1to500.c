#include <stdio.h>
int main()
{
    int num = 2, r, sum = 0, t;
    while (num <= 50)
    {
        t = num;
        sum = 0;
        while (num > 0)
        {
            r = num % 10;
            sum = sum + (r * r * r);
            num = num / 10;
        }
        if (t == sum)
        {
            printf("%d num is arms\n", t);
        }
        num++;
    }
    return 0;
}