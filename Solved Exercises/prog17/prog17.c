#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*4. Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R3.*/

float volume(float raio)
{
	float vol;
	vol = (pow(raio, 3) * 4)/3;

	return vol;
}



int main()
{
	float x, raio;

	printf("Informe o raio da esfera : ");
	scanf("%f", &raio);

	x = volume(raio);

	printf("O volume da esfera é --> %.2f\n", x);

	system("pause");
	return 0;
}