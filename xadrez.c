#include <stdio.h>

int main() {
    // Movimento da TORRE - 5 casas para a direita (usando FOR)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita (usando WHILE)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda (usando DO-WHILE)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    //Movimento do CAVALO - 2 casas para baixo e 1 casa para esquerda
    printf("\nMovimento do Cavalo:\n");

    int movimentocavalo = 1;

    while(movimentocavalo--)
    {
        for (int i = 0; i <= 2;i++)
        {
            printf("Baixo\n");  //Imprime "Baixo" duas vezes
        }
         printf("Esquerda\n"); //Imprime "Esquerda" uma vez
    }

    return 0;
}
