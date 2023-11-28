// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- Curso de Algoritmos ---
    Autor: Phelipe Bruione da Silva
    Exercício 42: Faça um algoritmo que pergunte ao usuário um número inteiro e positivo qualquer e mostre uma contagem até esse valor:
    Ex: Digite um valor: 35
    Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!
    Data do programa: 05/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---   
    int num, cont = 0;

    puts("========== CONTAGEM ==========");

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("Contagem: ");
    while (cont < num)
    {    
        cont++;
        printf("%d ", cont);
    }
    printf("Acabou!\n");
  
  
    return 0;
} // end main