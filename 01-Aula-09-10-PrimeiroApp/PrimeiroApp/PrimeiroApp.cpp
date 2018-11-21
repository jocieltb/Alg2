// PrimeiroApp.cpp : Define o ponto de entrada para a aplicação de console.
// Aula1

// Incluir Bibliotéca
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include <iostream>

// variaveis globais
int a; // inteiro
float b; // real (pouca precisao)
double c; // double (grande precisao)

int main()
{
	// Variaveis locais
	char d; // caracter
	bool e; // booleano (true, false)
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");

	//Printf com parametros
	printf("A soma de %i e %i eh: %i \n", 99, 10, 99 + 10);
	
	//Printf em um numero real
	printf("Mostrando %f que é um numero real\n", 4.3);
	
	// Mostrando dados que constam na memoria (lixo)
	printf("Mostrando o que esta na memoria: %i \n");

	// Utilizando operacoes
	printf("Resultado da multiplicacao de %i por 2 eh %i\n", 5,5*2);
	
	// Ler e mostrar o conteudo da memoria
	scanf_s("%i", &a);
	printf("\n O valor digitado foi %i \n\n", a);

	// Montrar o endereco da memoria
	printf("\n O valor digitado foi %i \n", &a);

	system("pause");
	return 0;
}

