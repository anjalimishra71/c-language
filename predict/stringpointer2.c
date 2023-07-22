#include <stdio.h>
int main()
{
    char str[] = "collage wallah";
    char *p = str;
    *p = 'p';
    printf("%s", str);
    return 0;
}