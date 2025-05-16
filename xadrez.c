#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// ---------- TORRE ----------
void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        movimentoTorre(casas - 1);
    }
}
// ---------- BISPO ----------
void moverBispoDiagonal(int casas) {
    if (casas > 0);

    // Loops aninhados conforme exigido
    for (int v = 0; v < 1; v++) { // Movimento vertical (Cima)
        for (int h = 0; h < 1; h++) { // Movimento horizontal (Direita)
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispoDiagonal(casas - 1);
}
// ---------- RAINHA ----------
void moverRainhaEsquerda(int casas) {
    if (casas > 0);
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

void moverRainhaBaixo(int casas) {
    if (casas > 0);
    printf("Baixo\n");
    moverRainhaBaixo(casas - 1);
}

// ---------- CAVALO ----------
void moverCavalo() {
    int casasVertical = 2;
    int casasHorizontal = 1;

    // Loop externo para movimentação vertical (Cima)
    for (int i = 0, movV = casasVertical; i < casasVertical; i++, movV--) {
        if (movV == 1) continue; // Exemplo de uso do continue
        printf("Cima\n");

        // Loop interno controlando condição com múltiplas variáveis
        for (int j = 0; j < casasHorizontal; j++) {
            if (i + j > 2) break; // Exemplo de uso do break
            if (i == 1 && j == 0) {
                printf("Direita\n");
            }
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    // Implementação de Movimentação do Bispo (diagonal: cima + direita)
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int contadorBispo = 1;
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");
    // Implementação de Movimentação da Torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");
    // Implementação de Movimentação da Rainha
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    printf("Movimento do Cavalo (movimentos em L, 2 casas para cima e uma esquerda):\n");
    int movimentosCavalo_cima = 2;
    int movimentosCavalo_direita = 1;
    
    // Primeiro loop for para as duas casas para cima.
    for (int i = 0; i < movimentosCavalo_cima; i++) {
        printf("Cima\n");
    }
    // loop white para a casa para a direita.
    int j = 0;
    while (j < movimentosCavalo_direita) {
        printf("Direita\n");
        j++;
    }
     

    return 0;
}
