#include <stdio.h>
#include <limits.h>
int main()
{
    int a[5];
    printf("enter the five elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }
        else if (smax < a[i] && max != a[i])
        {
            smax = a[i];
        }
    }
    printf("%d", smax);
    return 0;
}