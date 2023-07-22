#include <stdio.h>
#include <string.h>
int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        int tier;
    } pikachu, charizard;
    printf("enter attack of pikachu");
    scanf("%d", &pikachu.attack);

    printf("enter hp of pikachu");
    scanf("%d", &pikachu.hp);

    charizard.tier = 'A';
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%c\n", charizard.tier);
    return 0;
}