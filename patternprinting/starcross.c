#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the num of rows");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (i == j || i + j == r + 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}