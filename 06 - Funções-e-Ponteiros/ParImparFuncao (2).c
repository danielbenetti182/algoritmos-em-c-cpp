/*
	Name: ParImparFuncao.C
	Author: Daniel Benetti
	Date: 18/08/26 21:28
	Description: Programa que define impar ou par por meio de uma função
*/

#include <stdio.h>

//Seção de prototipagem

float calcularMediaIdades (int, int, int);

main(){
	int id1, id2, id3; float media;
	id1 = id2 = id3 = 0; media = 0;
	printf("digite a primeira idade: ");
	scanf ("%d", &id1);
	printf("digite a segunda idade: ");
	scanf ("%d", &id2);
	printf("digite a terceira idade: ");
	scanf ("%d", &id3);
	media = calcularMediaIdades(id1, id2, id3);
	printf("a media eh: %f", media);
}
float calcularMediaIdades(int id1, int id2, int id3){
	float media = 0;
	media = (id1 + id2 + id3)/3.0; 
	return media;
}
