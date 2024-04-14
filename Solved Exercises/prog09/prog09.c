#include <stdlib.h>
#include <stdio.h>
/*15. Faça uma sub-rotina que receba como parâmetro um vetor A com cinco números reais e retorne esses
números ordenados de forma crescente.*/
float vet[5];


void ordena()
{
	int aux;
	for(int i =0; i<5; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(vet[j] > vet[j+1])
			{
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
	printf("Vetor em ordem crescente = ");
	for(int i=0; i<5; i++)
	{
		printf("%.2f ", vet[i]);
	}
}


int main()
{
	for(int i = 0; i<5; i++)
	{
		printf("Digite um valor real para o vetor A [%d] = ", i);
		scanf("%f", &vet[i]);
	}

	ordena();
	system("pause");
	return 0;
}