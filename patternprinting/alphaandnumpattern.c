#include <stdio.h>
int main()
{
    int r;
    printf("enter the number of rows");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d", j);
            }
            else
            {
                char ch = (char)a;
                printf("%c", ch);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}