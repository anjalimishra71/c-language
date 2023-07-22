#include <stdio.h>
int main()
{
    // 1 1 2 3 5 8 13 21
    int n, a = 1, b = 0, c;
    printf("enter the number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf(" %d ", a);
        a = a + b;
        c = a - b;
        b = c;
    }
    return 0;
}