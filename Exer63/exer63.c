// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 06 – REPETIÇÃO COM FAÇA ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 63: Crie um programa usando a estrutura “faça enquanto” que leia vários números.
    A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na
    tela:
    a) O somatório entre todos os valores
    b) Qual foi o menor valor digitado
    c) A média entre todos os valores
    d) Quantos valores são pares
    Data do programa: 23/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    int num, soma, menorValor, i = 1, totPar = 0;
    float media;

    puts("========== VALORES NÚMERICOS ==========");
    do
    {       
        printf("Informe o %dº valor: ", i);
        scanf("%d", &num);

        if (i == 1)
            menorValor = num;

        soma += num;
        media = soma / i;
        i++;

        if (num < menorValor)
            menorValor = num;

        if (num % 2 == 0)
            totPar++;

        printf("Deseja continuar? (s) | (n) ");
        scanf(" %c", &res);
        putchar('\n');
    } while (res != 'n');
    printf("A soma dos valores é: %d!\n", soma);
    printf("O menor valor digitado foi: %d!\n", menorValor);
    printf("A média dos valores foi: %.2f!\n", media);
    printf("Total de valores pares é: %d!\n", totPar);
    return 0;
} // end main