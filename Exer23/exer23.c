// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 23: Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos para todos, mas especialmente para mulheres. Faça um programa que 
    leia nome, sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo que:
    - Homens ganham 5% de desconto
    - Mulheres ganham 13% de desconto
    Data do programa: 28/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50], sexo;
    float valor_de_compra, desconto;

    puts("========== DIAS DAS MULHERES: 5%% DE DESCONTO ==========");

    printf("Digite o nome: ");
    gets(nome);

    printf("Sexo: [M/F] ");
    scanf(" %c", &sexo);

    printf("%s, qual é o valor do produto? R$", nome);
    scanf("%f", &valor_de_compra);

    if (sexo == 'm' || sexo == 'M')
    {
        desconto = valor_de_compra - (valor_de_compra * 0.05);
        printf("%s, com desconto de 5%% o preço do produto é: R$%.2f!\n", nome, desconto);
    } else if (sexo == 'f' || sexo == 'F')
    {
        desconto = valor_de_compra - (valor_de_compra * 0.13);
        printf("%s, com desconto de 13%% o preço do produto é: R$%.2f!\n", nome, desconto);
    }

    return 0;
} // end main