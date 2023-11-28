// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 81: Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No final, mostre:
    a) Qual é a média de idade das pessoas cadastradas
    b) Em quais posições temos pessoas com mais de 25 anos
    c) Qual foi a maior idade digitada (podem haver repetições)
    d) Em que posições digitamos a maior idade
    Data do programa: 13/11/2023
*/
#define TAM 8
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int idade[TAM], i, somaIdade = 0, maiorIdade = 0, pos;
    float mediaIdade;


    puts("========================================");
    puts("            VETORES DE IDADES           ");
    puts("========================================");

    for (i = 0; i < TAM; i++)
    {
        printf("Informe a %dº idade: ", i + 1);
        scanf("%d", &idade[i]);

        somaIdade += idade[i];
        mediaIdade = somaIdade / TAM;
    }
    puts("========================================");
    printf("A média das idades digitada foi: %.2f!\n", mediaIdade);

    for (i = 0; i < TAM; i++)
    {
        if (idade[i] > 25)
            printf("Temos pessoas com mais de 25 anos na pos: [%d]!\n", i + 1);

        if (idade[i] > maiorIdade)
        {
             maiorIdade = idade[i]; 
             pos = i;
        } // end if
    } // end for
    printf("A maior idade digitada foi: %d!\n", maiorIdade);
    printf("Posição da maior idade: [%d]!\n", pos + 1);
    return 0;
} // end main