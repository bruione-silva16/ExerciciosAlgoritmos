// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    ---- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercçio 79: Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor. No final, mostre quais são os números pares que foram digitados e 
    em que posições eles estão armazenados.
    Data do programa: 12/11/2023
*/
#define TAM 10
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], i, pos;


    puts("========================================");
    puts("            VETORES DE PARES            ");
    puts("========================================");

    // --- Leitura dos dados ---
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    puts("=======================================");
    for (i = 0; i < TAM; i++)
    {
        if (vet[i] % 2 == 0)
        {
            pos = i;
            printf("Número par %d está na posição [%d]!\n", vet[i], pos);
        }
    }
    return 0;
} // end main