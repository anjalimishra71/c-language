#include <stdio.h>
int main()
{
    int num, f = 1, i;
    printf("enter the num");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            f = 0;
            break;
        }
    }
    if (f == 1)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    return 0;
}