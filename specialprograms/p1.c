#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of lines");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = n;
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                printf("%d", a);
            }
            else
            {
                printf("%d", a);
                a--;
            }
        }
        printf("\n");
    }
    return 0;
}