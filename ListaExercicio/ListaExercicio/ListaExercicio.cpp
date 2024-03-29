// Lista de Exercício da Disciplina Algoritimos II em C - Analise e Desenvolvimento de Sistemas
// Jociel Tavares Barbosa

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

void printx(int px)
{
	int i;
	for (i = 0; i < px; i++)
	{
		printf("X");
	}
}

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
	printf("\nA Distância entre os pontos P(x1,y1) e P(x2,y2) é %.2f unidades de medida\n\n", d);
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

	printf("\nO resultado da expressao é %.2f\n\n", d);
}

void ex3()
{
	int idias, d, m, a;

	printf("Informe o numero de dias que você já viveu: ");
	idias = leiai();

	a = idias / 365;
	m = (idias - (a * 365)) / 30;
	d = idias - ((a * 365) + (m * 30));

	if (m == 12)
	{
		a = a + 1;
		m = 0;
	}
	printf("\nVocê já viveu %i ano(s) %i mes(es) e %i dia(s)\n\n", a, m, d);
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

	printf("\nA media é %.2f\n\n", media);
}

void ex5()
{
	float cc, cf, i, d;

	printf("informe o custo de fábrica do carro: ");
	cf = leiaf();
	cc = cf + (cf * 0.28) + (cf * 0.45);

	printf("\nO custo ao consumidor de um carro novo é R$ %.2f\n\n", cc);
}

void ex6()
{
	int i, n, soma = 0;
	printf("informe um número inteiro: ");
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

	printf("Informe um número inteiro: ");
	a = leiai();
	printf("Informe um número inteiro: ");
	b = leiai();
	c = a % b;

	if (c == 0)
	{
		printf("\nSão multiplos\n\n");
	}
	else
	{
		printf("\nNão são multiplos\n\n");
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
	printf("\n  1 - Média Aritimética\n");
	printf("\n  2 - Média Ponderada(3, 3, 4)\n");
	printf("\n  3 - Média Harmônica\n");
	printf("\nEscolha o tipo de média desejada: ");
	op = leiai();
	if ((op > 0) && (op <= 3))
	{
		switch (op)
		{
		case 1:
			media = (n1 + n2 + n3) / 3;
			printf("\nA Média Aritimética é %.2f\n\n", media);
			break;
		case 2:
			media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
			printf("\nA Média Ponderada é %.2f\n\n", media);
			break;
		case 3:
			media = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
			printf("\nA Média Harmonica é %.2f\n\n", media);
			break;
		}
	}
	else
	{
		printf("\nNúmero informado não corresponde a nenhum tipo de média\n\n");
	}
}

void ex10()
{
	int cod = 1, quant, v = 0;
	float ptotal = 0.0;

	printf("\n----------[ PRODUTOS ]----------\n");
	printf("\nCod: 1001 - R$ 5.36 - Produto 1");
	printf("\nCod: 1324 - R$ 6.45 - Produto 2");
	printf("\nCod: 6548 - R$ 2.37 - Produto 3");
	printf("\nCod:  987 - R$ 5.32 - Produto 4");
	printf("\nCod: 7623 - R$ 6.45 - Produto 5\n");
	printf("\n--------------------------------\n");

	while (cod > 0) {
		printf("\nInforme o Código do Produto (0 para terminar): ");
		cod = leiai();
		if (cod > 0) {
			if (cod == 1001) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 5.32);
				v = 1;
			}
			if (cod == 1324) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 6.45);
				v = 1;
			}
			if (cod == 6548) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 2.37);
				v = 1;
			}
			if (cod == 987) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 5.32);
				v = 1;
			}
			if (cod == 7623) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 6.45);
				v = 1;
			}
			if (v == 0) {
				printf("\nNão existe produto com esse código!\n");
			}
			v = 0;
		}
	}
	printf("\n----------[ PAGAMENTO ]----------\n");
	printf("\nTotal a Pagar: R$ %.2f\n", ptotal);
	printf("\n---------------------------------\n");
}

void ex11()
{
	float area, raio, pi = 3.14159;
	printf("Informe o raio do circulo: ");
	raio = leiaf();
	area = pi * (raio * raio);

	printf("\nA area da circunferência é %.2f\n\n", area);
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
	printf("\nInforme um número inteiro: ");
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
	printf("Informe a potência: ");
	n = leiai();
	printf("\n");
	for (i = 0; i < n - 1; i++) {
		x = x * a;
	}
	printf("\n\nO resultado da potência eh %i\n\n", x);
}

