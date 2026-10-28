/*
	Name: MultiMatrizHardCode.cpp
	Author: Daniel Benetti
	Date: 16/09/26 12:34
	Description: Programa que multiplica matrizes 
*/



# include<stdio.h>
# include<locale.h>

//prototipação
//void multiplicarMatriz(int [][j], int [][l], int[][l]);
//void imprimirMatriz(int [][], int [][], int[][]); //tudo que é matriz virar um vetor em C


main()
{
	setlocale (LC_ALL, "portuguese");
	int i, j, k, l;
	i = j = k = l = 0;
	printf("Tamanho da linha A: ");
	scanf("%d", &i);
	printf("Tamanho da coluna A: ");
	scanf("%d", &j);
	int matA[i][j];
	printf("Tamanho da linha B: ");
	scanf("%d", &k);
	printf("Tamanho da coluna B: ");
	scanf("%d", &l);
	int matB[k][l];
	if(j == k){
		int matM[i][l];
		multiplicarMatriz(matA, matB, matM);
		imprimirMatriz(matA, matB, matM);	
	}
	else 
	printf("Não é possivel multiplicar esta matriz");


}


//função para multiplicar matriz
void multiplicarMatriz(int Ma[i][j], int Mb[k][l], int Mm[i][l])
{
	for(i = 0; i<; i++){
		for(int j=0; j<3; j++){
		Mm[i][j] = Ma[i][j]+Mb[i][j];
		printf("%d = %d * %d\n", Mm[i][l], Ma[i][j],Mb[k][l]);
		}
	}
}
//função para imprimir uma matriz quadrada
void imprimirMatriz(int Ma[i][j], int Mb[k][l], int Mm[i][l])
{
	//impressão A
	printf("\n\nImpressão A\n");
	for(i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("%d\t", Ma[i][j]);
		}
		puts("\n");
	}
	//impressão B
	printf("\n\nImpressão B\n");
	for(k=0; l<3;i++){
		for(int j=0; j<3;j++){
			printf("%d\t", Mb[i][j]);
		}
		puts("\n");
	}
	printf("\n\nImpressão Soma\n");
	//impressão Soma
		for(i=0; i<3;i++){
		for(j=0; j<3;j++){
			printf("%d\t", Ms[i][j]);
		}
		puts("\n");
	}
}
