#include <stdio.h>
int main()
{
    int a[3][3];
    printf("enter the 3*3 num");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 2; i >= 0; i--)
            {
                printf("%d", a[i][j]);
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                printf("%d", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}