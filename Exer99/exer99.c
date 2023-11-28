// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 10 - FUNÇÕES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 99: Faça um programa que possua uma função
    chamada Potencia(), que vai receber dois parâmetros
    numéricos (base e expoente) e vai calcular o resultado
    da exponenciação.
    Ex: Potencia(5,2) vai calcular 5² = 25
    Data do programa: 21/11/2023
*/
// --- Protótipo da Função ---
int Potencia(int b, int e);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis --- 
    int base, expoente;
        
    puts("====================================");
    puts("            POTENCIAÇÃO             ");
    puts("====================================");

    printf("Informe o valor da base (b): ");
    scanf("%d", &base);

    printf("Informe o valor do expoente (e): ");
    scanf("%d", &expoente);

    printf("O resultado de %d ^ %d = %d!\n", base, expoente, Potencia(base, expoente));
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
int Potencia(int b, int e)
{
    int pot = 1, i = 0;

    while (i < e)
    {
      pot *= b;
      i++;
    }
    return pot;
} // end Potencia