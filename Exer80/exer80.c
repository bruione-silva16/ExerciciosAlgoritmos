// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    PASSO 08 – VETORES
    ---- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercçio 80: Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 15 sorteados pelo computador. Depois disso, peça para o usuário 
    digitar um número (chave) e seu programa deve mostrar em que posições essa chave foi encontrada. Mostre também quantas vezes a chave foi sorteada.
    Data do programa: 12/11/2023
*/
#define TAM 30
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], i, ch, totCh = 0;

    puts("==========================================");
    puts("            SORTEIO DE VETORES            ");
    puts("==========================================");

    srand(time(NULL)); // Gerar a semente para os valores aleatórios

    printf("Insira o valor da chave: ");
    scanf("%d", &ch);

    if (ch < 0 || ch > 15)
        puts("CHAVE INVÁLIDA!");
    // --- Lendo os valores aleatórios de 1-15 e armazenando no vetor ---
    for (i = 0; i < TAM; i++)
    {
        vet[i] = rand() % 15;
        printf("Vet[%d] = %d!\n", i  + 1, vet[i]);
    }
      
    puts("==========================================");
    for (i = 0; i < TAM; i++)
    {
        if (vet[i] == ch)
        {
            totCh++;
            printf("A chave %d foi encotrada na pos [%d]!\n", ch, i + 1);
        }
    }    
    printf("A chave foi encontrada %d vezes!\n", totCh);

    return 0;
} // end main