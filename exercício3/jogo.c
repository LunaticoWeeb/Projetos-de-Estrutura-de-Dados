#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "jogo.h"
#include "util.h"

struct jogo_t{
    char nome[256];
    char empresa[256];
    int ano;
};

JOGO *registrar(const char *nome, const char *empresa, int ano){
    JOGO *jogo;
    jogo = (JOGO*) malloc(sizeof(JOGO));

    strcpy(jogo->nome, nome);
    strcpy(jogo->empresa, empresa);
    jogo->ano = ano;

    return jogo;
};

void imprimir_jogo(JOGO *jogo){
    if (jogo == NULL){
        printf("Nada encontrado\n");
    } else {
        printf("%s\n", jogo->nome);
    }
}