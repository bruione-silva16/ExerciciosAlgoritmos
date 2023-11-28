// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 07 – REPETIÇÃO COM PARA
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 69: [DESAFIO] Desenvolva um programa que leia o primeiro termo e a razão de uma PA (Progressão Aritmética), 
    mostrando na tela os 10 primeiros elementos da PA e a soma entre todos os valores da sequência.
    Data do programa: 24/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i, a1, r, an, soma = 0;

    puts("============ PROGRESSÃO ARITMÉTICA ============");

    printf("Primeiro termo: ");
    scanf("%d", &a1);

    printf("Razão da PA: ");
    scanf("%d", &r);

    an = a1 + (r * (10 - 1));
    for (i = a1; i <= an; i += r)
    {
        soma += i;
        printf("%d ..", i);
    }
    printf("\nA soma é dessa P.A é: %d!\n", soma);

    return 0;
} // end main