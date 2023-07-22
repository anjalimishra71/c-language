#include <stdio.h>
void reverse(int *ptr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[n - i - 1];
        ptr[n - i - 1] = temp;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    reverse(a, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}