// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 07 – REPETIÇÃO COM PARA
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 64: Desenvolva um programa usando a estrutura “para” que mostre na tela a seguinte contagem:
    0 5 10 15 20 25 30 35 40 Acabou!
    Data do programa: 23/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i;

    for (i = 0; i <= 40; i = i + 5)
        printf("%d ", i);

    printf("Acabou!");
} // end main