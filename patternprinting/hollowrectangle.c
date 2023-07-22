#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the number of rows");
    scanf("%d", &r);
    printf("enter the number of column");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 6)
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