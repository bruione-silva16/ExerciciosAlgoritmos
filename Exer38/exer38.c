// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 – REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 38: Escreva um programa que mostre na tela a seguinte contagem: 6 7 8 9 10 11 Acabou! 
    Data do programa: 03/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int n = 6;

    while (n < 12)
    {
        printf("%d ", n);
        n++;
    }
    printf("Acabou!\n");

    return 0;
} // end main