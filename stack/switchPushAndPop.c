#include <stdio.h>
int stk[5], size = 5, top = -1;
void push(int n)
{
    if (top == size - 1)
    {
        printf("stack full");
        return;
    }
    top++;
    stk[top] = n;
}
void pop()
{
    int n;
    if (top == -1)
    {
        printf("Stack empty");
        return;
    }
    n = stk[top];
    top--;
    printf("%d is popded", n);
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d", stk[i]);
    }
}
int main()
{
    int n, ch;
    printf("1>push\n");
    printf("2>pop\n");
    printf("3>display\n");
    printf("4>exit\n");

    while (1)
    {
        printf("enter choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element to push");
            scanf("%d", &n);
            push(n);

            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        case 4:
            exit(0);
        }
    }
    return 0;
}