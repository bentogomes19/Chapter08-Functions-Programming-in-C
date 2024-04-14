#include <stdio.h>
#include <stdlib.h>
/*17. Faça uma sub-rotina que receba como parâmetro uma matriz A(5,5) e retorne a soma de seus elementos.*/
int mat[5][5];
	
void matx() // Mostrar os valores da matriz
{
	for(int i=0; i<5; i++)
	{
		printf("\n");
		for(int j=0; j<5; j++)
		{
			printf("\t %d", mat[i][j]);
		}
	}
}

int soma() // Somar todos os resultados da matriz
{	
	int total = 0;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			total += mat[i][j];
		}
	}
	return total;
}


int main()
{
	int x;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("Digite um valor para a matriz [%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	matx();
	x = soma();
	printf("A soma dos valores da matriz é igual a --> %d\n", x);

	system("pause");
	return 0;
}