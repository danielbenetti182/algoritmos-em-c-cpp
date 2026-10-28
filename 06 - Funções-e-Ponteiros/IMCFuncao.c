/*
	Name: IMCFuncao.C
	Author: Daniel Benetti
	Date: 20/08/26 06:48
	Description: Programa que calcula IMC por meio de uma função
*/
//Seção de importação
#include <stdio.h>
#include <locale.h>

//Seção de Prototipação
float calcularIMC (float, float);

main()
{
	setlocale(LC_ALL, "portuguese");
	float peso, altura, imc;
	char nome[49];
	peso = altura = imc = 0.0;
	printf("Insira seu nome: ");
	scanf("%s", &nome);
	printf("Insira seu peso: ");
	scanf("%f", &peso);
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	imc = calcularIMC(peso, altura);
	printf("%s o IMC para o peso %.2f Kg e altura de %.2f é %.2f", nome, peso, altura, imc);
	
}
float calcularIMC(float peso, float altura)
{
	float IMC;
	IMC = 0.0;
	IMC = peso/(altura*altura);
	return IMC;
}
