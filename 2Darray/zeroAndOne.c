#include <stdio.h>
#include <limits.h>
int main()
{
    int a[3][4];
    printf("enter the 3*4 matrix(pls input only 0 and 1)");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = INT_MIN;
    int r = 0;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == 1)

                count++;
        }
        if (max < count)
        {
            max = count;
            r = i;
        }
    }
    printf("%d maximum number of 1's and its index is %d", max, r);
    return 0;
}