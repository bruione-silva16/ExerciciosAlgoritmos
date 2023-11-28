// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
  PASSO 09 – PROCEDIMENTOS
  --- CURSO DE ALGORITMOS ---
  Autor: Phelipe Bruione da Silva
  Exercício 86:  Crie um programa que tenha um procedimento  Gerador() que, quando chamado, mostre a mensagem "Olá, Mundo!"
  com algum componente visual (linhas)
  Ex: Ao chamar Gerador() aparece:
  +-------=======------+:
   Olá, Mundo!
  +-------=======------+
  Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void Gerador();
// --- Função Principal ---
int main() 
{
  Gerador(); // Chama a função no main
  
  printf("--- FIM DO PROGRAMA ---\n");
  return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador()
{
  puts("+-------=======------+");
  puts(" Olá, Mundo!");
  puts("+-------=======------+");
}