/*
	Name: PassagemParametroGlobal.c
	Author: Daniel Benetti
	Date: 26/08/26 10:22
	Description: Programa para realizar a troca de valores 
				entre variaveis demonstrando o conceito de
				passagem de parametros tanto por CÓPIA quanto por REFÊRENCIA 
*/

//importação
#include <stdio.h>
//prototipação
void trocar();
//variáveis globais
int a, b, aux = 77;
main()
{
	a = 5; 
	b = 15;
	printf("A: %d", a);
	printf("\nB: %d", b);
	trocar(); //invoke para trocar
	printf("\n\nA: %d", a);
	printf("\nB: %d", b);
	printf("\nAUX Global: %d", aux);
}
//Função para realizar a troca
//de valores entre duas variáveis
void trocar()
{
	int aux = 0;
	aux = a;
	a = b;
	b = aux;
	printf("\nAUX Local: %d", aux);
}
