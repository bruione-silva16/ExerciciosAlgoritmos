// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    PASSO 05 – ENQUANTO COM FLAG
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 60: Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas.
    O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
    a) O nome da pessoa mais velha
    b) O nome da mulher mais jovem
    c) A média de idade do grupo
    d) Quantos homens tem mais de 30 anos
    e) Quantas mulheres tem menos de 18 anos 
    Data do programa: 22/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char sexo, res;
    char nome[50], pessoaMaisJovem[50], pessoaMaisVelha[50];
    int i = 1, idade, somaIdade = 0, menorIdade, maiorIdade, totHomensMais30 = 0, totMulheresMenos18 = 0;
    float mediaIdade;

    puts("============ GRUPO ZE DA MANGA ============");

    do
    {
        printf("PESSOA %d\n", i);
        printf("Nome: ");
        scanf(" %s", &nome);
        
        printf("Idade de %s: ", nome);
        scanf("%d", &idade);

        printf("sexo: [M/F] ");
        scanf(" %c", &sexo);

        if (i == 1)
        {
            menorIdade = idade;
            strcpy(pessoaMaisJovem, nome);
        }

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
            strcpy(pessoaMaisVelha, nome);
        }

        if (idade < menorIdade && sexo == 'f')
        {
            menorIdade = idade;
            strcpy(pessoaMaisJovem, nome);
        }
        somaIdade += idade;
        mediaIdade = somaIdade / i;
        i++;

        if (sexo == 'm' && idade > 30)
            totHomensMais30++;

        if (sexo == 'f' && idade < 18)
            totMulheresMenos18++;

        printf("Deseja continuar (s) | (n) ");
        scanf(" %c", &res);
        putchar('\n');
    } while (res != 'n');
    printf("A pessoa mais velha é: %s!\n", pessoaMaisVelha);
    printf("A mulher mais jovem é: %s!\n", pessoaMaisJovem);
    printf("A média do idade do grupo: %.2f!\n", mediaIdade);
    printf("Total de homens mais de 30 anos: %d!\n", totHomensMais30);
    printf("Total de mulheres menos de 18 anos: %d!\n", totMulheresMenos18);

    return 0;
} // end main