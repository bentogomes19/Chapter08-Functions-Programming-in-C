#include <stdio.h>
#include <stdlib.h>
/*18. Crie uma sub-rotina que receba como parâmetro uma matriz A(6,6) e retorne o menor elemento de
sua diagonal secundária.*/
int mat[6][6];

int menor_elemento() // Função para encontrar o menor elemento da diagonal secundária
{
	int menor;
	menor = mat[0][0];
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<6; j++)
		{
			if(i==j && mat[i][j] < menor)
			{
				menor = mat[i][j];
			}
		}
	}
	return menor;
}


void mostrar()
{
	for(int i=0; i<6; i++)
	{
		printf("\n");
		for(int j=0; j<6; j++)
		{
			printf("\t %d", mat[i][j]);
		}
	}
}

int main()
{
	int x;
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<6; j++)
		{
			printf("Digite um valor para a Matriz A [%d][%d] : ",i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	mostrar();
	x = menor_elemento();

	printf("\nO menor elemento da matriz A da sua diagonal secundária é %d.\n", x);

	system("pause");
	return 0;
}