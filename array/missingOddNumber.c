#include <stdio.h>
int main()
{
    int n;
    printf("enter number of size");
    scanf("%d", &n);
    int a[n], b[n];
    int i = 0;
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 != 0)
        {
            a[i] = j;
            i++;
        }
    }

    for (int l = 0; l < i; l++)
    {
        printf("\n%d", a[l]);
    }
    // int k = 0;
    // b[k] = a[0];
    // for (i = 0; i <= n; i++)
    // {
    //     printf("\n%d", b[k]);
    //     k++;
    //     b[k] = b[i] + 2;
    // }
    return 0;
}