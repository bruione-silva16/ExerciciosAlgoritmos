// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 09: Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
    e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
    Data do programa: 25/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float din_real;

    puts("-------- COMPRA DE DOLARES --------");

    printf("Quanto você term na sua carteira? R$");
    scanf("%f", &din_real);

    printf("Voce pode comprar US$%.2f!\n", (din_real / 3.45));

} // end main