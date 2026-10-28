/*
	Name: calculadora.cpp
	Copyright: 
	Author: Daniel Benetti
	Date: 19/08/26 10:40
	Description: função para calcular duas operações
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


//Seção de prototipação
int somar (int, int);
float dividir (int, int);
float multiplicar (int, int);
int subtrair (int, int);
int calcularPotencia (int, int);
int calcularPotenciaPOW (int, int);
float calcularRaiz (int);

main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b, soma, subtracao,  potencia, potenciapow;
	float divisao, multiplicacao, raiz;
	divisao = multiplicacao = raiz = 0.0;
	a = b = soma = subtracao = potencia = potenciapow = 0;
	printf("digite o valor de A: ");
	scanf("%d", &a);
	printf("digite o valor de B: ");
	scanf("%d", &b);
	soma = somar(a,b);
	printf("A soma de %d + %d é igual a: %d", a, b, soma);
	divisao = dividir(a,b);
	printf("\nA divisão de %d por %d é igual a %.3f", a, b, divisao);
	multiplicacao = multiplicar(a,b);
	printf("\nA multiplicação de %d vezes %d é igual a %.2f", a, b, multiplicacao);
	subtracao = subtrair(a,b);
	printf("\nA subtração de %d - %d é igual a: %d", a, b, subtracao);
	potencia = calcularPotencia(a,b);
	printf("\n%d elevado a %d é igual a: %d", a, b, potencia);
	potenciapow = calcularPotenciaPOW(a,b);
	printf("\n%d elevado a %d é igual a: %d", a, b, potenciapow);
	raiz = calcularRaiz (a);
	printf("\na raiz quadrada de %d é %f", a, raiz);
	
}//fim main
int somar(int a, int b)
{
	int result = 0;
	result = a + b;
	return result;
}//fim do programa
int subtrair(int a, int b)
{
	int subt = 0;
	subt = 0;
	subt = a - b;
	return subt;
}//fim subtrair
float multiplicar(int a, int b)
{
	float multi = 0.0;
	multi = 0.0;
	multi = (float) a * b;
	return multi;
}//fim do multiplicar
float dividir(int a, int b)
{
	
	float divi;
	divi = 0.0;
	divi = (float) a / b;
	return divi;
}//fim do programa
int calcularPotencia (int x, int y)
{
	int pot, i;
	pot = 1;
	for(i = 0; i < y; i++)
		pot = pot * x;	
	return pot;
}
//funçao para calulcar a potência com pow
int calcularPotenciaPOW (int base, int expoente)
{
	return pow(base, expoente);
}
float calcularRaiz (int a)
{
	float raiz;
	raiz = 0;
	raiz = (float) sqrt(a);
	return raiz;
}
