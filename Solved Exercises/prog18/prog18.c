#include <stdio.h>
#include <stdlib.h>
/*5. Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.*/

void verificacao(int a)
{
	if (a<0)
	{
		printf("NEGATIVO\n");
	}
	else
	{
		printf("POSITIVO\n");
	}
}

int main()
{
	int a, x;

	printf("Digite um valor para a: ");
	scanf("%d", &a);

	verificacao(a);

	system("pause");
	return 0;
}