void ex16()
{
	int i, v = 0;
	char texto[50];
	char letra;

	printf("Informe uma String (Max. 50 caract.)= ");
	getchar();
	fgets(texto, 50, stdin);
	printf("Informe o caractere a ser buscado dentro da String: ");
	scanf_s("%c", &letra);
	
	for (i = 0; i < 50; i++) {
		if (texto[i] == letra) {
			printf("O caractere informado se encontra na posicao %i\n\n", i + 1);
			v++;
		}
	}
	if (v == 0) {
		printf("Caractere não encontrado na string\n\n");
	}
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
	int i = 0, n;
	double c = 0;
	printf("Informe um número interio de 2 a 9: ");
	n = leiai();
	printf("\n");
	for (i = 0; i < n; i++) {
		c = (c * 10) + (i + 1);
		printf("%0.f\n", c, i);
	}

	for (i = n; i > 1; i--) {
		c = (c - i) / 10;
		printf("%0.f\n", c);
	}
	printf("\n");
}

void ex19()
{
	int i, j, n, op = 0;
	int mat[3][3];
	printf("Informe os números inteiros que faram parte de sua matriz:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Matriz[%i][%i] = ", i, j);
			mat[i][j] = leiai();
		}
	}
	i = 0;
	j = 0;
	printf("Informe um número inteiro que sera o multiplicador: ");
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
		printf("\nNúmero informado não corresponda as opcões disponíveis!\n");
	}
}

void ex20() 
{
	int i, j, modulo[2][2];

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("informe o elemento [%i][%i] = ", i, j);
			modulo[i][j] = leiai();
			if (modulo[i][j] < 0) {
				modulo[i][j] = modulo[i][j] * -1;
			}
		}
	}
	i = 0;
	j = 0;

	for (i = 0; i < 2; i++) {
		printf("\n");
		for (j = 0; j < 2; j++) {
			printf("[%i][%i] = %i\t", i, j, modulo[i][j]);
		}
	}
	printf("\n\n");
}

void ex21()
{
	int n = 0, i = 0, x = 0;
	printf("Informe um número inteiro positivo: ");
	n = leiai();
	for (i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			x += i;
		}
	}
	printf("A soma dos números pares da sequencia eh %i\n\n", x);
}

void ex22()
{
	int i, j, m, mat[3][3];

	printf("Matriz A\n\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Informe um número inteiro para posição [%i][%i]: ", i, j);
			mat[i][j] = leiai();
		}
	}
	printf("\n\nMatriz A ");
	for (i = 0; i < 3; i++) {
		printf("\n");
		for (j = 0; j < 3; j++) {
			printf("%i\t", mat[i][j]);
		}
	}
	printf("\n\nMatriz Transposta de A ");
	for (j = 0; j < 3; j++) {
		printf("\n");
		for (i = 0; i < 3; i++) {
			printf("%i\t", mat[i][j]);
		}
	}
	printf("\n\n");
}

void ex23()
{
	float v_media, t_gasto, distancia, q_litros;
	int thora, tmin;
	printf("Informe o tempo gasto na viagem (em min): ");
	t_gasto = leiaf();
	printf("Informe a velocidade média: ");
	v_media = leiaf();

	distancia = (t_gasto * v_media) / 60;
	q_litros = distancia / 12;

	thora = t_gasto / 60;
	tmin = t_gasto - (thora * 60);

	printf("\n Velociade média: %.2f km/h\n\n", v_media);
	printf("\n Tempo gasto: %ih:%im\n\n", thora, tmin);
	printf("\n Distancia: %.2f km\n\n", distancia);
	printf("\n Consumo de Combustivel: %.2f l\n\n\n", q_litros);
}

void ex24()
{
	int a, b, c;
	printf("Informe um número inteiro A: ");
	a = leiai();
	printf("Informe um número inteiro B: ");
	b = leiai();

	printf("\n\nTrocando os Valores de A para B ...\n\n");
	c = a;
	a = b;
	b = c;
	printf("Valor de A: %i\n\n", a);
	printf("Valor de B: %i\n\n", b);
}

void ex25()
{
	float s_bruto, s_liq;

	printf("Informe o valor do salario bruto: ");
	s_bruto = leiaf();

	s_liq = (s_bruto * 0.90) * 0.95;

	printf("\n\nSalário liquido: %.2f\n\n", s_liq);
}

