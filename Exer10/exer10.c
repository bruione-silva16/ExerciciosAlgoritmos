// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 10: Faça um algoritmo que leia a largura e altura de uma parede, calcule e
    mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
    sabendo que cada litro de tinta pinta uma área de 2metros quadrados.
    Data do programa: 25/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int alt, larg;

    puts("-------- TINTAS SUVINIL --------");
    
    printf("Valor da largura: ");
    scanf("%d", &larg);

    printf("Valor da altura: ");
    scanf("%d", &alt);

    printf("Area: %d m²!\n", (larg * alt));
    printf("Quantidade de tinta necessária para pintar: %dL!\n", (larg * alt) / 2);

} // end main;