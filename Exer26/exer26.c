// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 26: Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando na tela uma das mensagens abaixo:
    - O primeiro valor é o maior
    - O segundo valor é o maior
    - Não existe valor maior, os dois são iguais
    Data do programa: 01/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num1, num2;

    puts("========== COMPARAÇÃO ENTRE VALORES ==========");

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite outro valor: ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("%d É MAIOR QUE %d!\n", num1, num2);
    else if (num1 < num2)
        printf("%d É MAIOR QUE %d!\n", num2, num1);
    else
        puts("OS VALORES SÃO IGUAIS!");

    return 0;
} // end main