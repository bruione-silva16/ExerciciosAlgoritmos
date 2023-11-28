// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 35: Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O aluguel de um carro custa R$90 por dia para carro popular e R$150 por 
    dia para carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa que leia o tipo de carro alugado (popular ou luxo), quantos dias 
    de aluguel e quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a tabela a seguir:
    - Carros populares (aluguel de R$90 por dia)
    - Até 100Km percorridos: R$0,20 por Km
    - Acima de 100Km percorridos: R$0,10 por Km
    - Carros de luxo (aluguel de R$150 por dia)
    - Até 200Km percorridos: R$0,30 por Km
    - Acima de 200Km percorridos: R$0,25 por Km
    Data do programa: 02/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char tipo_carro;
    int dias_alugados, quant_km;
    float carro_popular, carro_luxo;

    puts("========== LOCAÇÃO DE CARROS ==========");

    printf("Qual foi o tipo de carro alugado? [P/L] ");
    scanf("%c", &tipo_carro);

    printf("Quantos dias o carro foi alugado? ");
    scanf("%d", &dias_alugados);

    printf("Quantos KM foram percorridos? ");
    scanf("%d", &quant_km);

    if (quant_km <= 100 && tipo_carro == 'p')
    {
        carro_popular = (90 * dias_alugados) + (quant_km * 0.20);
        printf("Preço total da locação (carro popular): R$%.2f!\n", carro_popular);
    } else if (quant_km > 100 && tipo_carro == 'p')
    {
        carro_popular =(90 * dias_alugados) + (quant_km * 0.10);
        printf("Preço total da locação (carro popular): R$%.2f!\n", carro_popular);
    } else if (quant_km <= 200 && tipo_carro == 'l')
    {
        carro_luxo = (150 * dias_alugados) + (quant_km * 0.30);
        printf("Preço total da locação (carro luxo): R$%.2f!\n", carro_luxo);
    } else if (quant_km > 200 && tipo_carro == 'l')
    {
        carro_luxo = (150 * dias_alugados) + (quant_km * 0.25);
        printf("Preço total da locação (carro luxo): %.2f!\n", carro_luxo);
    }
    return 0;
} // end main