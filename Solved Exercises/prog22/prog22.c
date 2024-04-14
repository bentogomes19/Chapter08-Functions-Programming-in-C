#include <stdlib.h>
#include <stdio.h>
/*14. Faça uma sub-rotina que receba um vetor X de 30 elementos inteiros como parâmetro e retorne dois
vetores A e B.
O vetor A deve conter os elementos de X que sejam maiores que zero e o vetor B,
os elementos menores ou iguais a zero.*/
int vetx[30], veta[30], vetb[30];


void vetor_ab(int vetx[])
{
	int k =0, j = 0;
	for(int i=0; i<30; i++)
	{
		if(vetx[i] > 0)
		{
			veta[k] = vetx[i];
			k++;
		}
		else if(vetx[i] < 0)
		{
			vetb[j] = vetx[i];
			j++;
		}
	}
	printf("\nVetor A = ");
	for(int i=0; i<k; i++)
	{
		printf("%d ", veta[i]);
	}
	printf("\nVetor B = ");
	for (int i=0; i<j; i++)
	{
		printf("%d ", vetb[i]);
	}
}

int main()
{
	for(int i=0; i<30; i++)
	{
		printf("Digite os valores para o vetor x [%d] = ", i);
		scanf("%d", &vetx[i]);
	}
	vetor_ab(vetx);


	system("pause");
	return 0;
}