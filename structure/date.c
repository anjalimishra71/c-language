#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a, b;
    a.day = 31;
    a.month = 8;
    a.year = 2004;

    b.day = 31;
    b.month = 5;
    b.year = 2004;

    date c;
    c = a;

    bool flag = true;
    if (a.day != c.day)
        flag = false;
    if (a.month != c.month)
        flag = false;
    if (a.year != c.year)
        flag = false;
    if (flag == true)
        printf("date are same");
    else
        printf("date are different");
    return 0;
}