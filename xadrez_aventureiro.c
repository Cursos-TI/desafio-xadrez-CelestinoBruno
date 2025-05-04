#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int torre = 5;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;
    
    // Movimento da Torre para 5 casas para a direita
    printf("Movimento da Torre:\n");

    for(int t = 0; t < torre; t++){
        printf("Direita \n");
    }

    // Movivento do Bispo, horizontalmente para a esquerda(cima + esquerda)
    printf("\nMovimento do Bispo:\n");

    while(bispo <= 5){
        printf("Cima Esquerda \n");
        bispo++;
    }

    // Movivento do Rainha para 8 casas a esquerda
    printf("\nMovimento do Rainha:\n");

    do{
        printf("Esquerda \n");
        rainha++;
    }while(rainha <=8 );

        // Movivento do Cavalo, sendo 2 casas para cima e uma a esquerda.
    printf("\nMovimento do Cavalo:\n");

    while(cavalo --){
        for(int c = 0; c < 2; c++){
            printf("Baixo\n");        //Imprime "baixo" duas vezes
            printf("\n");
        }
        printf("Esquerda\n");       //Imprime "esquerda" uma veze
    }


    return 0;
}