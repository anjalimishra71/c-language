#include <stdio.h>
#include <string.h>
int stk[20], top = -1;
void push(int n)
{
    top++;
    stk[top] = n;
}
int pop()
{
    int ch;
    ch = stk[top];
    top--;
    return ch;
}
int main()
{
    char p[20], ch;
    int i, ans, n1, n2, res;
    printf("enter postfix expression");
    scanf("%s", p);
    i = 0;
    while (i < strlen(p))
    {
        ch = p[i];
        int f;
        if (ch == '(')
        {
            while (ch != ')')
            {
                f = p[i + 1];
            }
        }

        if (ch >= '0' && ch <= '9')
        {
            push(ch - '0');
        }
        else
        {
            n2 = pop();
            n1 = pop();
            switch (ch)
            {
            case '+':
                ans = n1 + n2;
                break;
            case '-':
                ans = n1 - n2;
                break;
            case '*':
                ans = n1 * n2;
                break;
            case '/':
                ans = n1 / n2;
                break;
            }
            push(ans);
        }
        i++;
    }
    res = pop();
    printf("%d", res);
    return 0;
}