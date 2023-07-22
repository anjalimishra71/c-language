#include <stdio.h>
int main()
{
    int a[5], esum = 0, osum = 0;
    printf("enter the five elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            esum += a[i];

        else
            osum += a[i];
    }
    int diff = esum - osum;
    printf("%d", diff);
    return 0;
}