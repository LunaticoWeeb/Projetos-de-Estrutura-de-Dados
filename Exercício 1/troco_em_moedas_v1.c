#include <stdio.h>

int main(){
    int valor;
    valor = 7256;
    int i, moedas[6] = {100, 50, 25, 10, 5, 1}, troco[6], resto;
    for (i = 0; i < 6; i++){
        resto = valor%moedas[i];
        troco[i] = (valor - resto)/moedas[i];
        valor -= moedas[i] * troco[i];
        printf("%d\n", troco[i]);
    }
    return 0;
}