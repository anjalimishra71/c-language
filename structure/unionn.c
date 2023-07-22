#include <stdio.h>
#include <string.h>
typedef union pokemon
{
    int hp;
    int speed;
    int attack;
    char name[20];

} pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 50; // only one member can be used at a time

    pikachu.speed = 100;
    strcpy(pikachu.name, "google"); // only last member
    printf("\n%d", pikachu.hp);
    printf("\n%d", pikachu.speed);
    printf("\n%d", pikachu.attack);
    printf("\n%s", pikachu.name);
    return 0;
}