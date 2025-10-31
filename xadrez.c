#include <stdio.h>

int main() {
    // ===========================================================
    // MOVIMENTANDO AS PEÇAS DO XADREZ
    // Peças: Torre, Bispo e Rainha
    // Estruturas de repetição utilizadas:
    // Torre  -> for
    // Bispo  -> while
    // Rainha -> do-while
    // ===========================================================

    // =============================
    // Movimento da TORRE
    // =============================
    // A Torre se move em linha reta, horizontalmente ou verticalmente.
    // Aqui, ela vai andar 5 casas para a DIREITA.
    // Usamos o laço 'for' pois sabemos exatamente quantas vezes repetir.
    int casasTorre = 5;
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // espaçamento visual entre peças

    // =============================
    // Movimento do BISPO
    // =============================
    // O Bispo se move nas diagonais.
    // Aqui, ele vai andar 5 casas na diagonal para CIMA e à DIREITA.
    // Usamos 'while' pois a repetição depende de uma condição.
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("=== Movimento do BISPO ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // =============================
    // Movimento da RAINHA
    // =============================
    // A Rainha é a peça mais poderosa, podendo mover-se em todas as direções.
    // Aqui, vamos simular 8 casas para a ESQUERDA.
    // Usamos 'do-while' para garantir que o movimento ocorra pelo menos uma vez.
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("=== Movimento da RAINHA ===\n");
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\nMovimentos concluídos com sucesso! 🏁\n");

    return 0;
}
