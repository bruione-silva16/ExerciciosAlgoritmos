// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 73: Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo diretamente) um vetor numérico com 10 posições, 
    conforme abaixo:
    9   8   7   6   5   4   3   2   1   0
    0   1   2   3   4   5   6   7   8   9
    Data do programa: 29/10/2023
*/
#define TAM 10
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], i;
    
    puts("===============================");
    puts("            VETORES            ");
    puts("===============================");

    for (i = 0; i < TAM; i++)
    {
        vet[i] = 9 - i;
        printf(" %d ", vet[i]);
    }
    putchar('\n');

    for (i = 0; i < TAM; i++)
        printf(" %d ", i);
    putchar('\n');


    return 0;
} // end main