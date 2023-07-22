#include <stdio.h>
int main()
{
    int a[2][2];
    printf("enter the 2*2 matrix");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    int r = 0;
    int c = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                r = i;
                c = j;
            }
        }
    }
    printf("%d num is maximum and its index is %d %d ", max, r, c);
    return 0;
}