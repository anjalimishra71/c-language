#include <stdio.h>
int main()
{
    int n, k = 64;
    printf("enter number of lines");
    scanf("%d", &n);
    int s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)a;
            printf("%c", ch);
            a++;
        }

        for (int j = k; j >= 65; j--)

        {
            char ch = (char)j;
            printf("%c", ch);
        }
        printf("\n");
        s--;
        k++;
    }
    return 0;
}