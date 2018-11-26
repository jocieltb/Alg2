// ListaExercicio.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



float leiaf()
{
	float l;
	scanf_s("%f", &l);
	return l;
}

int leiai()
{
	float l;
	scanf_s("%f", &l);
	return l;
}

void ex1()
{
	float d, x1, x2, y1, y2;

	printf("Informe x1: ");
	x1 = leiaf();
	printf("Informe x2: ");
	y1 = leiaf();
	printf("Informe y1: ");
	x2 = leiaf();
	printf("Informe y2: ");
	y2 = leiaf();

	d = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
	printf("\nA Distancias entre os pontos P(x1,y1) e P(x2,y2) eh %.2f unidades de medida\n\n", d);

}

void ex2()
{
	float a, b, c, d;
	printf("Informe A: ");
	a = leiaf();
	printf("Informe B: ");
	b = leiaf();
	printf("Informe C: ");
	c = leiaf();

	d = (((a + b)*(a + b)) + ((b + c)*(b + c))) / 2;

	printf("\nO resultado da expressao eh %.2f\n\n", d);
}

void ex3()
{
	int idias, d, m, a;

	printf("Informe o numero de dias que voce ja viveu: ");
	idias = leiai();

	a = idias / 365;
	m = (idias - (a * 365)) / 30;
	d = idias - ((a * 365) + (m * 30));

	if (m == 12)
	{
		a = a + 1;
		m = 0;
	}

	printf("\nVoce ja viveu %i ano(s) %i mes(es) e %i dia(s)\n\n", a, m, d);
}

void ex4()
{
	float media, n1, n2, n3;

	printf("Informe a primeira nota: ");
	n1 = leiaf();
	printf("Informe a segunda nota: ");
	n2 = leiaf();
	printf("Informe a terceira nota: ");
	n3 = leiaf();

	media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

	printf("\nA media eh %.2f\n\n", media);
}

void ex5()
{
	float cc, cf, i, d;

	printf("informe o custo de fabrica do carro: ");
	cf = leiaf();
	cc = cf + (cf * 0.28) + (cf * 0.45);

	printf("\nO custo ao consumidor de um carro novo eh R$ %.2f\n\n", cc);
}

void ex6()
{
	int i, n, soma = 0;
	printf("informe um numero inteiro: ");
	n = leiai();

	for (i = 0; i <= n; i++)
	{
		soma = soma + i;
	}
	printf("\nA soma dos n primeiros números inteiros positivos: %i\n\n", soma);
}

void ex7()
{
	int a, b, c;

	printf("Informe um numero inteiro: ");
	a = leiai();
	printf("Informe um numero inteiro: ");
	b = leiai();
	c = a % b;

	if (c == 0)
	{
		printf("\nSao multiplos\n\n");
	}
	else
	{
		printf("\nNao sao multiplos\n\n");
	}
}

void ex8()
{
	int idade;
	printf("Informe a idade do nadador: ");
	idade = leiai();

	if ((idade >= 5) && (idade <= 7))
	{
		printf("Infantil A\n\n");
	}
	if ((idade >= 8) && (idade <= 10))
	{
		printf("Infantil B\n\n");
	}
	if ((idade >= 11) && (idade <= 13))
	{
		printf("Juvenil A\n\n");
	}
	if ((idade >= 14) && (idade <= 17))
	{
		printf("Juvenil B\n\n");
	}
	if (idade >= 18)
	{
		printf("Adulto\n\n");
	}
}

void ex9()
{
	float n1, n2, n3, media;
	int op = 0;

	printf("\n-----[ CALCULO DE MEDIAS ]-----\n");
	printf("\nInforme a primeira Nota: ");
	n1 = leiaf();
	printf("\nInforme a segunda Nota: ");
	n2 = leiaf();
	printf("\nInforme a terceira Nota: ");
	n3 = leiaf();
	system("cls");
	printf("\n-----[ TIPOS DE MEDIA ]-----\n");
	printf("\n  1 - Media Aritimetica\n");
	printf("\n  2 - Media Ponderada(3, 3, 4)\n");
	printf("\n  3 - Media Harmonica\n");
	printf("\nEscolha o tipo de media desejada: ");
	op = leiai();
	if ((op > 0) && (op <= 3))
	{
		switch (op)
		{
		case 1:
			media = (n1 + n2 + n3) / 3;
			printf("\nA Media Aritimetica eh %.2f\n\n", media);
			break;
		case 2:
			media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
			printf("\nA Media Ponderada eh %.2f\n\n", media);
			break;
		case 3:
			media = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
			printf("\nA Media Harmonica eh %.2f\n\n", media);
			break;
		}
	}
	else
	{
		printf("\nNumero informado nao corresponde a nenhum tipo de media\n\n");
	}
}

