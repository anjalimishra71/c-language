#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the base num");
    scanf("%d", &a);
    printf("enter the power num");
    scanf("%d", &b);
    int pro = 1;
    for (int i = 1; i <= b; i++)
    {
        pro = pro * a;
    }
    printf("%d", pro);
    return 0;
}