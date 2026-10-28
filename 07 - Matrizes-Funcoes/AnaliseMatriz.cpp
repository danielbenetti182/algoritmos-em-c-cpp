/*
	Name: AnaliseMatriz.cpp
	Author: Daniel Benetti
	Date: 20/09/26 11:36
	Description: Programa que carrega uma matriz por função e analisa seu material
*/

#include<stdio.h>
#include<locale.h>

//prototipação
void determinarMaiorConjunto(int [][5]);

main()
{
	setlocale (LC_ALL, "portuguese");
	int mat[5][5], ordem;
	ordem = 5;
	printf("Digite 25 números: ");
	for(int i = 0; i<ordem; i++){
		for(int j = 0; j<ordem; j++){
			scanf("%d", &mat[i][j]);
		}			
		}
	determinarMaiorConjunto(mat);
}
void determinarMaiorConjunto(int mat[][5])
{
	int DP, DS, AcDP,AbDP,AcDS,AbDS, ordem, maior;
	DP = DS = AcDP = AbDP = AcDS = AbDS = 0;
	ordem = 5;
	//CARREGANDO SOMA DE CONJUNTOS
	for (int i = 0; i < ordem; i++){
		for(int j = 0; j< ordem; j++){
			if(i == j)
			DP = DP + mat[i][j];
			if(i < j)
			AcDP = AcDP + mat[i][j];
			if(i > j)
			AbDP = AbDP + mat[i][j];
			if(i+j == ordem - 1)
			DS = DS + mat[i][j];
			if(i + j < ordem-1)
			AcDS = AcDS + mat[i][j];
			if(i + j > ordem-1)
			AbDS = AbDS + mat[i][j];
		}
	}
	printf("DP = %d, AbDP = %d, AcDP = %d,DS = %d, AbDS = %d, AcDS = %d\n", DP, AbDP, AcDP, DS,AbDS, AcDS);
	//DEFININDO O MAIOR
	maior = DP;
	if(AbDP > maior) maior = AbDP;
	if(AcDP > maior) maior = AcDP;
	if(DS > maior) maior = DS;
	if(AbDS > maior) maior = AbDS;
	if(AcDS > maior) maior = AcDS;
	printf("maior = %d", maior);
	//analisando soma
	if (maior == AbDP)
		printf("AbDP tem a maior soma sendo: %d", AbDP);
	else if (maior == AcDP)
		printf("AcDP tem a maior soma sendo: %d", AcDP);
	else if (maior == DS)
		printf("DS tem a maior soma sendo: %d", DS);
	else if (maior == AbDS)
		printf("AbDS tem a maior soma sendo: %d", AbDS);
	else if (maior == AcDS)
		printf("AcDS tem a maior soma sendo: %d", AcDS);
	else
		printf("DP tem a maior soma sendo: %d", DP);
}
