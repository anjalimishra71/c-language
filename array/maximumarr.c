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
    int max = INT_MIN; // max = a[0];
    for (int i = 1; i < 5; i++)
    {
        if (max < a[i])

            max = a[i];
    }
    printf("%d", max);
    return 0;
}