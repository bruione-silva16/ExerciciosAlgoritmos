// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS --- 
    Autor: Phelipe Bruione da Silva
    Exercício 03: Crie um programa que leia o nome e o salário de um funcionário, mostrando no
    final uma mensagem.
    Ex:
    Nome do Funcionário: Maria do Carmo
    Salário: 1850,45
    O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho. 
    Data do programa: 24/09/2023 
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50];
    float salario;

    puts("-------- INFORMACOES COLABORADOR --------");

    printf("Nome do Funcionário: ");
    gets(nome);

    printf("Salário: R$");
    scanf("%f", &salario);

    printf("O funcionário %s tem um salário de R$%.2f em Junho.\n", nome, salario);
    return 0;
} // end main