void ex26()
{
	int diaA, mesA, anoA, diaN, mesN, anoN, N_dias;
	printf("Informe a Data de seu Nascimento\n");
	printf("Dia: ");
	diaN = leiai();
	printf("Mes: ");
	mesN = leiai();
	printf("Ano: ");
	anoN = leiai();

	printf("\nInforme a Data Atual\n");
	printf("Dia: ");
	diaA = leiai();
	printf("Mes: ");
	mesA = leiai();
	printf("Ano: ");
	anoA = leiai();

	N_dias = ((anoA - anoN) * 365) + ((mesA - mesN) * 30) + (diaA - diaN);

	printf("\nVoce ja viveu %i dias\n\n", N_dias);
}

void ex27()
{
	float vCompra, vPago, vTroco;
	int n1, n10, n100, notas;

	printf("Informe o Valor da compra R$ ");
	vCompra = leiaf();
	printf("Informe o Valor Pago R$ ");
	vPago = leiaf();
	
	if (vCompra < vPago) {
		vTroco = vPago - vCompra;
		n100 = vTroco / 100;
		n10 = (vTroco - (n100 * 100)) / 10;
		n1 = vTroco - (n100 * 100) - (n10 * 10);

		notas = n100 + n10 + n1;

		printf("\nNúmero minimo de notas: %i", notas);
		printf("\nValor da compra R$ %.2f", vCompra);
		printf("\nValor do troco R$ %.2f", vTroco);
		printf("\nNúmero de notas de R$ 100,00: %i", n100);
		printf("\nNúmero de notas de R$ 10,00: %i", n10);
		printf("\nNúmero de notas de R$ 1,00: %i\n\n", n1);
	}
	else {
		printf("Valor pago eh insuficiente!");
	}
}

void ex28()
{
	float salario = 0, vCarros = -1, vendas = 0;
	int nCarros = 0;
	printf("\nInforme o valor do carro vendido (Digite 0 depois de informa todas as vendas)\n");
	while (vCarros != 0)
	{
		printf("\nCarro %i: ", nCarros + 1);
		vCarros = leiaf();
		vendas += vCarros;
		nCarros++;

	}
	salario = ((nCarros - 1) * 50) + (vendas * 0.05) + (954 * 2);

	printf("\nNúmero de Carros vendidos:\t %i", nCarros - 1);
	printf("\nValor da Comissao Fixa:\t R$ %i.00", (nCarros - 1) * 50);
	printf("\nValor da Comissao Variavel:\t R$ %.2f", (vendas * 0.05));
	printf("\nValor das Vendas:\t\t R$ %.2f", vendas);
	printf("\nValor do salário:\t\t R$ %.2f\n\n", salario);
}

void ex29()
{
	int x, y, z;

	printf("Informe as medidas de um triangulo\n");
	printf("\nBase: ");
	x = leiai();
	printf("\nLado Esquerdo: ");
	y = leiai();
	printf("\nLado Direito: ");
	z = leiai();

	if ((x < y + z) && (y < x + z) && (z < x + y)) {
		if ((x == y) && (y == z) && (x == z)) {
			printf("\nTriangulo equilatero\n\n");
		}
		if (((x == y) && (y != z)) || ((y == z) && (x != z)) || ((x == z) && (y != z)))
		{
			printf("\nTriângulo Isoscele\n\n");
		}
		if ((x != y) && (y != z) && (x != z))
		{
			printf("\nTriângulo escaleno\n\n");
		}
	}
	else {
		printf("\nAs medidas informadas impossibilitam a formação de um triangulo!\n\n");
	}
}

void ex30()
{
	int i = 0, n, c = 0;
	printf("Informe um número interio de 2 a 9: ");
	n = leiai();
	printf("\n");
	for (i = 0; i < n; i++) {
		c = (c * 10) + (i + 1);
	}
	
	printf("%i\n", c);
	
	for (i = n; i > 1; i--) {
		c = (c - i) / 10;
		printx((n + 1) - i);
		printf("%i\n", c);
	}
	printf("\n");
}

void ex31()
{
	int a, c = 0, i;

	for (i = 0; i < 5; i++) {
		printf("Informe um número inteiro %i/5: ", i + 1);
		a = leiai();
		if (a < 0) {
			c++;
		}
	}
	printf("\nForam informados %i números negativos\n\n", c);
}

