#include <stdio.h>
int main()
{
    int a[5];
    int check = 0;
    int ele = 0;
    printf("enter 5 elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                check = 1;
                ele = a[i];
                break;
            }
        }
    }
    if (check == 0)
    {
        printf("num is not present");
    }
    else
        printf("%d num is present", ele);
    return 0;
}