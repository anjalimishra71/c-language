#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[100];

    } legendarypokemon;
    typedef struct godpokemon
    {
        legendarypokemon legend;
        int specialattack;

    } godpokemon;
    godpokemon arceus;
    arceus.specialattack = 300;
    strspy(arceus.legend.ability, "turn anyone to stone");
    arceus.legend.normal.speed = 31;
    printf("%d", arceus.legend.normal.speed);

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.speed = 150;
    mewtwo.normal.attack = 250;
    mewtwo.normal.tier = 'A';
    strcpy(mewtwo.normal.name, "mewtwo");
    printf("%s", mewtwo.ability);
    return 0;
}