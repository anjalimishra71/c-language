#include <stdio.h>
int main()
{
    int a[2][2];
    printf("enter 2*2 matrix");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum += a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}