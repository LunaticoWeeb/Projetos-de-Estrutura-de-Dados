/*
bug: não está registrando os Pokémons corretamente, só funcionam com 1.
*/

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
    struct attack_t attack[4];
};

void registrate(int *size, struct pokemon_t *pkdex);
void new_attack();
void print_pokemon(struct pokemon_t *pkdex);
void print_atk();

#define CLOSE 0

int main(){
    int key;
    //Pokédex possui 151 Pokémons
    //Pointerdex navega pelos Pokémons resgitrados
    struct pokemon_t  *pointerdex, pokedex[151];
    //pointerdex = &pokedex[0];
    int size_pkdex = 0;
    do {
        scanf("%d", &key);
        switch (key){
            case 1:
                registrate(&size_pkdex, &pokedex[0]);
                printf("tamanho: %d\n", size_pkdex); //teste 1
                break;
            case 2:
                //new_attack();
                break;
            case 3:
                print_pokemon(&pokedex[0]);
                break;
            case 4:
                //print_atk();
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

void registrate(int *size, struct pokemon_t *pkdex){
    char pkm_name[50], pkm_type1[20], pkm_type2[20];
    struct attribute_t pkm_attributes;
    struct attack_t pkm_atks[4];

    //entrada de dados
    scanf("%s", pkm_name);
    scanf("%s", pkm_type1);
    scanf("%s", pkm_type2);
    scanf("%d", &pkm_attributes.health);
    scanf("%d", &pkm_attributes.atk);
    scanf("%d", &pkm_attributes.def);
    scanf("%d", &pkm_attributes.s_atk);
    scanf("%d", &pkm_attributes.s_def);
    scanf("%d", &pkm_attributes.speed);

    //registra Pokémon
    strcpy(pkdex[*size].name, pkm_name);
    strcpy(pkdex[*size].type_primary, pkm_type1);
    strcpy(pkdex[*size].type_secondary, pkm_type2);
    pkdex[*size].attribute = pkm_attributes;
    pkdex[*size].attack[4] = pkm_atks[4];
    *size += 1; //aumenta indicador e ocupação da Pokedex
};

void print_pokemon(struct pokemon_t *pkdex){
    //recebe index
    int pkdex_index;
    struct pokemon_t pkm;
    scanf("%d", &pkdex_index);

    //acha Pokémon
    pkm = pkdex[pkdex_index];

    //imprime info
    printf("Nome do Pokemon: %s\n", pkm.name);
    printf("Tipo primario: %s\n", pkm.type_primary);
    printf("Tipo secundario: %s\n", pkm.type_secondary);
    printf("Status:\n");
    printf("\tHP: %d\n", pkm.attribute.health);
    printf("\tAtaque: %d\n", pkm.attribute.atk);
    printf("\tDefesa: %d\n", pkm.attribute.def);
    printf("\tAtaque Especial: %d\n", pkm.attribute.s_atk);
    printf("\tDefesa Especial: %d\n", pkm.attribute.s_def);
    printf("\tVelocidade: %d\n\n", pkm.attribute.speed);
};

void new_attack(){};

void print_atk(){};