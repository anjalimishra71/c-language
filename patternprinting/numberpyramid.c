#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows");
    scanf("%d", &r);
    int s = r - 1;
    for (int i = 1; i <= 2 * r; i = i + 2)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        s--;
    }
    return 0;
}