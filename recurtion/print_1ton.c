#include <stdio.h>
void increasing(int a, int b)
{
    if (a > b)
        return;
    printf("\n%d", a);
    increasing(a + 1, b);
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    increasing(1, n);

    return 0;
}