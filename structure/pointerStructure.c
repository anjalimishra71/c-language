#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char name[30];
} pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 100;
    strcpy(pikachu.name, "anjali");
    pokemon *x = &pikachu;
    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.name);

    printf("%p", x);
    return 0;
}