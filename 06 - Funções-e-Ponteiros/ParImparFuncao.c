/*
	Name: ParImparFuncao.C
	Author: Daniel Benetti
	Date: 18/08/26 21:28
	Description: Programa que define impar ou par por meio de uma função
*/
//Seção de importação
#include <stdio.h>
#include <locale.h>

//Seção de Prototipação
int lerNum ();
int verificarParImpar (int);

main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	num = lerNum();
	verificarParImpar(num);
	
}
int lerNum (int leitura)
{
	leitura = 0;
	printf("Digite um número: ");
	scanf("%d", &leitura); 
	return leitura;
}
int verificarParImpar (int numero)
{
	int quo, resto;
	quo = resto = 0;
	quo = numero/2;
	resto = numero-(quo*2);
	if (resto == 0)
	{
		printf("O número %d é par!", numero);
	}
	else{
	printf("O número %d é impar!", numero);
	}
}
