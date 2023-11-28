// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 07 – REPETIÇÃO COM PARA
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 68: Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura “para”. No final, mostre na tela:
    a) Quantas mulheres foram cadastradas
    b) Quantos homens pesam mais de 100Kg
    c) A média de peso entre as mulheres
    d) O maior peso entre os homens
    Data do programa: 24/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char sexo;
    int i, totMulheresCad = 0, somaPesoMulheres, totHomensMais100Kg = 0;
    float peso, mediaPesoMulheres, maiorPesoHomem;

    puts("============ CONSULTORIO DOUTOR NOW ============");

    for (i = 1; i <= 8; i++)
    {
        printf("Sexo %d: [M/F] ", i);
        scanf(" %c", &sexo);

        printf("Peso %d (Kg): ", i);
        scanf("%f", &peso);
        putchar('\n');
        
        if (sexo == 'f')
        {
            totMulheresCad++;
            somaPesoMulheres += peso;
            mediaPesoMulheres = somaPesoMulheres / totMulheresCad;
        }
            
        if (sexo == 'm' && peso > 100)
            totHomensMais100Kg++;
        
        if (sexo == 'm' && peso > maiorPesoHomem)
            maiorPesoHomem = peso;
    } // end for
    puts("======================================================");
    printf("Total de mulheres cadastradas: %d!\n", totMulheresCad);
    printf("Total de homens coma mais de 100KG: %d!\n", totHomensMais100Kg);
    printf("A média de peso das mulheres foi: %.2f!\n", mediaPesoMulheres);
    printf("O maior peso dos homens foi: %.2f!\n", maiorPesoHomem);

    return 0;
} // end main