// --- Bibliotecas Iniciais --- 
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 15: Crie um programa que leia o número de dias trabalhados em um mês e mostre o
    salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25
    por hora trabalhada. 
    Data do programa: 26/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int dias_trab;
    float salario;

    puts("-------- SALARIO DO FUNCIONARIO BABACA --------");

    printf("Quantos dias você trabalhou? ");
    scanf("%d", &dias_trab);

    salario = (25 * 8) * dias_trab;
    printf("Seu salariu é de R$%.1f!\n", salario);

    return 0;
} // end main