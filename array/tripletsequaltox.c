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
            for (int k = j + 1; k < 5; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    printf("\n(%d,%d,%d)", a[i], a[j], a[k]);
                }
            }
        }
    }

    return 0;
}