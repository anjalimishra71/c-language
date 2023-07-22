#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("enter the num");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}