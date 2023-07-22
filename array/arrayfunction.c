#include <stdio.h>
void fun(int a[])
{
    int temp;
    temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    return;
}
int main()
{
    int a[2] = {1, 6};
    printf("%d %d\n", a[0], a[1]);
    fun(a);
    printf("%d %d", a[0], a[1]);
    return 0;
}