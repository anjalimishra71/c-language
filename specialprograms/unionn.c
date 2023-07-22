#include <stdio.h>
int main()
{
    int r1, r2, a[10], b[10], c[10], f, i;
    printf("enter the first array num");
    scanf("%d", &r1);
    printf("enter the second array num");
    scanf("%d", &r2);
    printf("enter first array element");
    for (i = 0; i < r1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter second array element");
    for (i = 0; i < r2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < r1; i++)
    {
        c[i] = a[i];
    }
    int k;
    k = i;
    for (i = 0; i < r2; i++)
    {
        f = 0;
        for (int j = 0; j < r1; j++)
        {
            if (b[i] == a[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("elements are-");
    for (i = 0; i < k; i++)
    {
        printf("%d", c[i]);
    }
    return 0;
}