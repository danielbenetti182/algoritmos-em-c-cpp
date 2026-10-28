/*
	Name: PassagemParametro.c
	Author: Daniel Benetti
	Date: 26/08/26 10:22
	Description: Programa para realizar a troca de valores 
				entre variaveis demonstrando o conceito de
				passagem de parametros por REFÊRENCIA 
*/

//importação
#include <stdio.h>
//prototipação
void trocar(int *, int *);

main()
{
	int a, b;
	a = 5; 
	b = 15;
	printf("A: %d", a);
	printf("\nB: %d", b);
	trocar(&a, &b); //invoke para trocar
	printf("\nA: %d", a);
	printf("\nB: %d", b);
}
//Função para realizar a troca
//de valores entre duas variáveis
void trocar(int *a, int *b)
{
	*a = *a * *b;
	printf("\nA: %d", *a);
	printf("\nB: %d", *b);
	*b = *a / *b;
	printf("\nA: %d", *a);
	printf("\nB: %d", *b);
	*a = *a / *b;
}
