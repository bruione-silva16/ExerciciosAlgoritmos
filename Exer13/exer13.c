// --- Bibliotecas Iniciais --- 
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 13: Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
    seu novo salário, com 15% de aumento.
    Data do programa: 26/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float sal_func, aumento_salarial;

    puts("-------- REAJUSTE SALARIAL DE 15% --------");

    printf("Salário do funcionário: R$");
    scanf("%f", &sal_func);

    aumento_salarial = sal_func * 1.15;
    printf("Novo salário: R$%.2f!\n", aumento_salarial);

    return 0;
} // end main