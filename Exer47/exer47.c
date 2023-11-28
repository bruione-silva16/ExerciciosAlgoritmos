// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 47: Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 +
    450 + 400 + 350 + 300 + ... + 50 + 0
    Data do programa: 09/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int n = 500, soma = 0;

    puts("========= SOMADOR de 50 =========");

    while (n >= 0)
    {
        printf("%d + ", n);
        soma += n;
        n -= 50;
    }
    printf("\nA soma total dos valores é: %d!\n", soma);

    return 0;
} // end main