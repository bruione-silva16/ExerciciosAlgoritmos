// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS --- 
    Autor: Phelipe Bruione da Silva
    Exercício 02: Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-
    vindas para ela:
    Ex:
    Qual é o seu nome? João da Silva
    Olá João da Silva, é um prazer te conhecer!
    Data do programa: 24/09/2023 
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50];

    puts("-------- MOSTRANDO O NOME --------");

    printf("Qual é o seu nome? ");
    gets(nome);
    
    printf("Ola %s, é um prazer te conhecer!\n", nome);
    return 0;
} // end main