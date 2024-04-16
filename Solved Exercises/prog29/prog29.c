#include <stdio.h>
#include <stdlib.h>

/*24. Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um vetor. O
programa deverá calcular e mostrar a maior e a menor temperatura do ano, junto com o mês em que elas
ocorreram (o mês deverá ser mostrado por extenso: 1 = janeiro; 2 = fevereiro; ...).*/
float vet[12];

void mes()
{
	int maior_mes, menor_mes;
	float maior, menor;

	maior = vet[0];
	menor = vet[0];

	for(int i=0; i<12; i++)
	{
		if(vet[i] > maior)
		{
			maior = vet[i];
			maior_mes = i;
		}
		if (vet[i] < menor)
		{
			menor = vet[i];
			menor_mes = i;
		}
	}
	printf("A maior temperatura do ano foi --> %.2f\n", maior);
	if (maior_mes==0)
	{
		printf("JANEIRO...\n");
	}
	if (maior_mes==1)
	{
		printf("FEVEREIRO...\n");
	}
	if (maior_mes==2)
	{
		printf("MARÇO...\n");
	}
	if (maior_mes==3)
	{
		printf("ABRIL...\n");
	}
	if (maior_mes==4)
	{
		printf("MAIO...\n");
	}
	if (maior_mes==5)
	{
		printf("JUNHO...\n");
	}
	if (maior_mes==6)
	{
		printf("JULHO...\n");
	}
	if (maior_mes==7)
	{
		printf("AGOSTO...\n");
	}
	if (maior_mes==8)
	{
		printf("SETEMBRO...\n");
	}
	if (maior_mes==9)
	{
		printf("OUTUBRO...\n");
	}
	if (maior_mes==10)
	{
		printf("NOVEMBRO...\n");
	}
	if (maior_mes==11)
	{
		printf("DEZEMBRO...\n");
	}

	printf("A menor temperatura do ano foi --> %.2f\n", menor);
	if (menor_mes==0)
	{
		printf("JANEIRO...\n");
	}
	if (menor_mes==1)
	{
		printf("FEVEREIRO...\n");
	}
	if (menor_mes==2)
	{
		printf("MARÇO...\n");
	}
	if (menor_mes==3)
	{
		printf("ABRIL...\n");
	}
	if (menor_mes==4)
	{
		printf("MAIO...\n");
	}
	if (menor_mes==5)
	{
		printf("JUNHO...\n");
	}
	if (menor_mes==6)
	{
		printf("JULHO...\n");
	}
	if (menor_mes==7)
	{
		printf("AGOSTO...\n");
	}
	if (menor_mes==8)
	{
		printf("SETEMBRO...\n");
	}
	if (menor_mes==9)
	{
		printf("OUTUBRO...\n");
	}
	if (menor_mes==10)
	{
		printf("NOVEMBRO...\n");
	}
	if (menor_mes==11)
	{
		printf("DEZEMBRO...\n");
	}
}

int main()
{
	for(int i=0; i<12; i++)
	{
		printf("Digite a temperatura média no mês %d --> ", i+1);
		scanf("%f", &vet[i]);
	}
	mes();

	system("pause");
	return 0;
}