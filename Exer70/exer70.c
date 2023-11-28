// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 07 – REPETIÇÃO COM PARA
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 70: [DESAFIO] Faça um programa que mostre os 10 primeiros elementos da Sequência de Fibonacci:
    1 1 2 3 5 8 13 21...
    Data do programa: 24/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int t0 = 1, t1 = 1, t2, i;

    puts("============ SEQUÊNCIA DE FIBONACCI ============");

    printf("%d %d ", t0, t1);
    for (i = 3; i <= 10; i++)
    {
        t2 = t1 + t0;
        printf("%d ", t2);
        t1 = t0;
        t0 = t2;
    }
    printf("FIM!\n");

    return 0;
} // end main