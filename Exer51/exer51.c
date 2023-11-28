// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 51: Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela qual foi o maior e qual foi o menor preço digitados.
    Data do programa: 09/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int n = 0;
    float preco_valor, maior_valor = 0.0, menor_valor = 0.0;

    puts("========== PREÇOS LOJAS AMERICANAS ==========");

    while (n < 8)
    {
        
        printf("Valor do %d° produto: R$", n);
        scanf("%f", &preco_valor);
        if (n == 0)
            menor_valor = preco_valor;

        if (preco_valor > maior_valor)
            maior_valor = preco_valor;
        
        if (preco_valor < menor_valor)
            menor_valor = preco_valor;

        n++;
    }
    printf("O preço de maior valor é R$%.2f!\n", maior_valor);
    printf("O preço de menor valor é R$%.2f!\n", menor_valor);
    return 0;
} // end main