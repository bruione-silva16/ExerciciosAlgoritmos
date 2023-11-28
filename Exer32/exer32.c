// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 32: [DESAFIO] Crie um jogo onde o computador vai sortear um número entre 1 e 5 o
    jogador vai tentar descobrir qual foi o valor sorteado.
    Data do programa: 02/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num, comp;

    puts("========== NÚMERO SORTEADO ==========");

    srand(time(NULL)); // Gerar semente de valores aleatórios
    comp = rand() % 5; // Sorteio de valores entre 1 e 5

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("O número sorteado foi: %d!\n", comp);
    if (num < 0 && num > 5)
        puts("VALOR INVÁLIDO!");

    if (num == comp)
        puts("PARABÉNS, VOCÊ ACERTOU O NÚMERO SORTEADO!\nVOCÊ GANHOU A RODADA!");
    else
        puts("COMPUTADOR VENCEDOR DA RODADA!");

    return 0;
} // end main
