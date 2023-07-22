#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three numbers");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("a is gretest num");
        else
            printf("c is gretest");
    }
    else
    {
        if (b > c)
        {
            printf("b is gretest");
        }
        else
            printf("c is gretest");
    }

    return 0;
}