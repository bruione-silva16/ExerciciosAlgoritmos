// --- Bibliotecas Iniciais --- 
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 12: Crie um programa que leia o preço de um produto, calcule e mostre o seu
    PREÇO PROMOCIONAL, com 5% de desconto.
    Data do programa: 26/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float preco_prod, desc;

    puts("-------- DESCONTO DE 5% PRODUTO --------");

    printf("Qual é o preço do produto? ");
    scanf("%f", &preco_prod);

    desc = preco_prod - (preco_prod * 0.05);
    printf("O valor do produto com o desconto será de: R$%.2f!\n", desc);

    return 0;
} // end main