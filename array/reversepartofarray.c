#include <stdio.h>
int main()
{
    int a[5];
    printf("enter the number");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int l = 3;
    int t;
    int i = 1;
    while (i < l)
    {
        t = a[i];
        a[i] = a[l];
        a[l] = t;
        i++;
        l--;
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d", a[j]);
    }
    return 0;
}