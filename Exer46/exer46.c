// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 46: Crie um programa que calcule e mostre na tela o resultado da soma entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100.
    Data do programa: 09/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int n = 6, soma = 0;

    puts("========== SOMADOR NÚMEROS PARES ===========");

    while (n <= 100)
    {
        printf("%d + ", n);
        soma += n;
        n += 2;
    }
    printf("\nA soma total é: %d!\n", soma);

    return 0;
} // end main