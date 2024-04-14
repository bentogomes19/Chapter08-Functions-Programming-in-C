#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*7. Elabore um programa contendo uma sub-rotina que receba as três notas de um aluno como parâmetros e uma letra.
Se a letra for A, a sub-rotina deverá calcular a média aritmética das notas do aluno; se
for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. A média calculada deverá ser devolvida
ao programa principal para, então, ser mostrada.*/

float calcular_media(float n1, float n2, float n3, char op)
{
	float media;
	if (op == 'A')
	{
		media = (n1+n2+n3) / 3;
	}
	else if (op == 'P')
	{
		media = (n1*5 + n2*3 + n3*2) / 10;
	}

	return media;
}

int main()
{
	float n1, n2, n3, m;
	char op;
	printf("Digite a nota 01: ");
	scanf("%f", &n1);
	printf("Digite a nota 02: ");
	scanf("%f", &n2);
	printf("Digite a nota 03: ");
	scanf("%f", &n3);

	printf("Digite uma letra A/P: ");
	scanf(" %c", &op);
	op=toupper(op);
	while (op != 'A' && op != 'P')
	{
		printf("Código inválido... Tente novamente\n\n");
		printf("Digite uma letra A/P: ");
		scanf(" %c", &op);
		op=toupper(op);
	}
	m = calcular_media(n1, n2, n3, op);
	printf("A média foi --> %.2f\n", m);

	system("pause");
	return 0;
}