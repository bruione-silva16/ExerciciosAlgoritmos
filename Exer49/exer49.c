// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 49: Crie um programa que leia 6 números inteiros e no final mostre quantos deles são pares e quantos são ímpares. 
    Data do programa: 09/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i = 0, totPar = 0, totImpar = 0, valor;
    
    puts("========== NÚMEROS PARES ==========");

    while (i < 6)
    {
        i++;
        printf("Digite o %d° valor: ", i);
        scanf("%d", &valor);
        if (valor % 2 == 0)
            totPar++;
        else 
            totImpar++;
    }
    printf("Total de pares: %d!\n", totPar);
    printf("Total de ímpares: %d!\n", totImpar);
    return 0;
} // end main