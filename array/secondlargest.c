#include <stdio.h>
int main()
{
    int a[5];
    printf("enter the five elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int smax = a[0];
    for (int i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > smax && a[i] != max)
        {
            smax = a[i];
        }
    }
    printf("%d", smax);
    return 0;
}