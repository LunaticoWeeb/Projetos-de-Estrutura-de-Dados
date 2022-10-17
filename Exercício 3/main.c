#include "catalogo.h"
#include "jogos.h"
#include "util.h"

#include <stdio.h>
#include <string.h>

struct catalogo_t{
    JOGO **jogo;
    int total_jogos;
}; 

int main(){
    CATALOGO catalogo_main;
    catalogo_main = catalogando();
    return 0;
}