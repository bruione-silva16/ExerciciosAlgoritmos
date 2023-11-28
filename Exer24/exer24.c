// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 24: Faça um algoritmo que pergunte a distância que um passageiro deseja percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km 
    para viagens até 200Km e R$0.45 para viagens mais longas.
    Data do programa: 28/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int quant_Km;
    float preco_passagem;

    printf("Qual foi a quantidade de KM percorridos? ");
    scanf("%d", &quant_Km);

    if (quant_Km <= 200)
    {
        preco_passagem = quant_Km * 0.50;
        printf("O preço da passagem é R$%.2f!\n", preco_passagem);
    } else 
    {
        preco_passagem = quant_Km * 0.45;
        printf("O preço da passagem é R$%.2f!\n", preco_passagem);
    }

    return 0;
} // end main