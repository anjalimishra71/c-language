#include <stdio.h>
#include <string.h>
char stk[10], top = -1;
void push(char n)
{
    top++;
    stk[top] = n;
}
char pop()
{
    char n;
    n = stk[top];
    top--;
    return n;
}
int main()
{
    int i, l;
    char a[10], b[10];
    printf("enter string");
    gets(a);
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        push(a[i]);
    }
    for (i = 0; i < l; i++)
        b[i] = pop();
    b[i] = '\0';
    printf("reverse string is=%s", b);

    return 0;
}