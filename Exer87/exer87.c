// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
  PASSO 09 - PROCEDIMENTOS
  --- CURSO DE ALGORITMOS ---
  Autor: Phelipe Bruione da Silva
  Exercício 87: Crie um programa que melhore o procedimento Gerador() da questão anterior para que mostre uma mensagem personalizada, passada como parâmetro.
  Ex: Ao chamar Gerador("Aprendendo Portugol") aparece:
  +-------=======------+
   Aprendendo Portugol
  +-------=======------+
  Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void Gerador();
// --- Função Principal ---
int main(void) 
{
    Gerador(); // Chama a função no main
    
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador()
{
  puts("++-------=======------++");
  puts(" Aprendendo Linguagem C ");
  puts("++-------=======------++");
}