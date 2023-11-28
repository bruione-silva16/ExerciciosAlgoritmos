// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 05 – ENQUANTO COM FLAG
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 57: Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. No final, mostre o total de salários pagos aos homens e o total 
    pago às mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não sempre que ler os dados de um funcionário. 
    Data do programa: 22/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char sexo, res;
    int i = 0;
    float sal, totSalMulher = 0.0, totSalHomem = 0.0;

    puts("========== SALÁRIOS DOS FUNCIONÁRIOS ==========");

    do
    {
        i++;
        printf("Sexo %d: [M/F]", i);
        scanf(" %c", &sexo);

        printf("Salário: R$");
        scanf("%f", &sal);

        if (sexo == 'f')
            totSalMulher += sal;

        if (sexo == 'm')
            totSalHomem += sal;

        puts("Deseja continuar (s) | (n)");
        printf(">>> ");
        scanf(" %c", &res);
        putchar('\n');
    } while (res != 'n');
    puts("=========================================");
    printf("Total dos salários das mulheres: %.2f!\n", totSalMulher);
    printf("Total dos salários dos homens: %.2f!\n", totSalHomem);

    puts("--- FINALIZANDO O PROGRAMA ---");
    return 0;
} // end main