#include <stdio.h>

int main() {
    // ======================================================
    // Simulação do movimento das peças de xadrez
    // Torre → usa FOR
    // Bispo → usa WHILE
    // Rainha → usa DO-WHILE
    // ======================================================

    // ----------- TORRE -----------
    // A torre se move em linha reta. Vamos mover 5 casas para a direita.
    int casasTorre = 5;

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i); // imprime cada movimento da torre
    }

    // ----------- BISPO -----------
    // O bispo se move na diagonal. Vamos mover 5 casas para cima e para a direita.
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo); // diagonal: duas direções por casa
        contadorBispo++;
    }

    // ----------- RAINHA -----------
    // A rainha pode se mover em todas as direções. Vamos mover 8 casas para a esquerda.
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha); // imprime cada movimento da rainha
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Fim do programa
    printf("\nMovimentação concluída!\n");

    return 0;
}
