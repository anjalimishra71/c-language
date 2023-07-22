#include <stdio.h>
void increasing(int n)
{
    if (n == 0)
        return;
    increasing(n - 1);
    printf("\n%d", n);
    return;
}
int main()
{
    int n;
    printf("enter the num");
    scanf("%d", &n);
    increasing(n);
    return 0;
}