#include <stdio.h>
int main()
{
    int r, j;
    printf("enter the number of rows");
    scanf("%d", &r);
    int s = r - 1;
    for (int i = 1; i <= r; i++)
    {
        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
    }
    return 0;
}