// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*  
    PASSO 05 – ENQUANTO COM FLAG
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 59: Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai perguntar se o usuário quer continuar ou não a cada pessoa. 
    No final, mostre:
    a) qual é a maior idade lida
    b) quantos homens foram cadastrados
    c) qual é a idade da mulher mais jovem
    d) qual é a média de idade entre os homens 
    Data do programa: 22/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res, sexo;
    int idade, maiorIdade = 0, i = 0, totHomensCad = 0, menorIdadeMulher = 0, somaIdadeHomens = 0;
    float mediaIdadeHomens;

    puts("=========== CADASTRO DE PESSOAS ===========");

    do
    {   
        printf("Sexo %d: [M/F] ", i);
        scanf(" %c", &sexo);
        
        printf("Idade %d: ", i);
        scanf("%d", &idade);
        if (i == 0)
            menorIdadeMulher = idade;
        
        i++;
        if (idade > maiorIdade)
            maiorIdade = idade;

        if (sexo == 'm')
        {
            somaIdadeHomens += idade;
            totHomensCad++;
            mediaIdadeHomens = somaIdadeHomens / totHomensCad;
        }
            
        if (idade < menorIdadeMulher && sexo == 'f')
            menorIdadeMulher = idade;

        printf("Deseja continuar (s) | (n) >>> ");
        scanf(" %c", &res);
        putchar('\n');
    } while (res != 'n');
    puts("=========================================");
    printf("A maior idade lida: %d!\n", maiorIdade);
    printf("Total de homens cadastrados: %d!\n", totHomensCad);
    printf("A idade mais jovem da mulher é: %d!\n", menorIdadeMulher);
    printf("A média de idade dos homens: %.2f!\n", mediaIdadeHomens);

    return 0;
} // end maind!