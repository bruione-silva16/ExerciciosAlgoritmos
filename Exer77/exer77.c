// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 77: Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No final, mostre uma listagem com todos os nomes informados, 
    na ordem inversa daquela em que eles foram informados.
    Data do programa: 09/11/2023
*/
#define TAM 7
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char *nome[50];
    int i;
    
    puts("====================================");
    puts("          GERADOR DE NOMES          ");
    puts("====================================");

    for (i = 1; i <= TAM; i++)
    {
        printf("Digite o %dº nome: ", i);
        scanf("%s", &nome[i]);
    }
    
    puts("====================================");
    puts(" NOMES INVERSOS");
    for (i = TAM; i >= 1; i--)
        printf("- %s\n", &nome[i]);

    return 0;
} // end main