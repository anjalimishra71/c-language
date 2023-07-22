#include <stdio.h>
int main()
{
    int a[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("the address of a[%d][%d][%d] is %u\n", i, j, k, &a[i][j][k]);
            }
        }
    }
    return 0;
}