/*
	Name: RecursaoII.cpp
	Author: Daniel Benetti
	Date: 28/10/26 09:57
	Description: 
*/

#include <stdio.h>
//prototipação
void lerNum();
void analisarNum(int);
main()
{
	lerNum();
	
}//fim do programa
//função para ler um número
void lerNum()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	analisarNum(num);
}
//função para analisar um numero
void analisarNum(int num)
{
	if(num == 0)
		return;
	if (num%2 == 0)
		puts("Numero par!");
	else 
		puts("Numero impar!");
	lerNum();
}
