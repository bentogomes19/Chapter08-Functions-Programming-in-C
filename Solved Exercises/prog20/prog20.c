#include <stdio.h>
#include <stdlib.h>

/*7. Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmé-
tica desses valores. Terminar a entrada de dados com o valor zero.*/

float media(int k, int soma)
{	
	float media_aritmetica;
	media_aritmetica = (float)soma / k;
	return media_aritmetica;
}

int main()
{
	int n, k = 0, soma = 0;
	float x;
	printf("Digite um valor para n: ");
	scanf("%d", &n);
	while (n!=0)
	{
		k++;
		soma += n;
		printf("Digite um valor para n: ");
		scanf("%d", &n);
	}

	x = media(k, soma);
	printf("Média Aritmética = %.2f", x);

	system("pause");
	return 0;
}