// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 28: Faça um programa que leia a largura e o comprimento de um terreno retangular, calculando e mostrando a sua área em m². O programa também
    deve mostrar a classificação desse terreno, de acordo com a lista abaixo:
    - Abaixo de 100m² = TERRENO POPULAR
    - Entre 100m² e 500m² = TERRENO MASTER
    - Acima de 500m² = TERRENO VIP
    Data do programa: 01/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int larg, compr, area;

    puts("========== TERRENO DE GOIÂNIA ==========");

    printf("Valor da largura: ");
    scanf("%d", &larg);

    printf("Valor de comprimento: ");
    scanf("%d", &compr);

    area = larg * compr;
    printf("ÁREA: %dm²!\n", area);

    if (area < 100)
        puts("TERRENO POPULAR!");
    else if (area >= 100 && area < 500)
        puts("TERRENO MASTER!");
    else 
        puts("TERRENO VIP!");

    return 0;
} // end main