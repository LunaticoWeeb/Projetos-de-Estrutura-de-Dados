#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "jogos.h"

struct jogo_t{
    char nome[256];
    char empresa[256];
    int ano;
};

JOGO *registrar(char nome[256], char empresa[256], int ano){
    JOGO *jogo;
    jogo = (JOGO *) malloc(sizeof(JOGO));
    strcpy(jogo->nome, nome);
    strcpy(jogo->empresa, empresa);
    jogo->ano = ano;
    return jogo;
};

void imprimir_jogo(JOGO *jogo){
    printf("\nJogo %s", jogo->nome); 
    printf("\nEmpresa %s", jogo->empresa); 
    printf("\nAno %d\n", jogo->ano); 
}