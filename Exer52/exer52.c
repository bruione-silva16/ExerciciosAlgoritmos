// ---Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 52: Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
    a) Qual é a média de idade do grupo
    b) Quantas pessoas tem mais de 18 anos
    c) Quantas pessoas tem menos de 5 anos
    d) Qual foi a maior idade lida
    Data do programa: 13/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int idade, i = 0, maiorIdade = 0, somaIdade = 0, totMaior18  = 0, totMenor5 = 0;
    float mediaIdade = 0.0;

    puts("========== GRUPO DOS OTÁRIOS ==========");

    while (i < 10)
    {
        i++;
        printf("%dº idade: ", i);
        scanf("%d", &idade);

        somaIdade += idade;
        mediaIdade = somaIdade / 10;

        if (idade > 18)
            totMaior18++;
        
        if (idade < 5)
            totMenor5++;
        
        if (idade > maiorIdade)
            maiorIdade = idade;
    }
    printf("A média da idade dos grupos é %.2f!\n", mediaIdade);
    printf("Pessoas com mais de 18 anos: %d!\n", totMaior18);
    printf("Pessoas com menos de 5 anos: %d!\n", totMenor5);
    printf("A maior idade lida foi: %d!\n", maiorIdade);

    return 0;
} // end main