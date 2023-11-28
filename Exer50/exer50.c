// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 50: Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e mostre na tela:
    a) Quais foram os números sorteados
    b) Quantos números estão acima de 5
    c) Quantos números são divisíveis por 3
    Data do programa: 09/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int i = 0, totMaior5 = 0, totDiv3 = 0, num_sort;
    
     srand(time(NULL));

    while (i < 20)
    {
        num_sort = rand() % 10;
        i++;

        if (num_sort > 5)
            totMaior5++;
        
        if (num_sort % 3 == 0)
            totDiv3++;

        printf("Número %d° sorteado: %d!\n", i, num_sort);
    }   
    printf("Total de números maior que 5: %d!\n", totMaior5);
    printf("Total de números divisíveis por 3: %d!\n", totDiv3);
    return 0;
} // end main
