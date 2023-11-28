// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 25: [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. Analise seus comprimentos e diga se é possível formar um triângulo 
    com essas retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento de cada lado deve ser menor que a soma dos outros dois.
    Data do programa: 28/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int A, B, C;

    puts("========== FORMAÇÃO DOS TRIÂNGULOS ==========");

    printf("Valor de A (cm): ");
    scanf("%d", &A);

    printf("Valor de B (cm): ");
    scanf("%d", &B);

    printf("Valor de C (cm): ");
    scanf("%d", &C);

    if (A < B + C && B < C + A && C < A + B)
        puts("Com essas medidas, é possível formar um triângulo");
    else
        puts("Com essas medidas, não é possível formar um triângulo");

    return 0;
} // end main