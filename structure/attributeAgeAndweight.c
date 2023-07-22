#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char name[20];

} pokemon;
void change(pokemon *p)
{
    //(*p).hp = 120;
    p->hp = 120;
    p->attack = 150;
    p->speed = 10;
    strcpy(p->name, "kaju");
    return;
}
int main()
{
    pokemon pikachu = {60, 50, 100, "anjali"}; // give elements in orderwise
    //   pikachu.hp = 60;
    //  pikachu.attack = 50;
    // pikachu.speed = 100;
    printf("\n%d", pikachu.hp);
    printf("\n%d", pikachu.speed);
    printf("\n%d", pikachu.attack);
    printf("\n%s", pikachu.name);
    change(&pikachu);
    printf("\n%d", pikachu.hp);
    printf("\n%d", pikachu.speed);
    printf("\n%d", pikachu.attack);
    printf("\n%s", pikachu.name);
    return 0;
}