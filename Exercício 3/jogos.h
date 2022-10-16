#ifndef JOGO_H
#define JOGO_H

typedef struct jogo_t JOGO;

JOGO *registrar(char nome[256], char empresa[256], int ano);
void imprimir_jogo(JOGO *jogo);

#endif //JOGO_H