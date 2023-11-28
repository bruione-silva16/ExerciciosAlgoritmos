// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 05 – ENQUANTO COM FLAG
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 56: Crie um programa que leia vários números pelo teclado e mostre no final o somatório entre eles.
    Obs: O programa será interrompido quando o número 1111 for digitado 
    Data do programa: 20/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int n, i = 0, soma = 0;

    puts("========== SOMATÓRIO DE VALORES ==========");

    do
    {
        i++;
        printf("Digite o %dº numero: ", i);
        scanf("%d", &n);
        soma += n;
    } while(n != 1111);
    printf("A soma dos valores é: %d!\n", soma - 1111);
    return 0;
} // end main