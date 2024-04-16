#include <stdio.h>
#include <stdlib.h>
/*20. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o
número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual
de pessoas com salário inferior a R$ 380,00.*/

int filhos;
float sal, soma_sal2 = 0, perc;
float soma_sal = 0, maior, soma_filhos = 0;
int n;
float media1, media2, x;

void medias() // função medias
{
	media1 = soma_sal / n;
	media2 = soma_filhos / n;
	x = maior;
	perc = (soma_sal2 / n) * 100;
	printf("O valor da média dos salários --> R$ %.2f\n", media1);
	printf("O valor da média do número de filhos --> %.2f\n", media2);
	printf("O maior salário informado --> R$ %.2f\n", x);
	printf("O percentual de pessoas com salário inferior a R$ 380 -->  %.2f%%\n", perc);

}

int main()
{

	printf("Digite a quantidade de habitantes na cidade: ");
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		printf("Habitante %d --> Digite o seu salário (R$): ", i+1);
		scanf("%f", &sal);

		printf("Habitante %d --> Digite a quantidade de filhos: ", i+1);
		scanf("%d", &filhos);
		soma_sal += sal;
		soma_filhos += filhos;
		if (i==0)
		{
			maior = sal;
		}
		if(sal > maior)
		{	
			maior = sal;
		}
		if (sal < 380) 
		{
			soma_sal2 ++;
		}
	}

	medias(); // Chamando a função 

	system("pause");

	return 0;
}