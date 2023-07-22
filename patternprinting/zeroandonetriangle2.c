#include <stdio.h>
int main()
{
    int r;
    printf("enter the number of rows");
    scanf("%d", &r);
    int a;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0 || i == j)
            {
                printf("1");
            }
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}