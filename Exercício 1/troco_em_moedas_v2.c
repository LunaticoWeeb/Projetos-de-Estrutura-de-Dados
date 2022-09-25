#include <stdio.h>

int *trocado(int *valor){
    static int  troco[6];
    int  resto, i, moedas[6] = {100, 50, 25, 10, 5, 1};
    for (i = 0; i < 6; i++){
        resto = *valor % moedas[i];
        troco[i] = (*valor - resto) / moedas[i];
        *valor -= moedas[i] * troco[i];
    }
    return troco;
}

int main(){
    int valor = 72589;
    int i, *troco;
    troco = trocado(&valor);
    for (i = 0; i < 6; i++){
        printf("%d\n", troco[i]);
    }
}