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
  push(10);
  push(20);
  push(30);
  display();
  printf("\n");
  pop();
  printf("\n");
  display();

  return 0;
}