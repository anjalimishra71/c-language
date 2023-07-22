#include <stdio.h>
int main()
{

    for (int i = 10; --i % 2; i--)
    {
        printf("%d", i);
    }

    return 0;
}