#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the number of row");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}