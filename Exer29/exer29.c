// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 29: Desenvolva um programa que leia o nome de um funcionário, seu salário, quantos anos ele trabalha na empresa e mostre seu novo salário, 
    reajustado de acordo com a tabela a seguir:
    - Até 3 anos de empresa: aumento de 3%
    - entre 3 e 10 anos: aumento de 12.5%
    - 10 anos ou mais: aumento de 20%
    Data do programa: 01/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome_func[50];
    int anos_trab;
    float salario_func, aumentoSalarial;

    puts("========== REAJUSTE SALARIAL ==========");

    printf("Nome do funcionário: ");
    gets(nome_func);

    printf("Salário de %s: R$", nome_func);
    scanf("%f", &salario_func);

    printf("%s, quantos anos você trabalha aqui? ", nome_func);
    scanf("%d", &anos_trab);

    if (anos_trab < 3)
    {
        aumentoSalarial = salario_func * 1.03;
        printf("NOVO SALÁRIO DE %s: R$%.2f!\n", nome_func, aumentoSalarial);
    } else if (anos_trab >= 3 && anos_trab < 10)
    {
        aumentoSalarial = salario_func * 1.125;
        printf("NOVO SALÁRIO DE %s: R$%.2f!\n", nome_func, aumentoSalarial);
    } else 
    {
        aumentoSalarial = salario_func * 1.20;
        printf("NOVO SALÁRIO DE %s: R$%.2f!\n", nome_func, aumentoSalarial);
    }

    return 0;
} // end main