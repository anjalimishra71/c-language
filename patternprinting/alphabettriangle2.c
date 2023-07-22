#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of lines");
    scanf("%d", &n);
    int s = n - 1;

    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)a;
            printf("%c", ch);
            a++;
        }
        printf("\n");
        s--;
    }
    return 0;
}