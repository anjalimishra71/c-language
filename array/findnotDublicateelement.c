#include <stdio.h>
int main()
{
    int a[5];
    printf("enter the 5 number");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int check = 0;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                check = 1;
            }
        }

        if (check == 0)
        {
            printf("%d", a[i]);
            // break;
        }
    }
    return 0;
}