#include <stdio.h>

// Função recursiva para mover a TORRE
// A torre se move para a direita, uma casa por vez
void moverTorre(int casas) {
    if (casas > 0) { // condição de parada: quando não restam mais casas
        printf("Direita\n"); // imprime o movimento
        moverTorre(casas - 1); // chamada recursiva diminuindo uma casa
    }
}

// Função recursiva com loops aninhados para o BISPO
// O bispo se move na diagonal para cima e à direita
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada: nenhuma casa restante

    // Loops aninhados: exigência do desafio
    for (int i = 0; i < 1; i++) { // movimento vertical (simulado)
        for (int j = 0; j < 1; j++) { // movimento horizontal (simulado)
            printf("Cima Direita\n"); // imprime o movimento
        }
    }

    moverBispo(casas - 1); // chamada recursiva com uma casa a menos
}

// Função recursiva para mover a RAINHA
// A rainha se move para a esquerda, uma casa por vez
void moverRainha(int casas) {
    if (casas > 0) { // condição de parada
        printf("Esquerda\n"); // imprime o movimento
        moverRainha(casas - 1); // chamada recursiva com uma casa a menos
    }
}

// Função para mover o CAVALO com loops aninhados e uso de break/continue
// O cavalo se move em "L": duas casas para cima e uma para a direita
void moverCavalo() {
    int movimentos = 1; // número de movimentos em "L"

    for (int i = 0; i < movimentos; i++) { // loop externo (um movimento completo)
        
        // Primeira parte do "L": subir duas casas
        for (int j = 0; j < 3; j++) { // simula até 3, mas ignora a última
            if (j == 2) continue; // pula a terceira repetição (só sobe duas vezes)
            printf("Cima\n");
        }

        // Segunda parte do "L": mover uma casa para a direita
        for (int k = 0; k < 2; k++) {
            if (k == 1) { // só imprime uma vez e sai do loop
                printf("Direita\n");
                break; // encerra o loop horizontal
            }
        }
    }
}


int main() {
    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Chamada da função da TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Chamada da função do BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Chamada da função da RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Chamada da função do CAVALO
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0; // fim do programa
}
