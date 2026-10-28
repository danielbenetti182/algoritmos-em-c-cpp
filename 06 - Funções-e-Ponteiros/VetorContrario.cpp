/*
	Name: VetorContario.cpp
	Author: Daniel Benetti
	Date: 02/09/26 11:26
	Description: Programa que armazena um vetor e imprime ao contrário por uma função
*/

 #include<stdio.h>
 #include<locale.h>
 //prototipação
 void imprimirContrario(char *);
 
 main()
 {
 	setlocale(LC_ALL, "portuguese");
 	char texto[30];
 	printf("Digite um texto: ");
	gets(texto);
 	imprimirContrario(texto);
 	
 	
 }
 void imprimirContrario(char *T)
 {
	for(int i = 30-1; i >= 0; i--)
	 printf("%c", T[i]);
 } 	
