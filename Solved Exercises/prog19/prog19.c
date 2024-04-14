#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*6. Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7.*/

float peso_ideal(float alt, char sexo)
{
	int peso;
	if (sexo == 'M')
	{
		peso = (72.7 * alt) - 58;
	}
	if (sexo == 'F')
	{
		peso = (62.1 * alt) - 44.7;
	}

	return peso;
}


int main()
{
	float x, alt;
	char sexo;
	printf("Digite a sua altura (m): ");
	scanf("%f", &alt);
	fflush(stdin);

	printf("Digite o seu sexo M/F: ");
	scanf("%c", &sexo);
	sexo=toupper(sexo);
	fflush(stdin);

	while(sexo != 'M' && sexo != 'F')
	{
		printf("Código inválido... Tente novamente...\n");
		printf("Digite o seu sexo M/F: ");
		scanf("%c", &sexo);
		sexo=toupper(sexo);
		fflush(stdin);
	}

	x = peso_ideal(alt, sexo);

	printf("O seu peso ideal seria de %.2f Kg\n", x);

	system("pause");
	return 0;
}