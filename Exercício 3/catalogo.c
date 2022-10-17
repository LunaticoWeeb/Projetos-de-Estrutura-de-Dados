#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "catalogo.h"
#include "jogos.h"
#include "util.h"

struct catalogo_t{
    JOGO **jogo;
    int total_jogos;
}; 

struct jogo_t{
    char nome[256];
    char empresa[256];
    int ano;
};

void catalogar(CATALOGO *catalogo, JOGO *jogo){
    if (catalogo->total_jogos == 0){
        catalogo->jogo = malloc(sizeof(JOGO*));
        catalogo->total_jogos++;
    } else {
        catalogo->jogo = realloc(catalogo->jogo, (catalogo->total_jogos*sizeof(JOGO*)));
        catalogo->total_jogos++;
    }
}

CATALOGO catalogando(){
    CATALOGO catalogo;
    char *nome_jogo;
    do{ 
        nome_jogo = readLine();
        if(strcmp(nome_jogo, "F") == 0) continue;
        JOGO *novoJogo = entrada(nome_jogo);
        catalogar(&catalogo, novoJogo);
    } while(strcmp(nome_jogo, "F") != 0);

    char ch;
    ch = getchar();

    while(ch != '\n'){
        if(ch == 'A'){
            int ano;
            scanf("%d", &ano);
            imprimir_jogo(busca_ano(ano, catalogo));
        } else if(ch == 'E'){
            busca_empresa(readLine(),  catalogo);
        } else if(ch == 'F'){
            break;
        }
        ch = getchar();
    }
    return catalogo;
}
JOGO *busca_ano(int ano, CATALOGO catalogo){
    for(int i = 0; i < catalogo.total_jogos; i++){
        JOGO *jogo =  (catalogo.jogo)[i];
        int ano_jogo = jogo->ano;
        if(ano_jogo == ano){
            return catalogo.jogo[i];
        }
    }
    return NULL;
}

JOGO *busca_empresa(char *nome, CATALOGO catalogo){
    for(int i = 0; i < catalogo.total_jogos; i++){
        JOGO *jogo =  (catalogo.jogo)[i];
        char *empresa_jogo = jogo->empresa;
        if(strcmp(empresa_jogo, nome) == 0){
            return catalogo.jogo[i];
        }
    }
    return NULL;
}