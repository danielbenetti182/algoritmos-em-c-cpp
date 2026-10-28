/*
	Name: CarregandoVetorFuncao.cpp
	Author: Daniel Benetti
	Date: 02/09/26 10:43
	Description: programa para manipular vetores
*/
//importação
#include<stdio.h>
#include<locale.h>

//Prototipação
int lerNum();
void imprimirVetor(int *);

main()
{
	setlocale(LC_ALL, "portuguese");
	int vet[5];
	//carga do vetor
	for(int i = 0; i < 5; i++)
		vet[i] = lerNum();
	//Imprimindo conteúdo do vetor
	puts("\nConteudo do vetor: ");
	imprimirVetor(vet);
}

//Função para ler e retornar um número digitado pelo usuário
int lerNum()
{
	int num = 0;
	printf("Digite número: ");
	scanf("%d", &num);
	return num;
}
void imprimirVetor(int *V)
{
	for(int a = 0; a < 5; a++)
		printf("%d|", V[a]);
}
