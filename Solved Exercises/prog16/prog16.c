#include <stdio.h>
#include <stdlib.h>
/*3. Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.*/

int divisor(int n1, int n2)
{
	int y;
	if (n1 % n2 ==0)
	{
		return 0;
	}
	else 
	{
		y = n2+1;
		return y;
	}
}

int main()
{
	int x, n1, n2;

	printf("Digite um valor para n1: ");
	scanf("%d", &n1);
	printf("Digite um valor para n2: ");
	scanf("%d", &n2);

	x = divisor(n1, n2);
	printf("%d\n", x);

	system("pause");
	return 0;
}