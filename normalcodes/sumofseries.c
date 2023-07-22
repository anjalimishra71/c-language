#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter the num");
    scanf("%d", &num);
    // 1-2+3-4+5.....n terms
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
            sum = sum - i;
    }

    printf("%d", sum);
    return 0;
}