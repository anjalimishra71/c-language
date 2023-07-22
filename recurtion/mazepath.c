#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int downways = 0;
    int rightways = 0;
    if (cr == er && cc == ec)
        return 1;
    if (cr == er)
        rightways += maze(cr, cc + 1, er, ec);
    if (cc == ec)
        downways += maze(cr + 1, cc, er, ec);
    if (cr < er && cc < ec)
    {
        rightways += maze(cr, cc + 1, er, ec);
        downways += maze(cr + 1, cc, er, ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n, m; // only down and right
    printf("enter the number of rows");
    scanf("%d", &n);
    printf("enter the number of column");
    scanf("%d", &m);
    int numofpath = maze(1, 1, n, m);
    printf("%d", numofpath);
    return 0;
}