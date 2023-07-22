#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int numOfPage;
    } a;
    // struct book a;
    strcpy(a.name, "rich dad and poor dad");
    a.price = 23.11;
    a.numOfPage = 100;
    printf("%s\n", a.name);
    printf("%f\n", a.price);
    printf("%d", a.numOfPage);
    return 0;
}