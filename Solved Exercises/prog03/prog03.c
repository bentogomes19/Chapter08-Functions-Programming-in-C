#include <stdlib.h>
#include <stdio.h>
/*4. Faça uma sub-rotina que receba um único valor representando segundos.
Essa sub-rotina deverá convertê-lo para horas, minutos e segundos. 
Todas as variáveis devem ser passadas como parâmetro, não havendo variáveis globais.*/

void conversao(float seg, float min, float hr)
{
	hr = seg / 3600;
	min = seg / 60;
	printf("Conversão de Segundos para horas --> %.2f\n", hr);
	printf("Conversão de Segundos para minutos --> %.2f\n", min);
}

int main()
{
	float seg, min, hr;
	printf("Digite um tempo em segundos: ");
	scanf("%f", &seg);
	conversao(seg, min, hr);

	system("pause");
	return 0;
}