// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 05 – ENQUANTO COM FLAG
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 58: Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa vai parar quando for digitada a idade 999. No final, 
    mostre quantos alunos existem na turma e qual é a média de idade do grupo.
    Data do programa: 22/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i = 0, idade, somaIdade = 0;
    float mediaIdade;

    puts("========== SOMADOR DE IDADES ==========");

    do
    {
        i++;
        printf("Idade %d: ", i);
        scanf("%d", &idade);

        somaIdade += idade;
        mediaIdade = (somaIdade - 999) / i;
    } while (idade != 999);
    puts("======================================");
    printf("Nessa turma, tem %d alunos!\n", i );
    printf("A média de idade dessa turma é: %.2f!\n", mediaIdade);

    return 0;
} // end main