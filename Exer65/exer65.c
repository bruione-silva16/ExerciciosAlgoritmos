// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 07 – REPETIÇÃO COM PARA
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 65: Desenvolva um programa usando a estrutura “para” que mostre na tela a seguinte contagem:
    100 90 80 70 60 50 40 30 20 10 0 Acabou!
    Data do programa: 23/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i;

    for (i = 100; i >= 0; i = i - 10)
        printf("%d ", i);

    printf("Acabou!\n");

    return 0;
} // end main