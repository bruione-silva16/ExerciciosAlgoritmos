// ---Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 53: Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
    a) Quantos homens foram cadastrados
    b) Quantas mulheres foram cadastradas
    c) A média de idade do grupo
    d) A média de idade dos homens
    e) Quantas mulheres tem mais de 20 anos
    Data do programa: 13/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char sexo;
    int i = 0, idade, totHomens = 0, totMulheres = 0, somaIdadeGrupo = 0, somaIdadeHomens = 0,  mulheresMaior20 = 0;
    float mediaIdadeGrupo = 0.0, mediaIdadeHomens = 0.0;

    while(i < 5)
    {
        i++;
        printf("Sexo [M/F] ");
        scanf(" %c", &sexo);
        
        printf("%d idade: ", i);
        scanf("%d", &idade);
        putchar('\n');

        somaIdadeGrupo += idade;
        mediaIdadeGrupo = somaIdadeGrupo / i;

        if (sexo == 'm')
        {
            totHomens++;
            somaIdadeHomens += idade;
            mediaIdadeHomens = somaIdadeHomens / totHomens;
        }

        if (sexo == 'f')
            totMulheres++;
        
        if (sexo == 'f' && idade > 20)
            mulheresMaior20++;
    }
    printf("Total de homens cadastrados: %d!\n", totHomens);
    printf("Total de mulheres cadastradas: %d!\n", totMulheres);
    printf("A média do grupo: %.2F!\n", mediaIdadeGrupo);
    printf("A média de idade dos homens: %.2f!\n", mediaIdadeHomens);
    printf("Total de mulheres acima de 20 anos: %d!\n", mulheresMaior20);
    
    return 0;
} /// end main