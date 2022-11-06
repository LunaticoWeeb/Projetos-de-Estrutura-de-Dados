#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "catalogo.h"
#include "jogo.h"
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
    } else {
        catalogo->jogo = realloc(catalogo->jogo, (catalogo->total_jogos*sizeof(JOGO*)));
    }
    catalogo->jogo[catalogo->total_jogos] = jogo;
    catalogo->total_jogos++;
}

void catalogando(){
    CATALOGO catalogo;
    catalogo.total_jogos = 0;
    
    char *nome_jogo;
    char *empresa_jogo;
    int ano_jogo;

    do{
        nome_jogo = readLine();
        if(strcmp(nome_jogo, "F") == 0) continue;
        empresa_jogo = readLine();
        scanf("%d%*c ", &ano_jogo);
        JOGO *novoJogo = registrar(nome_jogo, empresa_jogo, ano_jogo);
        catalogar(&catalogo, novoJogo);
    } while (strcmp(nome_jogo, "F") != 0);

    char ch;

    while(ch != 'F'){
        scanf("%c \n", &ch);
        if(ch == 'A'){
            int ano;
            scanf("%d%*c", &ano);
            busca_ano(ano, catalogo);
        } else if(ch == 'E'){
            char *empresa_buscada = readLine();
            busca_empresa(empresa_buscada, catalogo);
        }
    };
}

void busca_ano(int ano, CATALOGO catalogo){
    int flag = 0;
    for(int i = 0; i < catalogo.total_jogos; i++){
        JOGO *jogo =  (catalogo.jogo)[i];
        int ano_jogo = jogo->ano;
        if(ano_jogo == ano){
            flag++;
            imprimir_jogo(jogo);
        }
    }
    if (flag == 0) {
        imprimir_jogo(NULL);
    }
}

void busca_empresa(const char *nome, CATALOGO catalogo){
    int flag = 0;
    for(int i = 0; i < catalogo.total_jogos; i++){
        JOGO *jogo =  (catalogo.jogo)[i];
        char *empresa_jogo = jogo->empresa;
        if(strcmp(empresa_jogo, nome) == 0){
            flag++;
            imprimir_jogo(jogo);
        }
    }
    if (flag == 0) {
        imprimir_jogo(NULL);
    }
}