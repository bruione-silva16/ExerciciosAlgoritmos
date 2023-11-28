// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 18: Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela e depois mostre se ela pode ou não votar.
    Data do programa: 27/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int ano_nasc, idade;

    puts("========== ELEIÇÕES DEPUTADOS ==========");
    
    printf("Ano de nascimento (yyyy): ");
    scanf("%d", &ano_nasc);

    idade = 2023 - ano_nasc;
    printf("Idade: %d anos!\n", idade);

    if (idade < 16)
        puts("VOCÊ NÃO PODE VOTAR!");
    else if (idade >= 16 && idade < 18)
        puts("VOTO OPCIONAL!");
    else
        puts("VOTO OBRIGATÓRIO!");

    return 0;
} // end main