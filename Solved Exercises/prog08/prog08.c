#include <stdio.h>
#include <stdlib.h>
/*14. Crie uma sub-rotina que receba como parâmetro dois vetores de dez elementos inteiros positivos e
mostre o vetor união dos dois primeiros.*/
int vet1[10], vet2[10], uniao[20];


void vetuniao() // Função vetunião
{
	int j = 0;
	for(int i=0; i<10; i++)
	{
		uniao[i] = vet1[i];

	}
	for(int i=10; i<20; i++)
	{
		uniao[i] = vet2[j];
		j++;
	}
	printf("Vetor União = ");

	for(int i = 0; i<20; i++)
	{
		printf("%d ", uniao[i]);
	}
}


int main()
{
	for(int i=0; i<10; i++) // Vetor 01
	{
		printf("Digite um valor para o vetor x[%d]: ", i);
		scanf("%d", &vet1[i]);
	}

	for(int i=0; i<10; i++) // Vetor 02
	{
		printf("Digite um valor para o vetor y[%d]: ", i);
		scanf("%d", &vet2[i]);
	}

	vetuniao();

	system("pause");
	return 0;
}