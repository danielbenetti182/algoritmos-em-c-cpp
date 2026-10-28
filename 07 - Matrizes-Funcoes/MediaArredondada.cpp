/*
	Name: MediaArredondada.cpp
	Author: Daniel Benetti
	Date: 05/09/26 10:04
	Description: Programa que calcula média de 10 número e arredonda.
*/

#include <stdio.h>
#include <locale.h>

//prototipação
void carregarVetor(float *);
void calcularMedia(float *, float*);
void exibirMediaArredondada(float *);

 main()
 {
	setlocale(LC_ALL, "portuguese");
	float notas[10];
	float media = 0.0;
	printf("digite as 10 notas: ");
	carregarVetor(notas);
	calcularMedia(notas, &media);
	exibirMediaArredondada(&media);
 }
void carregarVetor(float *notas)
{
	for(int i = 0; i < 10; i++)
	{
	printf("%d: ", i+1);
	scanf("%f", &notas[i]);
	}
}
void calcularMedia(float *notas, float *ptrM)
{
	float total = 0.0;
	for(int i = 0; i < 10; i++)
	{
	total = total + notas[i];
	}
	*ptrM = total/10;
	printf("\nSua média é: %.2f", *ptrM);

}
void exibirMediaArredondada(float *ptrM)
{
	int corte = *ptrM;
	float arredondado = *ptrM;
	arredondado = arredondado - corte;
if (arredondado > 0.49)
	printf("\nSua média arredondada é %d", corte+1);
else
	printf("\nSua média arredondada é %d", corte);
	
}


