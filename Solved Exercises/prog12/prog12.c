#include <stdio.h>
#include <stdlib.h>
/*23. Crie um programa que carregue uma matriz 3X4 com números reais. Utilize uma função para copiar
todos os valores da matriz para um vetor de 12 posições. Esse vetor deverá ser mostrado no programa
principal.*/
int mat[3][4], vet[12];

void copiar()
{
	int k = 0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			vet[k] = mat[i][j];
			k++;	
		}
	}
}

int main()
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("Digite um valor para a matriz [%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	copiar();
	printf("Vetor --> ");
	for(int i=0; i<12; i++)
	{
		printf("%d ", vet[i]);
	}

	system("pause");
	return 0;
}