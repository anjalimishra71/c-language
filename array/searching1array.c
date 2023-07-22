#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x;
    bool flag = false;
    printf("enter the searching num");
    scanf("%d", &x);
    int a[5];
    int inx = 0;
    printf("enter the five array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (x == a[i])
        {
            flag = true;
            inx = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array", x);
    }
    else
        printf("%d is present in the array and its index %d", x, inx);
    return 0;
}