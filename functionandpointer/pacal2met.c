#include <stdio.h>
int main()
{
  int n;
  int s = n - 1;
  printf("enter the number");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; j <= s; j++)
    {
      printf(" ");
    }
    int first = 1;
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", first);
      first = first * (i - j) / (j + 1); // ncr*(n-r)/(r+1)
    }
    printf("\n");
    s--;
  }
  return 0;
}