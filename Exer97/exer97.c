// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 10 - FUNÇÕES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 97: Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma adaptação que vai receber TRÊS números como parâmetro e 
    vai retornar qual foi o maior entre eles.
    Data do programa: 19/11/2023
*/
// --- Protótipo da Função ---
int Maior(int a, int b, int c);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int pri_valor, seg_valor, ter_valor;

    puts("==========================================");
    puts("            MAIOR VALOR FUNÇÃO            ");
    puts("==========================================");

    printf("Digite o primeiro valor: ");
    scanf("%d", &pri_valor);

    printf("Digite o segundo valor: ");
    scanf("%d", &seg_valor);

    printf("Digite o terceiro valor: ");
    scanf("%d", &ter_valor);

    printf("O maior valor digitado é %d!\n", Maior(pri_valor, seg_valor, ter_valor));

    puts("--- FIM DO PROGRAMA ---");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
int Maior(int a, int b, int c)
{
    int maior;
    if (a >= b && a >= c)
        maior = a;
    else if (b >= a && b >= c)
        maior = b;
    else if (c >= a && c >= b)
        maior = c;
    return maior;
} // end Maior