// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 06 – REPETIÇÃO COM FAÇA ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 62: Faça um programa usando a estrutura “faça enquanto” que leia a idade de várias pessoas. 
    A cada laço, você deverá perguntar para o usuário se ele quer ou não continuar a digitar dados. No final, quando o usuário decidir parar, mostre na tela:
    a) Quantas idades foram digitadas
    b) Qual é a média entre as idades digitadas
    c) Quantas pessoas tem 21 anos ou mais.
    Data do programa: 23/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    int i = 0, totPessoasMais21 = 0, somaIdade = 0, idade;
    float mediaIdade;

    puts("========== FAMILIA BUSCAPÉ ==========");

    do
    {
        i++;
        printf("Idade %d: ", i);
        scanf("%d", &idade);

        somaIdade += idade;
        mediaIdade = somaIdade / i;

        if (idade >= 21)
            totPessoasMais21++;     

        
        printf("Deseja continuar? (s) | (n) ");
        scanf(" %c", &res);
        putchar('\n');
    } while (res != 'n');
    puts("--- FINALIZANDO O PROGRAMA ---");
    printf("Foram digitadas %d idades!\n", i);
    printf("A média da idade do grupo: %.2f!\n", mediaIdade);
    printf("Pessoas com mais de 21 anos: %d!\n", totPessoasMais21);

    return 0;
} // end main  