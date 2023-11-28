// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercçio 78: Escreva um programa que leia 15 números e guarde-os em um vetor. No final, mostre o vetor inteiro na tela e em seguida mostre em que posições 
    foram digitados valores que são múltiplos de 10.
    Data do programa: 12/11/2023
*/
#define TAM 15
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], i, pos;

    puts("==============================================");
    puts("            VETORES MULTIPLOS DE 10           ");
    puts("==============================================");

    // --- Leitura dos dados ---
    for (i = 1; i <= TAM; i++)
    {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &vet[i]);
    }
    puts("=======================================");
    // --- Mostrando o vetor na tela ---
    for (i = 1; i <= TAM; i++)
        printf("Vet[%d] = %d\n", i, vet[i]);

    puts("=======================================");
    // --- Mostrando as posições dos números que são múltiplos de 10 ---
    for (i = 1; i <= TAM; i++)
    {
        if (vet[i] % 10 == 0)
        {
            pos = i;    
            printf("O múltiplo de 10 está na posição: [%d]!\n", pos); 
        }
    }

    return 0;
} // end main