#include <stdio.h>
#include <limits.h>
int main()
{
    int a[3][4];
    printf("enter the 3*4 matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int r = 0;

    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j];
            if (max < sum)
            {
                max = sum;
                r = i;
            }
        }
    }
    printf("%d num is maximum and its index is %d", max, r);
    return 0;
}