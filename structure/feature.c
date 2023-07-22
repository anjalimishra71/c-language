#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int attack;
        int speed;
        char name[50];
    } pokemon;
    pokemon a, b, c;
    a.attack = 100;
    a.speed = 300;
    strcpy(a.name, "hardwork is key of success");
    b = a;
    b.attack = 200; // deep copy
    printf("%d", b.attack);
    return 0;
}