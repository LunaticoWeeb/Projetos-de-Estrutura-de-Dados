#ifndef CATALOGO_H
#define CATALOGO_H

#include "jogo.h"
#include "util.h"

typedef struct catalogo_t CATALOGO;
typedef struct jogo_t JOGO;

void catalogar(CATALOGO *catalogo, JOGO *jogo);
void catalogando();
void busca_ano(int ano, CATALOGO catalogo);
void busca_empresa(const char *nome, CATALOGO catalogo);

#endif //CATALOGO_H