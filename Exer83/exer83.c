// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 83: [DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números aleatórios (entre 0 e 99) gerados pelo computador. 
    Logo em seguida, mostre os números gerados e depois coloque o vetor em ordem crescente, mostrando no final os valores ordenados.
    Data do programa: 13/11/2023
*/
#define TAM 20
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], i, j, aux;

    puts("=====================================================");
    puts("            GERADOR DE VETORES ALEATÓRIOS            ");
    puts("=====================================================");

    srand(time(NULL));

    // --- Geração dos números aleatórios entre 0-99 ---
    for (i = 0; i < TAM; i++)
        vet[i] = rand() % 99 + 1;
       
    // --- Estrutura para a ordenação dos números aleatórios gerados ---
    for (i = 0; i < TAM - 1; i++)
    {
        for (j = i + 1; j < TAM; j++)
        {
             if (vet[i] > vet[j])
             {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
        
    // --- Imprimindo os números ordenados ---
    for (i = 0; i < TAM; i++)
        printf("Vet[%d] = %d!\n", i + 1, vet[i]);
        
    return 0;
} // end main