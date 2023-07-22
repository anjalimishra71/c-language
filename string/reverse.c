#include <stdio.h>
#include <string.h>
int main()
{
    char n[48];
    int i, l = 0;

    puts("enter a string");
    scanf("%s", n);
    for (i = 0; n[i] != '\0'; i++)
        ;

    for (l = i - 1; l >= 0; l--)
    {
        printf("%c", n[l]);
    }

    return 0;
}