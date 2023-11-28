// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 06: Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
    sucessor.
    Ex:
    Digite um número: 9
    O antecessor de 9 é 8
    O sucessor de 9 é 10
    Data do programa: 25/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num;

    puts("-------- ANTECESSOR E SUCESSOR --------");

    printf("Digite um número: ");
    scanf("%d", &num);                                                                             

    printf("O antecessor de %d é %d!\n", num, num - 1);
    printf("O sucessor de %d é %d!\n", num, num + 1);

    return 0;
} // end main