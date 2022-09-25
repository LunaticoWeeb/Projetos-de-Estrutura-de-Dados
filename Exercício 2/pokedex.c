#include <stdio.h>
#include <string.h>

struct attribute_t{
    int health, atk, def, s_atk, s_def, speed;
} attribute;

struct attack_t{
    char name[20];
    int power;
    float accuracy; 
    char class; //p or s, verify 
} attack;

struct pokemon_t{
    char name[50];
    char type_primary[20];
    char type_secondary[20];
    struct attribute_t attribute;
    struct attack_t attack;
} pokemon;

void registrate(struct pokemon_t pokemon);
void new_attack(int index_pokemon, int index_atk, struct attack_t attack);
void print_pokemon(int index_pokemon);
void print_atk(int index_pokemon, int index_atk);

#define CLOSE 0

int main(){
    int key;
    do {
        scanf("%d", key);
    } while (key != CLOSE);
    return 0;
}