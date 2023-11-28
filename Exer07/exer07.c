// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 07: Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
    sua terça parte.
    Ex:
    Digite um número: 3.5
    O dobro de 3.5 é 7.0
    A terça parte de 3.5 é 1.16666
    Data do programa: 25/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float val;

    puts("-------- DOBRO E TERCA PARTE --------");

    printf("Digite um numero: ");
    scanf("%f", &val);

    printf("O dobro de %.1f é %.1f!\n", val, val * 2);
    printf("A terça parte de %.1f é %.1f!\n", val, val / 3);

    return 0;
} // end main