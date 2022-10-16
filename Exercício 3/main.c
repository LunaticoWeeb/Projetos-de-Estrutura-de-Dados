#include "jogos.h"

#include <stdio.h>
#include <string.h>

int main(){
    JOGO *jogo;
    char nome[] = "Nome";
    char empresa[] = "Empresa";
    int ano = 2020;
    jogo = registrar(nome, empresa, ano);

    imprimir_jogo(jogo);
    return 0;
}