#ifndef CATALOGO_H
#define CATALOGO_H

#include "jogos.h"
#include "util.h"

typedef struct catalogo_t CATALOGO;
typedef struct jogo_t JOGO;

void catalogar(CATALOGO *catalogo, JOGO *jogo);
CATALOGO catalogando();
JOGO *busca_ano(int ano, CATALOGO catalogo);
JOGO *busca_empresa(char *nome, CATALOGO catalogo);

#endif //CATALOGO_H