#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        int a = 65;
        for (int j = 1; j <= r; j++)
        {
            char ch = (int)a;
            printf("%c", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}