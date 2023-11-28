// ---Bilbiotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 09 - PROCEDIMENTOS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 93:  Faça um programa que tenha um procedimento chamado Contador() que recebe três valores como parâmetro: o início, o fim e o incremento 
    de uma contagem. O programa principal deve solicitar a digitação desses valores e passá- los ao procedimento, que vai mostrar a contagem na tela.
    Ex: Para os valores de início (4), fim (20) e incremento(3) teremos Contador(4, 20, 3) vai mostrar na tela 4 >> 7 >> 10 >> 13 >> 16 >> 19 >> FIM
    Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void Contador(int i, int f, int j);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int inicio, fim, incr;

    puts("=====================================");
    puts("        CONTADOR PROCEDIMENTO        ");
    puts("=====================================");

    printf("Início: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    printf("Incremento: ");
    scanf("%d", &incr);

    Contador(inicio, fim, incr);
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Contador(int i, int f, int j) 
{
    // --- Condicional para incremento positivo ---
    while (i <= f)
    {
        if (i <= f)
        {
            printf("%d..", i);
            i += j; 

        } // end if
    } // end while
    
    // --- Condição para incremento negativo ---
    if (i >= f)
    {
        while (i >= f)
        {
        printf("%d..", i);
        i -= j;
        } // end while
    } // end if

    puts(" ACABOU!");
} // end Contador