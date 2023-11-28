// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 19: Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média e mostre na tela. No final, analise a média e mostre se o 
    aluno teve ou não um bom aproveitamento (se ficou acima da média 7.0).
    Data do programa: 27/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2, media;

    puts("========== NOTA FINAL ==========");

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Média: %.2f!\n", media);

    if (media < 7.0)
        puts("ALUNO REPROVADO!");
    else
        puts("ALUNO APROVADO!");


    return 0;
} // end main