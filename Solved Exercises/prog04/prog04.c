#include <stdlib.h>
#include <stdio.h>

/*5. Crie um programa que receba os valores antigo e atual de um produto. Chame uma sub-rotina que
determine o percentual de acréscimo entre esses valores. O resultado deverá ser mostrado no programa
principal.*/

void perc(float preco_antigo, float preco_atual, float percentual)
{

	percentual = (preco_atual - preco_antigo) / preco_antigo * 100;
	printf("Percentual de aumento %.2f %%\n", percentual);

	if (preco_antigo == preco_atual)
	{
		printf("Não houve aumento pois o preço se manteve o mesmo\n");
	}
}

int main()
{
	float preco_antigo, preco_atual, percentual;

	printf("Digite o preço antigo do produto (R$): ");
	scanf("%f", &preco_antigo);
	printf("Digite o preço atual do produto (R$): ");
	scanf("%f", &preco_atual);
	perc(preco_antigo, preco_atual, percentual);

	system("pause");
	return 0;

}