#include <stdio.h>
int main()
{
    int a[5];
    printf("enter the five number");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
            a[i] *= 2;
        else
            a[i] += 10;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}