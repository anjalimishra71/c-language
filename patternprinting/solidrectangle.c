#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the row");
    scanf("%d", &r);
    printf("enter the column");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}