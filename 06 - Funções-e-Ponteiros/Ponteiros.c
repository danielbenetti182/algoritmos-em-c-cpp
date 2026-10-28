/*
	Name: Ponteiros.c
	Author: Daniel Benetti
	Date: 26/08/26 11:55
	Description: Programa para manipular ponteiros
*/

# include <stdio.h>

main()
{
	short int vetor[20];
	int i; //vetor de inteiros
	for (i = 0; i < 20; i++)
		printf("\n%p", &vetor[i]);
}

	int *ptrA = &a;
	printf("A: %d", a);
	printf("\nConteudo apontado por PtrA: %d", *ptrA);
	
	printf("\nEndereco de A: %p", &a);
	printf("\nEndereco de PtrA: %p", &ptrA);

