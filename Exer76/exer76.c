// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe bvruione da Silva
    Exercício 76: Crie um programa que preencha automaticamente um vetor numérico com 7
    números gerados aleatoriamente pelo computador e depois mostre os valores
    gerados na tela.
    Data do programa: 09/11/2023
*/
#define TAM 7
// --- Função principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], i;
    
    puts("======================================");
    puts("          GERADOR DE VETORES          ");
    puts("======================================");

    srand(time(NULL)); // Gera a semente dos valores aleatórios

    for (i = 1; i <= 7; i++)
    {
        vet[i] = rand() % 10;
        printf("Vet[%d] = %d!\n", i, vet[i]);
    }
    putchar('\n');


    return 0;
}
