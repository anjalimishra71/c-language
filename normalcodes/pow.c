#include <stdio.h>
int main()
{
    int n, p;
    printf("enter the num");
    scanf("%d", &n);
    printf("enter power");
    scanf("%d", &p);
    int q = pow(n, p);
    printf("%d", q);
    return 0;
}