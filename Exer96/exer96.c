// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 10 - FUNÇÕES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 96: Crie um programa que tenha uma função Media(), que vai receber as 2 notas de um aluno e retornar a sua média para o programa principal.
    Data do programa: 19/11/2023
*/
// --- Protótipo da Função ---
float Media(float n1, float n2);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2;

    puts("=====================================");
    puts("            MÉDIA FUNÇÕES            ");
    puts("=====================================");

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("A média entre %.2f e %.2f é = %.2f!\n", nota1, nota2, Media(nota1, nota2));
    puts("--- FIM DO PROGRAMA ---");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
float Media(float n1, float n2)
{
    return (n1 + n2) / 2;
} // end Media