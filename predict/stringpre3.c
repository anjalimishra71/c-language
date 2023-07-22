#include <stdio.h>
#include <string.h>
int main()
{
    char str[25] = "physics wallah";
    str[0] = 'M';
    str[1] = 97;
    int i = 0;
    while (str[i] != '\0')
    {

        printf("%c", str[i]);
        i++;
    }
    return 0;
}