#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct book
    {
        char name[30];

    } anj;
    anj a;
    strcpy(a.name, "GOOGLE");
    printf("%s", a.name);
    return 0;
}