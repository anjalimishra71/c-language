#include <stdio.h>
#include <string.h>
typedef struct student
{
    int rno;
    char name[20];
    char department[20];
    char course[30];
    int yearOfjoining;

} student;

void check(student s1, student s2)
{
    char a[20], b[20];
    strcpy(s1.department, "a");
    strcpy(s2.department, "b");
    if (a == b)
    {
        printf("same department");
    }
    else
    {
        printf("they are not same department");
    }
    return;
}

int main()
{
    student s1, s2;

    s1.rno = 1;
    strcpy(s1.name, "anjali");
    strcpy(s1.department, "state");
    strcpy(s1.course, "BCA");
    s1.yearOfjoining = 2;

    s2.rno = 2;
    strcpy(s1.name, "kaju");
    strcpy(s1.department, "state");
    strcpy(s1.course, "MA");
    s1.yearOfjoining = 2;
    check(s1, s2);
    return 0;
       hfg
}