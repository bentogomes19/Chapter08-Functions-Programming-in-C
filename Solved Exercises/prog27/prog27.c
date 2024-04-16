#include <stdio.h>
#include <stdlib.h>

/*22. Criar um programa que:
■■ utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
■■ utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo da sexta linha
dessa matriz;
Os resultados deverão ser mostrados no programa principal.*/
float mat[10][5];

float soma()
{
	float soma = 0;
	for(int i=6; i<10; i++)
	{
		for(int j=0; j<5; j++)
		{
			soma += mat[i][j];
		}
	}
	return soma;
}

void mostrar()
{
	for(int i = 0; i<10; i++)
	{
		printf("\n");
		for(int j=0; j<5; j++)
		{
			printf("\t %.2f", mat[i][j]);
		}
	}
	
}

int main()
{
	float x;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("Digite os valores para a matriz [%d][%d] = ", i ,j);
			scanf("%f", &mat[i][j]);
		}
	}

	mostrar();
	x = soma();
	printf(" O valor da soma dos elementos da matriz 10x5 a partir da sexta linha --> %.2f", x);

	system("pause");
	return 0;
}