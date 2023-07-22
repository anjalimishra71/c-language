#include <stdio.h>
void decreasing(n)
{
    if (n == 0)
        return;

    printf("\n%d", n);
    decreasing(n - 1);
    return;
}
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
    printf("enter the number");
    scanf("%d", &n);
    increasing(n);
    decreasing(n);
    return 0;
}