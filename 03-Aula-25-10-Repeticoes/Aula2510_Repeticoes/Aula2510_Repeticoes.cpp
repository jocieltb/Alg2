// Aula2510_Repeticoes.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int n[5];
	while (a < 5)
	{
		printf("Informe um numero inteiro: ");
		scanf_s("%i", &n[a]);
		printf("%i\n", a);
		a++;
	}
	//int i = 0;
	if ((n[0] < n[1]) && (n[1] < n[2]) && (n[2] < n[3]) && (n[3] < n[4]))
	{
		printf("Esta em ordem crescente\n\n");
	}
	else
	{
		printf("Esta em ordem não crescente\n\n");
	}
	system("pause");
    return 0;
}

