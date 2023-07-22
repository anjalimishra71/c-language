#include <stdio.h>
int main()
{
    int a[3][4];
    int sr, sc, er, ec;
    printf("enter the 2*3 numbers");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter starting row and column");
    scanf("%d %d", &sr, &sc);
    printf("enter ending row and column");
    scanf("%d %d", &er, &ec);
    int sum = 0;
    for (int i = sr; i <= er; i++)
    {
        for (int j = sc; j <= ec; j++)
        {
            sum += a[i][j];
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("%d", sum);
    return 0;
}