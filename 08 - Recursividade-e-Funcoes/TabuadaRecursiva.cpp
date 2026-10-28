/*
	Name: TabuadaRecursiva.cpp
	Copyright: 
	Author: Daniel Benetti
	Date: 14/10/26 11:54
	Description: Programa que imprime tabuada de multiplicação por meio de função recursiva, escolhida pelo usuário na Main.
*/

#include<stdio.h>
#include<locale.h>

//prototipação
void calcularTabuada(int, int);
int mult = 1;
int result = 0;
main()
{

	int num;
	printf("Digite qual número você deseja ver a tabuada: ");
	scanf("%d", &num);
	calcularTabuada(num, mult);
}

void calcularTabuada(int num,int mult)
{
	result = num*mult;
	printf("\n %d x %d = %d", num, mult, result);
	if(mult>9)
		return;
	calcularTabuada(num, ++mult);
	
}

