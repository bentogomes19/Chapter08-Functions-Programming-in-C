#include <stdio.h>
#include <stdlib.h>
/*15. Elabore uma sub-rotina que receba um vetor X de 15 números inteiros como parâmetro e retorne a
quantidade de valores pares em X.*/
int vet[15];

int par(int vet[]) // função para contar a quantidade de itens pares
{
	int pares = 0;
	for(int i=0; i<15; i++)
	{
		if(vet[i] % 2 == 0)
		{
			pares++;
		}
	}
	return pares;
}

int main() // Função principal
{
	int x;
	for(int i=0; i<15; i++) // Recebendo os 15 valores para o vetor x
	{
		printf("Digite os valores para o vetor X [%d] = ", i);
		scanf("%d", &vet[i]);
	}

	x = par(vet); // chamando a função com o parâmetro

	printf("A quantidade de valores pares no vetor X = %d", x);
	system("pause");
	return 0;
}