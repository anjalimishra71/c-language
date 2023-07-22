#include <stdio.h>
int main()
{
    int r;
    printf("enter the number of rows");
    scanf("%d", &r);
    int s = 0;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = r; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
        s++;
    }
    return 0;
}