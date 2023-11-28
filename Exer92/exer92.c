// --- Bibliotecas Iniciais --
#include <stdio.h>
#include <stdlib.h>
/*
  PASSO 09 - PROCEDIMENTOS
  --- CURSO DE ALGORITMOS ---
  Autor: Phelipe Bruione da Silva
  Exercício 92: Crie uma lógica que leia um número inteiro e passe para um procedimento ParOuImpar() que vai verificar e mostrar na tela se o valor passado 
  como parâmetro é PAR ou ÍMPAR.
  Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void ParOuImpar(int n);
// --- Função Principal ---
int main() 
{
    // --- Declaração das variáveis ---
    int valor;
    
    puts("=========================================");
    puts("        PAR OU ÍMPAR PROCEDIMENTO        ");
    puts("=========================================");

    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    ParOuImpar(valor);
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void ParOuImpar(int n)
{
    int res;
    res = n % 2 == 0 ? printf("O valor %d é PAR!\n", n) : printf("O valor %d é ÍMPAR!\n", n);
} // end ParOuImpar