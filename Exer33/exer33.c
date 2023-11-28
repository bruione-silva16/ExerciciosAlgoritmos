// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 33: Escreva um programa para aprovar ou não o empréstimo bancário para a compra de uma casa. O programa vai perguntar o valor da casa, 
    o salário do comprador e em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que ela não pode exceder 30% do salário ou então o 
    empréstimo será negado.
    Data do programa: 02/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int anos_pagar_casa;
    float valor_casa, salario_comp, prestacaoMensal;

    puts("========== EMPRÉSTIMO BANCÁRIO ==========");

    printf("Qula é o valor da casa? R$");
    scanf("%f", &valor_casa);

    printf("Salário do comprador: R$");
    scanf("%f", &salario_comp);

    printf("Quantos anos a casa será paga? ");
    scanf("%d", &anos_pagar_casa);

    prestacaoMensal = valor_casa / (anos_pagar_casa * 12);
    if (prestacaoMensal > (salario_comp * 0.3))
        puts("EMPRÉSTIMO NEGADO!");
    else 
        printf("Valor da prestação mensal: %.2f\n", prestacaoMensal);


    return 0;
} // end main