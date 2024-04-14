#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*11. Foi realizada uma pesquisa sobre algumas características físicas de cinco habitantes de uma região.
Foram coletados os seguintes dados de cada habitante:
sexo, cor dos olhos (A — azuis; ou C — castanhos), cor dos cabelos (l — louros; P — pretos; ou C — castanhos) e idade.
Faça um programa que apresente as sub-rotinas a seguir:
■■ Que leia esses dados, armazenando-os em vetores.
■■ Que determine e devolva ao programa principal a média de idade das pessoas com olhos castanhos
e cabelos pretos.
■■ Que determine e devolva ao programa principal a maior idade entre os habitantes.
■■ Que determine e devolva ao programa principal a quantidade de indivíduos do sexo feminino com
idade entre 18 e 35 anos (inclusive) e que tenham olhos azuis e cabelos louros.*/
int idade[5];
char sexo[5], olhos[5], cabelo[5];

float media_castanho() // Sub-rotina para calcular a média das idades das pessoas com cabelo preto e olhos castanhos
{
	int k = 0, media, soma_id = 0;
	for (int i=0; i<5; i++)
	{
		if (olhos[i] == 'C' && cabelo[i] == 'P')
		{
			soma_id += idade[i];
			k++;
		}
	}
	media = soma_id / k;
	return media;
}

int maior_id() // Sub-rotina para calcular a maior idade entre os habitantes
{
	int maior;
	maior = idade[0];
	for (int i=0; i<5; i++)
	{
		if (idade[i] > maior)
		{
			maior = idade[i];
		}
	}
	return maior;
}

int qtd() // Sub-rotina para contabilizar a quantidade de pessoas do SEXO :F; IDADE ENTRE 18 E 35; OLHOS: AZUIS; CABELOS: LOIROS
{

	int qtd_ind = 0;

	for(int i=0; i<5; i++)
	{
		if (sexo[i] == 'F' && (idade[i] >= 18 && idade[i] <= 35) && olhos[i] == 'A' && cabelo[i] == 'L' )
		{
			qtd_ind++;
		}
	}
	return qtd_ind;
}


int main()
{
	float m;
	int n, o;
	for (int i=0; i<5; i++)
	{
		printf("\nHabitante %d --> Digite o seu sexo M | F : ", i+1);
		scanf(" %c", &sexo[i]);
		sexo[i]=toupper(sexo[i]);
		while (sexo[i] != 'M' & sexo[i] != 'F') 
		{
			printf("\nCódigo inválido...  Tente novamente\n\n");
			printf("\nHabitante %d --> Digite o seu sexo M | F : ", i+1);
			scanf(" %c", &sexo[i]);
			sexo[i]=toupper(sexo[i]);
		}

		printf("\nHabitante %d --> Digite a cor dos olhos A-AZUL | C-CASTANHO: ", i+1);
		scanf(" %c", &olhos[i]);
		olhos[i]=toupper(olhos[i]);
		while (olhos[i] != 'A' && olhos[i] != 'C')
		{
			printf("\nCódigo inválido... Tente novamente\n\n");
			printf("\nHabitante %d --> Digite a cor dos olhos A-AZUL | C-CASTANHO: ", i+1);
			scanf(" %c", &olhos[i]);
			olhos[i]=toupper(olhos[i]);
		}

		printf("\nHabitante %d --> Digite a cor do seu cabelo | L-LOUROS | P-PRETOS | C-CASTANHO : ", i+1);
		scanf(" %c", &cabelo[i]);
		cabelo[i]=toupper(cabelo[i]);
		while (cabelo[i] != 'L' && cabelo[i] != 'P' && cabelo[i] != 'C')
		{
			printf("\nCódigo inválido... Tente novamente\n\n");
			printf("\nHabitante %d --> Digite a cor do seu cabelo | L-LOUROS | P-PRETOS | C-CASTANHO : ", i+1);
			scanf(" %c", &cabelo[i]);
			cabelo[i]=toupper(cabelo[i]);
		}

		printf("\nHabitante %d --> Digite a sua idade: ", i+1);
		scanf(" %d", &idade[i]);

	}
	m = media_castanho(); // Receber a média

	printf("A média de idade das pessoas com olhos castanhos e cabelos pretos --> %.2f\n", m);

	n = maior_id(); // Receber a maior idade entre os habitantes

	printf("A maior idade entre os habitantes --> %d anos\n", n);

	o = qtd(); // Receber a quantidade de indivíduos

	printf("a quantidade de indivíduos do sexo feminino com idade entre 18 e 35 anos e que tenham olhos azuis e cabelos louros --> %d\n", o);

	system("pause");
	return 0;
}