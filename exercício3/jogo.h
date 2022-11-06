#ifndef JOGO_H
#define JOGO_H

#include "util.h"

typedef struct jogo_t JOGO;

JOGO *registrar(const char *nome, const char *empresa, int ano);
void imprimir_jogo(JOGO *jogo);

#endif //JOGO_H