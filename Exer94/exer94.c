// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 09 - PROCEDIMENTOS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 94: [DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado Fibonacci() que recebe um único valor inteiro como parâmetro, 
    indicando quantos termos da sequência serão mostrados na tela. O seu procedimento deve receber esse valor e mostrar a quantidade de elementos solicitados.
    Obs: Use os exercícios 70 e 75 para te ajudar na solução
    Ex:
    Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
    Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM
    Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void Fibonnaci(int n);
// --- Função Principal ---
int main(void) {
    // --- Declaração das variáveis ---
    int termo;
    
    puts("======================================");
    puts("        FIBONNACI PROCEDIMENTO        ");
    puts("======================================");

    printf("Quantos termos você deseja ver: ");
    scanf("%d", &termo);

    Fibonnaci(termo);
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Fibonnaci(int n)
{
    int i, t1 = 1, t2 = 1, t3;

    printf("%d >> %d >> ", t1, t2);
    for (i = 3; i <= n; i++)
    {
        t3 = t2 + t1;
        printf("%d >> ", t3);
        t1 = t2;
        t2 = t3;
    } // end for
    puts("FIM");
} // end fibonacci