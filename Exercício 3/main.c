#include "jogos.h"
#include "util.h"

#include <stdio.h>
#include <string.h>

int main(){
    JOGO *jogo;

    jogo = entrada();

    imprimir_jogo(jogo);
    return 0;
}