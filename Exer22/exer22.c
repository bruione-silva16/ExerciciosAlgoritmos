// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 22: Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua situação em relação ao alistamento militar.
    - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o alistamento.
    - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do alistamento.
    Data do programa: 28/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int ano_nasc, idade;

    puts("========== ALISTAMENTO MILITAR BRASILEIRO ==========");

    printf("Ano de nascimento (yyyy): ");
    scanf("%d", &ano_nasc);

    idade = 2023 - ano_nasc;
    printf("IDADE: %d anos!\n", idade);

    if (idade < 18)
        printf("Anos faltantes do alistamento %d ano(s)!\n", 18 - idade);
    else if (idade == 18)
        puts("ESTE É O SEU ANO DE ALISTAMENTO!");
    else
        printf("Anos passados do alistamento: %d ano(s)!\n", idade - 18);

    return 0;
} // end main