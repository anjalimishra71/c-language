#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of lines");
    scanf("%d", &n);
    int a = 65;
    int nst = n - 1;
    int nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        char ch = (char)a;
        printf("%c", ch);
        a++;
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int b = 65;
        for (int j = 1; j <= nst; j++)
        {
            char ch = (char)b;
            printf("%c", ch);
            b++;
        }
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
            b++;
        }
        for (int j = 1; j <= nst; j++)
        {
            char ch = (char)b;
            printf("%c", ch);
            b++;
        }
        printf("\n");
        nst--;
        nsp = nsp + 2;
    }
    return 0;
}