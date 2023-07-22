#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        char name[20];
        float salary;
        int age;

    } anjali, aadarsh;
    strcpy(anjali.name, "anjali");
    anjali.salary = 2.5;
    anjali.age = 17;
    strcpy(aadarsh.name, "aadarsh");
    aadarsh.salary = 3.5;
    aadarsh.age = 20;
    printf("%s\n", anjali.name);
    printf("%f\n", anjali.salary);
    printf("%d\n", anjali.age);
    printf("%s\n", aadarsh.name);
    printf("%f\n", aadarsh.salary);
    printf("%d\n", anjali.age);
    return 0;
}