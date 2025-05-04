#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int torre = 5;
    int bispo = 1;
    int rainha = 1;
    
    // Movimento da Torre para 5 casas para a direita
    printf("Movimento da Torre horizontalmente:\n");

    for(int t = 0; t < torre; t++){
        printf("Direita \n");
    }

    // Movivento do Bispo, horizontalmente para a direita(cima + direita)
    printf("\nMovimento do Bispo \n");

    while(bispo <= 5){
        printf("Cima Direita \n");
        bispo++;
    }

    // Movivento do Rainha para 8 casas a esquerda
    printf("\nMovimento do Rainha\n");

    do{
        printf("Esquerda \n");
        rainha++;
    }while(rainha <=8 );

    return 0;
}