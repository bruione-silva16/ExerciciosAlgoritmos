// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 48: Faça um programa que leia 7 números inteiros e no final mostre o somatório entre eles. 
    Data do programa: 09/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i = 0, soma = 0, valor;

    puts("========== SOMADOR DE VALORES ==========");

    while (i < 7)
    {
        i++;
        printf("Digite o %d° valor: ", i);
        scanf("%d", &valor);
        soma += valor;
    }
    printf("A soma desses valores é: %d!\n", soma);

    return 0;
} // end main