#include <stdio.h>
#include <stdlib.h>
/* 1. Faça um programa contendo uma sub-rotina que retorne 1 se o número digitado for positivo ou 0 se
for negativo.*/
int num, x;

int test()
{
	if(num >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}


int main()
{
	printf("Digite um número: ");
	scanf("%d", &num);

	x = test();
	if (x == 0)
	{
		printf("Número negativo\n");
	}
	else 
	{
		printf("Número positivo\n");
	}

	system("pause");
	return 0;
}