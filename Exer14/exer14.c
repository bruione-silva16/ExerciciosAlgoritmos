// --- Bibliotecas Iniciais --- 
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 14: A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
    um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
    quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
    sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado. 
    Data do programa: 26/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int quant_KM, dias_perc;
    float preco_final;

    puts("-------- LOCALIZA SEMINOVO --------");

    printf("Quantidade de Km percorridos? ");
    scanf("%d", &quant_KM);

    printf("Qauntidade de dias percorridos com o carro? ");
    scanf("%d", &dias_perc);
    preco_final = (dias_perc * 90) + (quant_KM * 0.20); 

    printf("Preço final: R$%.2f!\n", preco_final);

    return 0;
} // end main