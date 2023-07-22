#include <stdio.h>
int main()
{
    int marks[5];
    printf("enter the marks of students");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            printf("index ->%d\n", i);
        }
        else
            printf("\n%d", marks[i]);
    }
    return 0;
}