// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 30: [DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo de triângulo será formado:
    - EQUILÁTERO: todos os lados iguais
    - ISÓSCELES: dois lados iguais
    - ESCALENO: todos os lados diferentes
    Data do programa: 01/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int A, B, C;

    puts("========== FORMAÇÃO E TIPOS DE TRIÂNGULOS ==========");

    printf("Valor de a (cm):");
    scanf("%d", &A);

    printf("Valor de b (cm): ");
    scanf("%d", &B);

    printf("Valor de c(cm): ");
    scanf("%d", &C);

    if (A < B + C && B < C + A && C < A + B)
        puts("É POSSÍVEL FORMAR UM TRIÂNGULO!");
    else
        puts("NÃO É POSSÍVEL FORMAR UM TRIÂNGULO!");
    
    if (A == B && B == C && A == C) 
        puts("TRIÂNGULO EQUILÁTERO");
    else if (A != B || B != C || A != C)
        puts("TRIÃNGULO ESCALENO!");
    else 
        puts("TRIÂNGULO ISOŚCELES!");

    return 0;
} // end main