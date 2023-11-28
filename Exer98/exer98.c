// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 10 - FUNÇÕES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 98:  Crie um programa que tenha uma função 
    SuperSomador(), que vai receber dois números como parâmetro 
    e depois vai retornar a soma de todos os valores no   
    intervalo entre os valores recebidos.
    Ex:
    SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai 
    retornar 21
    SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai 
    retornar 85
    Data do programa: 21/11/2023
*/
// --- Protótipo da Função ---
int SuperSomador(int n1, int n2);
// --- Função Principal ---
int main() 
{
    // --- Declaração das variáveis 
    int valor1, valor2;
    
    puts("============================================");
    puts("            SOMADOR DE INTERVALO            ");
    puts("============================================");

    printf("Informe um valor: ");
    scanf("%d", &valor1);

    printf("Informe outro valor: ");
    scanf("%d", &valor2);
    
    printf("O soma do intervalo (%d,%d) é = %d!\n", valor1, valor2, SuperSomador(valor1, valor2));  
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
int SuperSomador(int n1, int n2)
{
    int soma = 0;

    for (int i = n1; i <= n2; i++)
        soma += i;

  return soma;
} // end SuperSomador