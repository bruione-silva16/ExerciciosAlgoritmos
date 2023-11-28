// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 07 – REPETIÇÃO COM PARA
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 66: Escreva um programa que leia um número qualquer e mostre a tabuada desse
    número, usando a estrutura “para”.
    Ex: Digite um valor: 5
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15 ...
    Data do programa: 24/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i, tab;

    puts("============ TABUADA DOS NUMEROS ============");

    printf("Digite um valor: ");
    scanf("%d", &tab);

    for (i = 1; i <= 10; i++)
        printf("%d X %d = %d!\n", tab, i, tab* i);
        
    return 0;
} // end main