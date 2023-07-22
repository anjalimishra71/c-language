#include <stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d", &x);
    int a[5];
    printf("enter the five elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] + a[j] == x)
            {
                printf("\n(%d,%d)", a[i], a[j]);
            }
        }
    }
    return 0;
}