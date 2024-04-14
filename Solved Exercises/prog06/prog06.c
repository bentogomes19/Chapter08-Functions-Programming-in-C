#include <stdio.h>
#include <stdlib.h>
/*9. Faça uma sub-rotina que leia cinco valores inteiros, determine e mostre o maior e o menor deles.*/

int vet[5];

void maior_menor()
{
	int maior, menor;
	maior = vet[0];
	menor = vet[0];
	for (int i=0; i<5; i++)
	{
		if (vet[i] > maior)
		{
			maior = vet[i];
		}
		else if (vet[i] < menor)
		{
			menor = vet[i];
		}
	}
	printf("Maior valor --> %d\n", maior);
	printf("Menor valor --> %d\n", menor);
}



int main()
{
	for(int i=0; i<5; i++)
	{
		printf("Digite um número inteiro: ");
		scanf("%d", &vet[i]);
	}

	maior_menor();


	system("pause");
	return 0;
}