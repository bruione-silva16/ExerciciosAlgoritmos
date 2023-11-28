// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 06 – REPETIÇÃO COM FAÇA ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 61: Crie um programa que mostre na tela a seguinte contagem, usando a estrutura “faça enquanto”
    0 3 6 9 12 15 18 21 24 27 30 Acabou!
    Data do programa: 23/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int n = 0;

    do 
    {
        printf("%d ", n);
        n += 3;
    } while(n <= 30);
    printf("Acabou!");

    return 0;
}