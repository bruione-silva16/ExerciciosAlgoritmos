// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 07 – REPETIÇÃO COM PARA
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 67: Faça um programa usando a estrutura “para” que leia um número inteiro positivo e mostre na tela uma contagem de 0 até o valor digitado:
    Ex: Digite um valor: 9
    Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM!
    Data do programa: 24/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i, num;

    puts("============ ESTRUTURA PARA ============");

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("Contagem: ");
    for (i = 0; i <= num; i++)
        printf("%d, ", i);
    printf("FIM!\n");

    return 0;
} // end main