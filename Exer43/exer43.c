// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- Curso de Algoritmos ---
    Autor: Phelipe Bruione da Silva
    Exercício 43: Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1,
    marcando os números que forem divisíveis por 4, exatamente como mostrado abaixo:
    30 29 [28] 27 26 25 [24] 23 22 21 [20] 19 18 17 [16]...
    Data do programa: 05/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---   
    int n = 30;

    puts("========== VALORES DIVISIVEIS POR 4 ==========");

    while (n > 0)
    {
        if (n % 4 == 0)
            printf("[%d] ", n);
        else
            printf("%d ", n);
        n--;
    }
    putchar('\n');

    return 0;
} // end main