void ex32()
{
	float salario = 0, mediaS = 0, mediaF = 0, maiorS = 0, P100 = 0;
	int filhos = 0, n = 0, m = 0;

	printf("Pesquisa habitantes da Cidade X\n");

	while (salario >= 0) {

		printf("\nInforme o Salário (-1 para encerrar): ");
		salario = leiaf();

		if (salario >= 0) {
			printf("Informe o número de filhos: ");
			filhos = leiai();

			mediaS = mediaS + salario;
			mediaF = mediaF + filhos;
			n++;
			
			if (maiorS < salario) {
				maiorS = salario;
			}
			if (salario < 100) {
				m++;
			}
		}
	}
	mediaS = mediaS / n;
	printf("\nMédia do salário da população: R$ %.2f\n\n", mediaS);
	mediaF = mediaF / n;
	printf("Média do número de filhos: %.2f\n\n", mediaF);
	printf("Maior salário: R$ %.2f\n\n", maiorS);
	P100 = (m * 100) / n;
	printf("Percentual de pessoas com salário até R$100.00: %.2f\%%\n\n", P100);
}

void ex33()
{
	float chico = 1.50, ze = 1.10;
	int c = 0;

	while (chico > ze)
	{
		chico = chico + 0.02;
		ze = ze + 0.03;
		c++;
	}
	printf("\n\nSerão necessários %i anos para que Zé seja maior que Chico.\n\n", c);
}

void ex34()
{
	int i, valor, maior, menor;
	for (i = 0; i < 50; i++) {
		printf("\nInforme um número inteiro (%i/50): ", i + 1);
		valor = leiai();
		if (i == 0) {
			maior = valor;
			menor = valor;
		}
		if (maior < valor) {
			maior = valor;
		}
		if (menor > valor) {
			menor = valor;
		}
	}
	printf("\nO maior valor informado foi: %i\n", maior);
	printf("\nO menor valor informado foi: %i\n\n\n", menor);
}

void ex35()
{
	int idade = 0, sexo = 0, olhos = 0, cabelos = 0, maiorI = 0, perfil = 0;

	while (idade >= 0) {
		printf("\nInforme a idade (-1 para encerrar): ");
		idade = leiai();
		if (idade >= 0) {
			printf("Informe o sexo (1 - masculino e 2 - feminino): ");
			sexo = leiai();
			printf("Informe a cor dos olhos(1 - azuis, 2 - verdes ou 3 - castanhos): ");
			olhos = leiai();
			printf("Informe a cor dos cabelos(1 - louros, 2 - castanhos, 3 - pretos): ");
			cabelos = leiai();

			if ((sexo == 2) && ((idade > 17) && (idade < 36)) && (olhos == 2) && (cabelos == 1)) {
				perfil++;
			}
		}
		if (maiorI < idade) {
			maiorI = idade;
		}
	}
	printf("\nA maior idade informada foi: %i\n", maiorI);
	printf("\nIndividuos do Sexo Feminino, idade de 18 a 35, Olhos verdes e Cabelos loiros\n");
	printf("\nQuantidade: %i\n\n", perfil);
}

void ex36()
{
	int n = 0, i = 0, j = 0;

	for (i = 0; i < 20; i++) {
		printf("\nInforme um númeor inteiro (%i / 20): ", i + 1);
		n = leiai();
		for (j = 0; j < n; j++) {
			printf("\n%i x %i = %i", j + 1, n, (j + 1)*n);
		}
		printf("\n");
	}
	printf("\n");
}

void ex37()
{
	struct dma {
		int dia;
		int mes;
		int ano;
	};

	struct dma data1, data2;
	int diasD;

	printf("\nInforme a primeira data válida (dia, mes e ano) ");
	printf("\nDia: ");
	data1.dia = leiai();
	printf("\nMês: ");
	data1.mes = leiai();
	printf("\nAno: ");
	data1.ano = leiai();

	printf("\n\nInforme a segunda data válida (dia, mes e ano) ");
	printf("\nDia: ");
	data2.dia = leiai();
	printf("\nMês: ");
	data2.mes = leiai();
	printf("\nAno: ");
	data2.ano = leiai();


	diasD = ((data1.ano - data2.ano) * 365) + ((data1.mes - data2.mes) * 30) + (data1.dia - data2.dia);

	if (diasD < 0) {
		diasD = diasD * (-1);
	}

	printf("\nDecorreram %i dias entre a datas\n\n", diasD);
}

void ex38()
{
	struct hm {
		int horas;
		int minutos;
	};

	struct hm thm;
	int tm;

	printf("\nInforme tempo em minutos: ");
	tm = leiai();

	thm.horas = tm / 60;
	thm.minutos = tm - (thm.horas * 60);

	printf("\nTempo convertido %ih:%im\n\n", thm.horas, thm.minutos);
}

