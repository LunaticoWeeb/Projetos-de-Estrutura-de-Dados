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
    int valor;
    scanf("%d", &valor);
    int i, *troco;
    troco = trocado(&valor);
    for (i = 0; i < 6; i++){
        switch (i){
            case 0:
                printf("O valor consiste em %d moedas de 1 real\n", troco[i]);
                break;
            case 1:
                printf("O valor consiste em %d moedas de 50 centavos\n", troco[i]);
                break;
            case 2:
                printf("O valor consiste em %d moedas de 25 centavos\n", troco[i]);
                break;
            case 3:
                printf("O valor consiste em %d moedas de 10 centavos\n", troco[i]);
                break;
            case 4:
                printf("O valor consiste em %d moedas de 5 centavos\n", troco[i]);
                break;
            case 5:
                printf("O valor consiste em %d moedas de 1 centavo\n", troco[i]);
                break;
            default:
                break;
        }
    }
}