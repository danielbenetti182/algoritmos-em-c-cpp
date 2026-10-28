/*
	Name: classificadoIdade.c
	Author: Daniel Benetti
	Date: 24/08/26 11:28
	Description: Programa que classifica e imprime idade por meio de função
*/

//Seção de importação
#include <stdio.h>
#include <locale.h>

//Seção de Prototipação
void classificarIdade(char[49], int);

main()
{
	setlocale(LC_ALL, "portuguese");
	int idade;
	char nome[49];
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	classificarIdade(nome, idade);
	
}
void classificarIdade(char name[49], int age)
{
	if (age <= 2)
		printf("%s é um bebê, pois tem %d anos", name, age);
	else if (age <=12)
		printf("%s é uma criança, pois tem %d anos", name, age);
			else if (age <=19)
				printf("%s é um adolescente, pois tem %d anos", name, age);
				else if (age <=59)
					printf("%s é um Adulto, pois tem %d anos", name, age);
					else if (age <=90)
						printf("%s é uma Idoso, pois tem %d anos", name, age);
						else if (age > 90)
							printf("%s é um Matusalém, pois tem %d anos", name, age);
}


