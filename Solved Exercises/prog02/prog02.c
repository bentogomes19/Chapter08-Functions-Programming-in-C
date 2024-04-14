#include <stdio.h>
#include <stdlib.h>

/* 2. Faça um programa contendo uma sub-rotina que receba dois números positivos por parâmetro
e retorne a soma dos N números inteiros existentes entre eles. */


int soma(int a, int b) // Função soma com os parâmetros de a e b localizados na função principal
{

	return a + b;
}

int main()
{
	int a, b, s;
	printf("Digite um número positivo: ");
	scanf("%d", &a);
	printf("Digite um segundo número positivo: ");
	scanf("%d", &b);
	s = soma(a,b);
	printf("A soma de %d + %d = %d\n", a, b, s);


	system("pause");
	return 0;
}