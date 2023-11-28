// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 71: Faça um programa que preencha automaticamente um vetor numérico com 8
    posições, conforme abaixo:
    999 999 999 999 999 999 999 999
     0   1   2   3   4   5   6   7
    Data do programa: 29/10/2023
*/
#define TAM 8
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], i;

    puts("===============================");
    puts("            VETORES            ");
    puts("===============================");

    for (i = 0; i < TAM; i++)
    {
        vet[i] = 999;
        printf(" %d ", vet[i]);
    }
    putchar('\n');

    for (i = 0; i < TAM; i++)
        printf("  %d  ", i);
    putchar('\n');

    return 0;
} // end main