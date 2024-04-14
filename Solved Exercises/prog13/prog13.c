#include <stdio.h>
#include <stdlib.h>
/*25. Crie uma sub-rotina que receba como parâmetro um vetor A de 25 números inteiros e substitua todos os
valores negativos de A por zero. O vetor resultante deverá ser mostrado no programa principal.*/
int vet[25], result[25];

void resultante()
{
	for(int i=0; i<25; i++)
	{
		if (vet[i]<0)
		{
			result[i] = 0;
		}
		else
		{
			result[i] = vet[i];
		}
	}
}


int main()
{
	for(int i=0; i<25; i++)
	{
		printf("Digite um valor para o vetor A [%d] = ", i);
		scanf("%d", &vet[i]);
	}
	resultante();

	printf("Vetor Resultante = ");
	for(int i=0; i<25; i++)
	{
		printf("%d ", result[i]);
	}

	system("pause");
	return 0;
}