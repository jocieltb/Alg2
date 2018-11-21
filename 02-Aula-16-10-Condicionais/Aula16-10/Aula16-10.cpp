// Aula16-10.cpp : Define o ponto de entrada para a aplicação de console.
//

#include <iostream>
#include "stdafx.h"
#include <stdlib.h>


int main()
{
	/*CONDICIONAIS

	[Operadores]

		"==" igual
		"!=" diferente (não igual)
		"<" menor
		">" maior
		"<=" menor igual
		">=" maior ou igual

	[Conectores lógicos]

		"e" &&
		"ou" ||
	*/

	int a = 0;

	if (a == 0)
	{
		printf("A variavel (a) eh igual a zero\n\n");
	}
	if (a != 0)
	{
		printf("A variavel (a) eh diferente a zero");
	}
	system("pause");

	return 0;
}

