// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 10 - FUNÇÕES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 95: Refaça o exercício 90, só que agora em forma de função Somador(), que vai receber dois parâmetros e vai retornar o resultado da soma 
    entre eles para o programa principal.
    Data do programa: 19/11/2023
*/
// --- Protótipo da Função ---
int Somador(int a, int b);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num1, num2;

    puts("==================================================");
    puts("            SOMA ENTRE VALORES FUNÇÕES            ");
    puts("==================================================");

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite outro valor: ");
    scanf("%d", &num2);
    
    printf("O resultado de %d + %d = %d!\n", num1, num2, Somador(num1, num2));
    puts("--- FIM DO PROGRAMA ---");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
int Somador(int a, int b)
{
    return a + b; // Retorna a soma dos valores
} // end Somador