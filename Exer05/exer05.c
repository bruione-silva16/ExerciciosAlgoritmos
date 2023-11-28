// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS --- 
    Autor: Phelipe Bruione da Silva
    Exercício 05: Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
    na tela a sua média na disciplina.
    Ex:
    Nota 1: 4.5
    Nota 2: 8.5
    A média entre 4.5 e 8.5 é igual a 6.5
    Data do programa: 24/09/2023 
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float nota1, nota2, media;

    puts("-------- MEDIA FINAL --------");

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media entre %.1f e %.1f é igual a %.1f\n", nota1, nota2, media);
} // end main