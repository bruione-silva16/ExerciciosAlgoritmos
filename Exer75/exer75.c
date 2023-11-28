// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 75: Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo diretamente) um vetor numérico com 15 posições 
    com os primeiros elementos da sequência de Fibonacci:
    1   1   2   3   5   8  13  21  34  55   89  144  233  377  610  987
    0   1   2   3   4   5   6   7   8   9   10   11   12   13   14   15
    Data do programa: 29/10/2023
*/
#define FIB 15
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int fibonacci[FIB], i, t1 = 1, t2 = 1;

    puts("======================================================");
    puts("            SEQUÊNCIA DE FIBONACCI VETORES            ");
    puts("======================================================");

    printf(" %d  %d ", t1, t2);

    for (i = 0; i < 14; i++)
    {
        fibonacci[i] = t1 + t2;
        printf(" %d ", fibonacci[i]);
        t1 = t2;
        t2 = fibonacci[i];
    }
    putchar('\n');

    for (i = 0; i <= FIB; i++)
        printf(" %d ", i);
    putchar('\n');

    return 0;
} // edn main