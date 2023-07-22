#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[20];
        char lastname[20];
        int age;
        int numOfMatches;
        float average;
    } cricketer;
    cricketer arr[3];
    printf("enter firstname,lastname,age,numofmatches,average");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", arr[i].firstname);
        scanf("%s", arr[i].lastname);
        scanf("\n%d", &arr[i].age);
        scanf("\n%d", &arr[i].numOfMatches);
        scanf("\n%f", &arr[i].average);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("name :%s %s\n", arr[i].firstname, arr[i].lastname);
        printf(" age :%d\n", arr[i].age);
        printf(" numofmatches:%d\n", arr[i].numOfMatches);
        printf("average :%f\n", arr[i].average);
    }

    return 0;
}