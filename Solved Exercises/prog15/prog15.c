#include <stdio.h>
#include <stdlib.h>

/*2. Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e segundos,
e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.*/

int conversao(int hr, int min, int seg)
{
	int seg1, seg2, convert;
	seg1 = hr * 3600;
	seg2 = min * 60;
	convert = seg1 + seg2 + seg;

	return convert;
}


int main()
{
	int x, hr, min, seg;

	printf("Digite um valor para as horas (Ex.: Valor entre 0 e 24) : ");
	scanf("%d", &hr);
	printf("Digite um valor para os minutos (Ex.: Valor entre 0 e 60) : ");
	scanf("%d", &min);
	printf("Digite um valor para os segundos (Ex.: Valor entre 0 e 60) : ");
	scanf("%d", &seg);

	x = conversao(hr, min, seg);
	printf("%dh, %dmin, %ds equivalem a %d segundos.\n", hr, min, seg, x);


	system("pause");
	return 0;
}