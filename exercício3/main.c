#include <stdio.h>
#include <string.h>

#include "catalogo.h"
#include "jogo.h"
#include "util.h"

struct catalogo_t{
    JOGO **jogo;
    int total_jogos;
}; 

int main(){
    catalogando();
    return 0;
}