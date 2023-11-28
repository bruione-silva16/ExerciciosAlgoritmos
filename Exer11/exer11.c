// --- Bibliotecas Iniciais --- 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 11:  Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
    segundo grau e mostre o valor de Delta.
    Data do programa: 26/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int a, b, c;
    float delta;

    puts("-------- DELTA EQUACAO SEGUNDO GRAU --------");

    printf("Valor de a: ");
    scanf("%d", &a);

    printf("Valor de b: ");
    scanf("%d", &b);

    printf("Valor de c: ");
    scanf("%d", &c);

    delta = (b * b) - (4 * a * c);
    printf("Valor de delta: %.2f!\n", delta);
   

    return 0;
}