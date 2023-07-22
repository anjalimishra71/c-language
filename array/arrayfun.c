#include <stdio.h>
void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 77;
}
int main()
{
    int a[] = {1, 2, 33, 44, 6};
    printarray(a, 5);
    printf("%d", a[2]);
    return 0;
}