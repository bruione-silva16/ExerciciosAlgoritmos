// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 85: Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e guarde esses dados em três vetores. 
    No final, mostre uma listagem contendo apenas os dados das funcionárias mulheres que ganham mais de R$5 mil.
    Data do programa: 15/11/2023
*/
#define DIM 5
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char *nome[70], sexo;
    int i;
    float salario[DIM];

    puts("=============================================");
    puts("            EMPRESA BR CONSULTORIA           ");
    puts("=============================================");

    for (i = 0; i < DIM; i++)
    {
        printf("PESSOA %d\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", &nome[i]);

        printf("Sexo: [M/F] ");
        scanf(" %c", &sexo);

        printf("Salario de %s: R$", &nome[i]);
        scanf("%f", &salario[i]);
        puts("--------------------------------");
    }

    puts("LISTAGEM DAS FUNCIONÁRIAS COM MAIS DE R$5000,00");
    for (i = 0; i < DIM; i++)
    {
        if (sexo == 'f' && salario[i] > 5000.00)
            printf("- %s ---> R$%.2f!\n", &nome[i], salario[i]);
    }

} // end main