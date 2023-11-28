// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 10 - FUNÇÕES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 100:  Melhore o exercício 96, criando além da 
    função Media() uma outra função chamada Situacao(), que vai
    retornar para o programa principal se o aluno está
    APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai
    receber como parâmetro o resultado retornado pela função
    Media().
    Data do programa: 21/11/2023
*/
// --- Protótipo da Funções ---
float Media(float n1, float n2);
char *Situacao(float med);
// --- Função Principal ---
int main() 
{
    // --- Declaração das variáveis --- 
    float nota1, nota2;
    
    puts("============================================");
    puts("            ALUNO - MEDIA FINAL             ");
    puts("============================================");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("- A média final do aluno é: %.2f!\n", Media(nota1, nota2));
    printf("- ALUNO %s\n", Situacao(Media(nota1, nota2)));
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Funções ---
float Media(float n1, float n2)
{
    return (n1 + n2) / 2;
} // end Media

char *Situacao(float med)
{
    if (med < 5)
        return "REPROVADO!";
    else if (med >= 5 && med < 7)
        return "EM RECUPERAÇÃO";
    else  
        return "APROVADO!";
} // end Situacao
