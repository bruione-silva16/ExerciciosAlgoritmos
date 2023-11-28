// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 21: Faça um algoritmo que leia um determinado ano e mostre se ele é ou não BISSEXTO.
    Data do programa: 28/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int ano;

    puts("========== ANO BISSEXTO ==========");

    printf("Digite um ano (yyyy): ");
    scanf("%d", &ano);

    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0))
        printf("O ano %d É BISSEXTO!\n", ano); 
    else
        printf("O ano %d NÃO É BISSEXTO!\n", ano); 

    return 0;
} // end main