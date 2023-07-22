#include <stdio.h>
int main()
{
    int x;
    printf("enter the num");
    scanf("%d", &x);
    int a[5];
    printf("enter the five array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (x < a[i])
            printf("%d\n", a[i]);
    }

    return 0;
}