// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva 
    Exercício 55: [DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de agora, o computador vai sortear um número entre 1 e 10 e o 
    jogador vai ter 4 tentativas para tentar acertar.
    Data do programa: 17/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i = 0, num, comp;

    puts("========== SORTEIO DE NÚMEROS ==========");

    srand(time(NULL));
    while(i < 4)
    {
        i++;
        printf("TENTATIVA %d\n", i);
        printf("Digite o valor: ");
        scanf("%d", &num);

        comp = rand() % 10;

        printf("O número sorteado foi: %d!\n", comp);
        if (num < 0 && num > 10)
            puts("VALOR INVÁLIDO!");

        if (num == comp)
            puts("PARABÉNS, VOCÊ ACERTOU O NÚMERO SORTEADO!\nVOCÊ GANHOU A RODADA!\n");
        else
            puts("COMPUTADOR VENCEDOR DA RODADA!\n");
    }

    return 0;
} // end main