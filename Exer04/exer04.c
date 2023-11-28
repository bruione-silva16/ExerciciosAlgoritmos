// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS --- 
    Autor: Phelipe Bruione da Silva
    Exercício 04 : Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
    entre eles.
    Ex:
    Digite um valor: 8
    Digite outro valor: 5
    A soma entre 8 e 5 é igual a 13.
    Data do programa: 24/09/2023 
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num1, num2;

    puts("-------- SOMA DE VALORES -------- ");

    printf("Digite um valor: ");
    scanf("%d", &num1);


    printf("Digite um valor: ");
    scanf("%d", &num2);

    printf("A soma entre %d e %d é igual a %d!\n", num1, num2, num1 + num2);

    return 0;
} // end main

