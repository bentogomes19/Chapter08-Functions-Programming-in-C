#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*13. Foi realizada uma pesquisa entre 15 habitantes de uma região. Os dados coletados de cada habitante
foram: idade, sexo, salário e número de filhos.
Faça uma sub-rotina que leia esses dados armazenando-os em vetores. Depois, crie sub-rotinas que
recebam esses vetores como parâmetro e retornem a média de salário entre os habitantes, a menor e a
maior idade do grupo e a quantidade de mulheres com três filhos que recebem até R$ 500,00 (utilize
uma sub-rotina para cada cálculo).*/
int idade[15], n_filhos[15];
char sexo[15];
float sal[15];

int qtd_mulher(float sal[], int n_filhos[], int n, char sexo[]) // Quantidade de mulheres com três filhos que recebem até 500 reais
{
	int b = 0;
	for(int i=0; i<n; i++)
	{
		if (sexo[i] == 'F' && n_filhos[i] == 3 && sal[i] <= 500)
		{
			b++;
		}
	}
	return b;
}

int maior_id(int idade[], int n) // A maior e idade 
{
	int maior;
	maior = idade[0];
	for(int i=0; i<n; i++)
	{
		if(idade[i] > maior)
		{
			maior = idade[i];
		}
	}
	return maior;
}

int menor_id(int idade[], int n) // A menor e idade 
{
	int menor;
	menor = idade[0];
	for(int i=0; i<n; i++)
	{
		if(idade[i] < menor)
		{
			menor = idade[i];
		}
	}
	return menor;
}

float media_salario(float sal[], int n) // Média salarial entre os habitantes
{
	float soma_sal = 0, media;
	for(int i=0; i<n; i++)
	{
		soma_sal += sal[i];
	}
	media = soma_sal / n;
	return media;
}

int main()
{
	float m;
	int n = 15, g, q, h;
	for(int i=0; i<15; i++)
	{
		printf("Habitante %d # Digite a sua idade --> ", i+1);
		scanf("	%d", &idade[i]);

		printf("Habitante %d # Digite o seu sexo M|F: ", i+1);
		scanf(" %c", &sexo[i]);
		sexo[i]=toupper(sexo[i]);

		while (sexo[i] != 'M' && sexo[i] != 'F') //Validações 
		{
			printf("Código Inválido... Tente Novamente...\n");
			printf("Habitante %d # Digite o seu sexo M|F: ", i+1);
			scanf(" %c", &sexo[i]);
			sexo[i]=toupper(sexo[i]);
		}

		printf("Habitante %d # Digite o seu salário atual (R$): ", i+1);
		scanf("	%f", &sal[i]);
		printf("Habitante %d # Digite o números de filhos : ", i+1);
		scanf("	%d", &n_filhos[i]);
	}

	m = media_salario(sal, n);
	g = maior_id(idade, n);
	h = menor_id(idade, n);
	q = qtd_mulher(sal, n_filhos, n, sexo);
	printf("A média salarial de todos os habitantes da cidade: R$ %.2f\n", m);
	printf("A maior idade é %d\n", g);
	printf("A menor idade é %d\n", h);
	printf("A Quantidade de mulheres com três filhos e que recebem até 500 reais: %d\n", q);

	system("pause");
	return 0;
}