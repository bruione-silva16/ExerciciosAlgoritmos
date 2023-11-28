// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 09 - PROCEDIMENTOS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 90:  Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses valores para um procedimentoSomador() que vai calcular e mostrar 
    a soma entre eles.
    Data do programa: 16/11/2023
*/
void Somador(int a, int b);
// --- Função Principal ---
int main() 
{
    // --- Declaração das variáveis ---
    int n1, n2;

    puts("====================================");
    puts("        SOMA DE DOIS VALORES        ");
    puts("====================================");

    printf("Digite um valor: ");
    scanf("%d", &n1);

    printf("Digite outro valor: ");
    scanf("%d", &n2);

    Somador(n1, n2);
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Somador(int a, int b)
{
    printf("O resultado de %d + %d = %d!\n", a, b, a + b);
} // end Somador