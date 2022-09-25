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
};

void registrate();
void new_attack();
void print_pokemon();
void print_atk();

#define CLOSE 0

int main(){
    struct pokemon_t  *pointerdex, pokedex[151];
    //Pokédex possui 151 Pokémons
    //Pointerdex navega pelos Pokémons resgitrados
    int key;
    do {
        scanf("%d", &key);
        switch (key){
            case 1:
                registrate();
                break;
            case 2:
                new_attack();
                break;
            case 3:
                print_pokemon();
                break;
            case 4:
                print_atk();
                break;
            case 0:
                break;
            default:
                printf("Digite novamente.\n");
                break;
        }
    } while (key != CLOSE);
    return 0;
}

void registrate(){};

void print_pokemon(){};

void new_attack(){};

void print_atk(){};