// --- Biblioteca Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 54: Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando no final:
    a) Qual foi a média de altura do grupo
    b) Quantas pessoas pesam mais de 90Kg
    c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
    d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg.
    Data do programa: 14/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---     
    int i, totMaior90 = 0, totMenor160e50 = 0, totMaior190e100 = 0;
    float peso, alt, somaAlt = 0.0, mediaAlt;

    puts("========== MEDINDO ALTURA DA GALERA ==========");

    while(i < 7)
    {
        i++;
        printf("%dº altura (m): ", i);
        scanf("%f", &alt);
    
        printf("%dº peso (kg): ", i);
        scanf("%f", &peso);
        
        putchar('\n');

        if (peso > 90)
            totMaior90++;
        
        if (peso < 50 && alt < 1.60)
            totMenor160e50++;
        
        if (peso > 90 && alt > 1.90)
            totMaior190e100++;

        somaAlt += alt;
        mediaAlt = somaAlt / i;
    }
    puts("==================================================");
    printf("A média de altura do grupo foi %.2f!\n", mediaAlt);
    printf("Pessoas com mais de 90Kg: %d\n", totMaior90);
    printf("Total de pessoas com menos de 1.60m e 50kg: %d!\n", totMenor160e50);
    printf("Total de pessoas com mais de 1.90m e 100kg: %d!\n", totMaior190e100);

    return 0;
} // end main