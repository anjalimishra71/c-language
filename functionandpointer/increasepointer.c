#include <stdio.h>
int main()
{
    /*
    int i = 34;
    int *ptr = &i;
    printf("the value of ptr is %u\n", ptr);
    ptr++;
    printf("the value of ptr is %u", ptr);
    */
    char c = 34;
    char *ptr = &c;
    printf("the value of ptr is %u\n", ptr);
    ptr++;
    printf("the value of ptr is %u\n", ptr);
    return 0;
}