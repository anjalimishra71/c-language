#include <stdio.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;

} pokemon;
void change(pokemon p)
{
    p.hp = 120;
    p.attack = 150;
    p.speed = 10;

    return;
}
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 100;
    change(pikachu);
    printf("%d", pikachu.hp);
    printf("%d", pikachu.speed);
    printf("%d", pikachu.attack);
    return 0;
}