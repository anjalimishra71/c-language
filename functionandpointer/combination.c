#include <stdio.h>
int factorial(int a);
int main()
{
    int n, r;
    printf("enter n");
    scanf("%d", &n);
    printf("enter r");
    scanf("%d", &r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);
    int ncr = nfact / (rfact * nrfact);
    printf("%d", ncr);
    return 0;
}

int factorial(int n)
{
    int f = 1;
    for (int i = n; i >= 1; i--)
    {

        f = f * i;
    }
    return f;
}