void ex10()
{
	int i = 1, quant;
	float ptotal = 0.0;
	char cod[5];

	for (i = 1; i > 0; i--)
	{

		printf("\nInforme o Codigo do Produto: ");
		fgets(cod, 5,stdin);
		fgets(cod, 5, stdin);
		if (strcmp(cod, "1001") == 0)
		{
			printf("Informe a quantidade: ");
			quant = leiai();
			ptotal = ptotal + (quant * 5.32);
			i = 2;
		}
		if (strcmp(cod, "1324") == 0)
		{
			printf("Informe a quantidade: ");
			quant = leiai();
			ptotal = ptotal + (quant * 6.45);
			i = 2;
		}
		if (strcmp(cod, "6548") == 0)
		{
			printf("Informe a quantidade: ");
			quant = leiai();
			ptotal = ptotal + (quant * 2.37);
			i = 2;
		}
		if (strcmp(cod, "0987") == 0)
		{
			printf("Informe a quantidade: ");
			quant = leiai();
			ptotal = ptotal + (quant * 5.32);
			i = 2;
		}
		if (strcmp(cod, "7623") == 0)
		{
			printf("Informe a quantidade: ");
			quant = leiai();
			ptotal = ptotal + (quant * 6.45);
			i = 2;
		}
		if (strcmp(cod, "0") == 0)
		{
			i = 1;
		}
	}
	printf("\nO preco total dos produtos eh R$ %.2f\n\n", ptotal);
}
void ex11()
{
	float area, raio, pi = 3.14159;
	printf("Informe o raio do circulo: ");
	raio = leiaf();
	area = pi * (raio * raio);

	printf("\nA area da circunferencia eh %.2f\n\n", area);
}
void ex12()
{
	printf("\n----------[ AREA DO TRIANGULO ]----------\n");
	float area, base, altura;
	printf("\nInforme o tamanha da Base do trianculo: ");
	base = leiaf();
	printf("\nInforme a altura do trianculo: ");
	altura = leiaf();
	area = (base * altura) / 2;

	printf("\nA area do triangulo eh %.2f\n\n", area);
}
void ex13()
{
	float n = 0;
	int i;
	printf("\nInforme um numero inteiro: ");
	n = leiaf();
	for (i = 0; i < n * 2; i++) {
		if (i % 2 != 0) {
			printf("%i ", i);
		}
	}
	printf("\n\n");
}

void ex14()
{
	printf("\n XXXXX\n");
	printf(" X   X\n");
	printf(" X   X\n");
	printf(" X   X\n");
	printf(" XXXXX\n\n");
}
void ex15()
{
	int x, a, n, i;
	printf("informe um numero X: ");
	a = leiai();
	x = a;
	printf("Informe a potencia: ");
	n = leiai();
	printf("\n");
	for (i = 0; i < n - 1; i++) {
		x = x * a;

	}
	printf("\n\nO resultado da potência eh %i\n\n", x);
}




void ex17()
{

	int i, j, a, b;
	for (i = 0; i < 11; i++) {
		printf("\n");
		if (i < 8) {
			for (j = 0; j <= 15; j++) {
				a = 7 - i; b = 9 + i;
				if ((j > a) && (j < b)) {
					printf("X");
				}
				else {
					printf(" ");
				}
			}
		}
		if ((i > 7) && (i < 10)) {
			for (j = 0; j <= 15; j++) {
				a = 6; b = 10;
				if ((j > a) && (j < b)) {
					printf("X");
				}
				else {
					printf(" ");
				}

			}
		}
		if (i == 10) {
			for (j = 0; j <= 15; j++) {
				a = 5; b = 11;
				if ((j > a) && (j < b)) {
					printf("X");
				}
				else {
					printf(" ");
				}

			}
		}
	}
}

void ex18()
{
	int i = 0, n, c = 0;
	printf("Informe um numero interio de 2 a 20: ");
	n = leiai();
	printf("\n");
	for (i = 0; i < n; i++) {
		c = (c * 10) + (i + 1);
		printf("%i\n", c, i);
	}

	for (i = n; i > 1; i--) {
		c = (c - i) / 10;
		printf("%i\n", c);
	}
	printf("\n");
}

void ex19()
{
	int i, j, n, op = 0;
	int mat[3][3];
	printf("Informe os numeros inteiros que faram parte de sua matriz:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Matriz[%i][%i] = ", i, j);
			mat[i][j] = leiai();
		}
	}

	i = 0;
	j = 0;
	printf("Informe um numero inteiro que sera o multiplicador: ");
	n = leiai();
	printf(" O que deseja multiplicar (1)Linha ou (2)coluna? ");
	op = leiai();
	if ((op == 1) || (op == 2)) {
		switch (op)
		{
		case 1:
			for (j = 0; j < 3; j++) {
				mat[i][j] = mat[i][j] * n;
			}

			for (i = 0; i < 3; i++) {
				printf("\n");
				for (j = 0; j < 3; j++) {
					printf("[%i][%i] = %i ", i, j, mat[i][j]);
				}
			}
			printf("\n\n");
			break;
		case 2:
			for (i = 0; i < 3; i++) {
				mat[i][j] = mat[i][j] * n;
			}

			for (i = 0; i < 3; i++) {
				printf("\n");
				for (j = 0; j < 3; j++) {
					printf("[%i][%i] = %i ", i, j, mat[i][j]);
				}
			}
			printf("\n\n");
			break;
		}
	}
	else {
		printf("\nNumero informado nao corresponda as opcoes disponiveis!\n");
	}

}


void escolha()
{
	int ex;
	printf("\nInforme o numero do exercicio desejado (1 a 37): ");
	ex = leiai();
	system("cls");
	if ((ex > 0) && (ex <= 37))
	{
		switch (ex)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex8();
			break;
		case 9:
			ex9();
			break;
		case 10:
			ex10();
			break;
		case 11:
			ex11();
			break;
		case 12:
			ex12();
			break;
		case 13:
			ex13();
			break;
		case 14:
			ex14();
			break;
		case 15:
			ex15();
			break;
		case 17:
			ex17();
			break;
		case 18:
			ex18();
			break;
		case 19:
			ex19();
			break;
		}
	}
	else
	{
		printf("\nNumero informado nao corresponde a nenhum exercicio\n\n");
	}
}

int main()
{
	
	// Função Escolha
	
	int i, op = 1;
	while (op != 0)
	{
		escolha();
		printf("\nDigite 0 para encerrar e 1 para executar outro exercicio: ");
		op = leiai();
		i = op + 1;
		system("cls");
	}

	


	//----------------------------------------------------
	system("pause");
	return 0;
}