#include "dnd_character.h"

int ability(void){
    srand(time(NULL));
    int rand6 = rand() % 6 + 1;
    return ( rand6 * 3);
}

int modifier(int score){
    return floorf((score - 10) / 2.0);
}

dnd_character_t make_dnd_character(void){
    dnd_character_t character;

    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = modifier(character.constitution) + 10;

    return character;
}
