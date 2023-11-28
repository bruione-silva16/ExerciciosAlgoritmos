// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- Curso de Algoritmos ---
    Autor: Phelipe Bruione da Silva
    Exercício 41: Desenvolva um programa que mostre na tela a seguinte contagem:
    100 95 90 85 80 ... 0 Acabou!
    Data do programa: 05/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---     
    int n = 100;

    while (n >= 0)
    {
        printf("%d ", n);
        n -= 5;
    }
    printf("Acabou!\n");

    return 0;
} /// end main