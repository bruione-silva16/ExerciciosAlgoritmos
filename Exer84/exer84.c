// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 84: Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses valores em dois vetores, em posições relacionadas. 
    No final, mostre uma listagem contendo apenas os dados das pessoas menores de idade.
    Data do programa: 15/11/2023
*/
#define DIM 9
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char *nome[70];
    int idade[DIM], i;
    
    
    puts("===========================================");
    puts("            VETORES DOS MENORES            ");
    puts("===========================================");

    for (i = 0; i < DIM; i++) 
    {
        printf("PESSOA %d\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", &nome[i]);

        printf("Idade de %s: ", &nome[i]);
        scanf("%d", &idade[i]);
        puts("--------------------------------");
    }   

    puts("LISTAGEM DOS MENORES");
    for (i = 0; i < DIM; i++)
    {
        if (idade[i] < 18)
            printf("- %s %5d anos!\n", &nome[i], idade[i]);
    }

    return 0;
} // end main