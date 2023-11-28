// --- Bibliotecas Iniciais --- 
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 16: [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros fumados por dias e 
    quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de vida um fumante perderá e exiba o total 
    em dias.
    Data do programa: 27/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int anos_fumados, cigarros_dias, reducao_dias;
    float reducao_minutos;

    puts("========== REDUÇÃO DE VIDA CIGARRO ===========");

    printf("Quantos cigarros você fuma por dia? ");
    scanf("%d", &cigarros_dias);

    printf("Quantos anos você fuma? ");
    scanf("%d", &anos_fumados);

    reducao_dias = anos_fumados * 365 * cigarros_dias * 10;
    reducao_minutos = reducao_dias / 1440;

    printf("Voce tem %.2f dias!\n", reducao_minutos);

    return 0;
} // end main 