void ex39()
{
	typedef struct {
		char nome[30];
		float altura;
		float peso;
		double cpf;
		int sexo; // 1 masculino 0 feminino
	} pessoa;

	pessoa cad[100];
	int op = 1, i = 0, j = 0;
	float imc;
	double bcpf;
	while ((op > 0) && (i < 100))
	{
		printf("\nCadastrar Pessoa %i\n\n", i + 1);
		printf("Nome: ");
		getchar();
		fgets(cad[i].nome, 30, stdin);

		printf("Altura(cm): ");
		scanf_s("%f", &cad[i].altura);

		printf("Peso(kg): ");
		scanf_s("%f", &cad[i].peso);

		printf("CPF: ");
		scanf_s("%lf", &cad[i].cpf);

		printf("Sexo: ");
		scanf_s("%i", &cad[i].sexo);
		i++;
		printf("Cadastrar outra pessoa? (1) sim (0) não: ");
		op = leiai();
		getchar();
	}
	system("cls");

	printf("\n\nInforme o CPF para realizar a busca: ", i);
	scanf_s("%lf", &bcpf);

	for (j = 0; j < i; j++) {
		if (bcpf == cad[j].cpf) {
			printf("\nNome: %s", cad[j].nome);
			printf("Altura: %.0f cm", cad[j].altura);
			printf("\nPeso: %.0f kg\n", cad[j].peso);
			imc = cad[j].peso / ((cad[j].altura / 100) * (cad[j].altura / 100));
			printf("\nICM: %.2f\n\n", imc);

		}
	}
}

void ex40()
{
	int cod = 1, quant, v = 0;
	float ptotal = 0.0;

	printf("\n----------[ PRODUTOS ]----------\n");
	printf("\nCod: 1001 - R$ 5.36 - Produto 1");
	printf("\nCod: 1324 - R$ 6.45 - Produto 2");
	printf("\nCod: 6548 - R$ 2.37 - Produto 3");
	printf("\nCod:  987 - R$ 5.32 - Produto 4");
	printf("\nCod: 7623 - R$ 6.45 - Produto 5\n");
	printf("\n--------------------------------\n");

	while (cod >= 0) {
		printf("\nInforme o Código do Produto (-1 para terminar): ");
		cod = leiai();
		if (cod >= 0) {
			if (cod == 1001) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 5.32);
				v = 1;
			}
			if (cod == 1324) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 6.45);
				v = 1;
			}
			if (cod == 6548) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 2.37);
				v = 1;
			}
			if (cod == 987) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 5.32);
				v = 1;
			}
			if (cod == 7623) {
				printf("Informe a quantidade: ");
				quant = leiai();
				ptotal = ptotal + (quant * 6.45);
				v = 1;
			}
			if (v == 0) {
				printf("\nNão existe produto com esse código!\n");
			}
			v = 0;
		}
	}
	printf("\n----------[ PAGAMENTO ]----------\n");
	printf("\nTotal a Pagar: R$ %.2f\n", ptotal);
	printf("\n---------------------------------\n");
}

void escolha()
{
	int ex;
	printf("\nInforme o número do exercício desejado (1 a 40): ");
	ex = leiai();
	system("cls");
	if ((ex > 0) && (ex <= 40))
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
		case 16:
			ex16();
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
		case 20:
			ex20();
			break;
		case 21:
			ex21();
			break;
		case 22:
			ex22();
			break;
		case 23:
			ex23();
			break;
		case 24:
			ex24();
			break;
		case 25:
			ex25();
			break;
		case 26:
			ex26();
			break;
		case 27:
			ex27();
			break;
		case 28:
			ex28();
			break;
		case 29:
			ex29();
			break;
		case 30:
			ex30();
			break;
		case 31:
			ex31();
			break;
		case 32:
			ex32();
			break;
		case 33:
			ex33();
			break;
		case 34:
			ex34();
			break;
		case 35:
			ex35();
			break;
		case 36:
			ex36();
			break;
		case 37:
			ex37();
			break;
		case 38:
			ex38();
			break;
		case 39:
			ex39();
			break;
		case 40:
			ex40();
			break;
		}
	}
	else
	{
		printf("\nNúmero informado nao corresponde a nenhum exercício\n\n");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Função para escolher o exercício ------------------
	
	int op = 1;
	while (op != 0)
	{
		escolha();
		printf("\nDigite 0 para encerrar e 1 para escolher outro exercício: ");
		op = leiai();
		system("cls");
	}

	//---------------------------------------------------
	system("pause");
	return 0;
}