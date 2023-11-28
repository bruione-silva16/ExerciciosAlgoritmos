// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 37: Uma empresa precisa reajustar o salário dos seus funcionários, dando um aumento de acordo com alguns fatores. Faça um programa que leia 
    o salário atual, o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa.
    No final, mostre o seu novo salário, baseado na tabela a seguir:
    - Mulheres
    - menos de 15 anos de empresa: +5%
    - de 15 até 20 anos de empresa: +12%
    - mais de 20 anos de empresa: +23%
    - Homens
    - menos de 20 anos de empresa: +3%
    - de 20 até 30 anos de empresa: +13%
    - mais de 30 anos de empresa: +25%
    Data do programa: 03/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char genero;
    int anos_empresa;
    float salario, reajusteSalarial;

    puts("========== REAJUSTE SALÁRIAL DA MICROSOFT ==========");

    printf("Salario do funcionário: R$");
    scanf("%f", &salario);

    printf("QUal é o seu gênero? [M/F]");
    scanf(" %c", &genero);

    printf("Quantos anos você trabalha na empresa: ");
    scanf("%d", &anos_empresa);

    if (genero == 'f' && anos_empresa < 15)
    {
        reajusteSalarial = salario * 1.05;
        printf("Com 5%% de aumento, seu novo salário é R$%.2f!\n", reajusteSalarial);
    } else if (genero == 'f' && anos_empresa >= 15 && anos_empresa < 20)
    {
        reajusteSalarial = salario * 1.12;
        printf("Com 12%% de aumento, seu novo salário é R$%.2f!\n", reajusteSalarial);
    } else if (genero == 'f' && anos_empresa > 20)
    {
        reajusteSalarial = salario * 1.23;
        printf("Com 23%% de aumento, seu novo salário é R$%.2f!\n", reajusteSalarial);
    } else if (genero == 'm' && anos_empresa < 20)
    {
        reajusteSalarial = salario * 1.03;
        printf("Com 3%% de aumento, seu novo salário é R$%.2f!\n", reajusteSalarial);
    } else if (genero == 'm' && anos_empresa >= 20 && anos_empresa < 30)
    {
        reajusteSalarial = salario * 1.13;
        printf("Com 13%% de aumento, seu novo salário é R$%.2f!\n", reajusteSalarial);
    } else {
        reajusteSalarial = salario * 1.25;
        printf("Com 25%% de aumento, seu novo salário é R$%.2f!\n", reajusteSalarial);
    }

    return 0;
} // end main