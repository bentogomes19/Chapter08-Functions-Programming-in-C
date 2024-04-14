#include <stdlib.h>
#include <stdio.h>
/* EXERCÍCIOS PROPOSTOS 1. Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro
e retorne a soma dos números inteiros existentes entre o número 1 e N (inclusive).*/

int soma(int n)
{
	int k=0;
	for(int i=1; i<=n; i++)
	{
		if(i<=n)
		{
			k += i;
		}
	}
	return k;
}


int main()
{
	int n, x;
	printf("Digite um número n qualquer: ");
	scanf("%d", &n);

	x = soma(n);
	printf("A soma entre os números 1 e %d é %d\n", n, x);

	system("pause");
	return 0;
}