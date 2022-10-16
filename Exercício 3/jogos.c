#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "jogos.h"
#include "util.h"

struct jogo_t{
    char nome[256];
    char empresa[256];
    int ano;
};

JOGO *registrar(const char *nome, const char *empresa, int ano){
    JOGO *jogo;
    jogo = (JOGO *) malloc(sizeof(JOGO));
    strcpy(jogo->nome, nome);
    strcpy(jogo->empresa, empresa);
    jogo->ano = ano;
    return jogo;
};

JOGO *entrada(){
    JOGO jogo;

    strcpy(jogo.nome, readLine());
    strcpy(jogo.empresa, readLine());

    scanf("%d", &(jogo.ano));

    return registrar(jogo.nome, jogo.empresa, jogo.ano);
};

void imprimir_jogo(JOGO *jogo){
    printf("\nJogo %s", jogo->nome); 
    printf("\nEmpresa %s", jogo->empresa); 
    printf("\nAno %d\n", jogo->ano); 
}