// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 – REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 39: Faça um algoritmo que mostre na tela a seguinte contagem:
    10 9 8 7 6 5 4 3 Acabou!
    Data do programa: 03/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int n = 10;

    while (n > 2)
    {
        printf("%d ", n);
        n--;
    }
    printf("Acabou!\n");
    
    return 0;
} // end main