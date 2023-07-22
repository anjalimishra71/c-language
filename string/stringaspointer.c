#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "college wallah";
    char *ptr = str; // ptr now points to str[0]
    printf("%p\n", &str[0]);
    printf("%p", str);
    return 0;
}