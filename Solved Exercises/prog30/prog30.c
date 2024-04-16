#include <stdio.h>
#include <stdlib.h>

/*25. Crie um programa que receba o número dos 10 alunos de uma sala, armazenando-os em um vetor, junto
com as notas obtidas ao longo do semestre (foram realizadas quatro avaliações). Elabore sub-rotinas para:
■■ determinar e mostrar a média aritmética de todos os alunos;
■■ indicar os números dos alunos que deverão fazer recuperação, ou seja, aqueles com média inferior a 6.*/
int vet[10];
int n;
float soma_med[10], n1, n2, n3, n4, med[10];

void medias()
{
	printf("Médias dos alunos: \n");
	for(int i=0; i<10; i++)
	{
		med[i] = soma_med[i] / 4;
		if(med[i] < 6)
		{
			printf("Aluno: #%d --> Recuperação\n", vet[i]);
		}
		printf("Aluno # %d --> Média: %.2f\n", vet[i], med[i]);

	}

}	

int main()
{
	for(int i=0; i<10; i++)
	{
		printf("Aluno %d # Digite o seu número: ", i+1);
		scanf("%d", &vet[i]);

		printf("Aluno %d # Digite a nota 1: ", i+1);
		scanf("%f", &n1);

		printf("Aluno %d # Digite a nota 2: ", i+1);
		scanf("%f", &n2);

		printf("Aluno %d # Digite a nota 3: ", i+1);
		scanf("%f", &n3);

		printf("Aluno %d # Digite a nota 4: ", i+1);
		scanf("%f", &n4);
		soma_med[i] = (n1 + n2 + n3 + n4);


	}
	medias();

	system("pause");
	return 0;
}