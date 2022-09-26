#include <stdio.h>
#include <string.h>

struct teste_t{
    char nome[10];
    int valor;
};

void cria(struct teste_t *t, char novo_nome[10], int novo_valor);

int main(){
    struct teste_t teste[10];
    char frase[10] = "teste";
    int numero = 42;

    cria(&teste[10], frase, numero);

    printf("%s\n%d\n", teste[3].nome, teste[3].valor);
    return 0;
}

void cria(struct teste_t *t, char novo_nome[10], int novo_valor) {
    strcpy(t->nome, novo_nome);
    t->valor = novo_valor;
};
