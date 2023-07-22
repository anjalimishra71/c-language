#include <stdio.h>
int main()
{
    int r;
    printf("enter the number of rows");
    scanf("%d", &r);
    int mid = r / 2 + 1;
    int s = r - 1;
    int a = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= a; j++)
        {
            printf("*");
           
        }
        printf("\n");
        if (i < mid)
         {
             a = a + 2;
             s--;
         }
         else
         {
             a = a - 2;
             s++;
         }
    }
    return 0;
}