
// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 08 – VETORES
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 82: Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em um vetor. No final, mostre:
    a) Qual é a média da turma
    b) Quantos alunos estão acima da média da turma
    c) Qual foi a maior nota digitada
    d) Em que posições a maior nota aparece,
    Data do programa: 13/11/2023
*/
#define TAM 10
// --- Função Principal ---
int main()
{
    // --- declaração das variáveis ---
    int i, totAlunoAcimaDaMedia = 0, posMaiorNota = 0;
    float notas[TAM], somaNota = 0.0, mediaNota, maiorNota = 0.0;

    puts("========================================");
    puts("            VETORES DE NOTAS            ");
    puts("========================================");

    for (i = 0; i < TAM; i++)
    {
        printf("ALUNO %d\n", i + 1);
        printf("Digite a %dº nota: ", i + 1);
        scanf("%f", &notas[i]);
        
        somaNota += notas[i];
        mediaNota = somaNota / TAM;

        putchar('\n');
    } // end for

    puts("========================================");
    printf("A média da turma é: %.2f!\n", mediaNota);
    
    for (i = 0; i < TAM; i++)
    {
        if (notas[i] > mediaNota)
            totAlunoAcimaDaMedia++;
        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
            posMaiorNota = i + 1;
        } // end if
    } // end for

    printf("Total de alunos acima da média: %d!\n", totAlunoAcimaDaMedia);
    printf("A maior nota da turma foi: %.2f!\n", maiorNota);
    printf("A posição da maior nota: [%d]!\n", posMaiorNota);
    return 0;
} // end main