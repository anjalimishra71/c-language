#include <stdio.h>
int main()
{
    int a[5], b[5], i;
    printf("enter the five elements");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int l = i - 1;
    int c;
    i = 0;
    while (i < l)
    {
        c = a[i];
        a[i] = a[l];
        a[l] = c;

        i++;
        l--;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}