// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 19: Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou ÍMPAR.
    Data do programa: 27/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num, res;

    puts("========== PAR OU ÍMPAR ==========");

    printf("Digite um número: ");
    scanf("%d", &num);

    res = num % 2 == 0 ? printf("O valor %d é PAR!\n", num) :  printf("O valor %d é ÍMPAR!\n", num);

    return 0;
} // end main