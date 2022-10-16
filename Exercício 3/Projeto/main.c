#include <stdio.h>
#include <string.h>

struct jogo_t{
    char nome[256]; //pode ser tamanho indeterminado?
    char empresa[256]; //pera, o tamnho é do lado da var não?
    int ano;
};

void registra_jogo(struct jogo_t *jogo){
    char nome[256], empresa[256];

    scanf("%s", nome);
    scanf("%s", empresa);
    scanf("%d", &jogo->ano);

    strcpy(jogo->nome, nome);
    strcpy(jogo->empresa, empresa);
}

void print_jogo(struct jogo_t *jogo){
    printf("\nJogo: %s", jogo->nome);
    printf("\nProdutora: %s", jogo->empresa);
    printf("\nAno: %d\n", jogo->ano);
}

int main(){
    struct jogo_t novo_jogo;
    registra_jogo(&novo_jogo);
    print_jogo(&novo_jogo);
    return 0;
}