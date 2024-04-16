#include <stdio.h>
#include <stdlib.h>

/*23. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo.
Elabore sub-rotinas para:
■■ determinar se esses lados formam um triângulo (sabe-se que, para ser triângulo, a medida de um
lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois).
■■ determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas formem um triângulo.
Todas as mensagens deverão ser mostradas no programa principal.*/

void det(int a, int b, int c)
{
	if(a >= b+c  || b>= a+c || c>= a+b)
	{
		printf("Não é triângulo...\n");

	}
	else 
	{
		if( a == b && a == c && c == b)
		{
			printf("triângulo Equilátero...\n");
		}
		else if( (a == b) || (b == c) || (c == a))
		{
			printf("Triângulo Isóceles...\n");
		} 
		else
		{
			printf("Triângulo escaleno...\n");
		}
	}
}

int main()
{
	int a, b, c;

	printf("Digite um valor A: ");
	scanf("%d", &a);

	printf("Digite um valor B: ");
	scanf("%d", &b);

	printf("Digite um valor C: ");
	scanf("%d", &c);

	det(a,b,c);
	system("pause");
	return 0;

}
