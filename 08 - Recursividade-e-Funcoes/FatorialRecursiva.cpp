/*
	Name: FatorialRecursiva.cpp
	Author: Daniel Benetti
	Date: 14/10/26 11:54
	Description: Programa que executa o cálculo fatorial de um número por meio de função recursiva, escolhida pelo usuário na Main.
*/


#include<stdio.h>
//prototipação
int fatorial(int);

main()
{
	int num, fat;
	printf("Digite o numero a ser fatorado: ");
	scanf("%d", &num);
	fat = fatorial(num);
	printf("o fatorial de !%d = %d", num, fat);
}
int fatorial(int num)
{
	printf("%d x ", num);
	if(num == 1)
		return 1;
	return num * fatorial(num - 1);
}
