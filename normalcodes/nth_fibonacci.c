#include <stdio.h>
int main()
{
    int num, a = 1, b = 0, c;
    printf("enter the number");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("\n%dth fibo is=%d", i, a);
        a = a + b;
        c = a - b;
        b = c;
    }
    printf(" %d ", a);
    return 0;
}