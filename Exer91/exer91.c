// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 09 - PROCEDIMENTOS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 91: Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses valores para um procedimento Maior() que vai verificar qual deles 
    é o maior e mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem informando essa característica.
    Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void Maior(int a, int b);
// --- Função Principal ---
int main() 
{
    // --- Declaração das variáveis ---
    int n1, n2;
    
    puts("===========================");
    puts("        MAIOR VALOR        ");
    puts("===========================");

    printf("Digite um valor: ");
    scanf("%d", &n1);

    printf("Digite outro valor: ");
    scanf("%d", &n2);

    Maior(n1, n2);
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Maior(int a, int b)
{
    if (a > b)
        printf("O valor %d é MAIOR que o valor %d!\n", a, b);
    else if (a < b)
        printf("O valor %d é MENOR que o valor %d!\n", a, b);
    else
        printf("Os valores %d e %d são iguais!\n", a, b);
} // end Maior