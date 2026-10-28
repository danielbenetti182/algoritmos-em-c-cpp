/*
	Name: Funcoes.cpp
	Author: Daniel Benetti
	Date: 19/08/26 12:09
	Description: Programa para demonstrar o uso e recursos 
				 da linguagem C por meio de funções
*/

//Seção de importação
#include <stdio.h> //Entrada e saída padrão
#include <locale.h>

//Seção de prototipação

void linha();
void linha2(int);
int lerNum();

main()
{
	linha();
	printf("A soma de %d + %d = %d", lerNum(),lerNum());
	linha2(50);
	
	
}//fim do main

void linha()
{
	puts("=================================");
}
void linha2(int qtde)
{
	for(int i = 0; i < qtde; i++)
		printf("+");
}
//Função para retornar um número digitado pelo usuário
int lerNum()
{
	int numero = 0;
	printf("\nDigite um numero: ")/
	scanf("%d", &numero);
	return numero;
}
