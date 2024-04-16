#include <stdio.h>
/*16. Faça uma sub-rotina que receba um vetor X de 20 de números reais como parâmetro e retorne a soma
dos elementos de X.*/
int vet[20];

int soma(int vet[])
{
    int somat = 0;
    for(int i=0; i<20; i++)
    {
        somat += vet[i];
    }

    return somat;
}

int main()
{
    int x;
    for(int i=0; i<20; i++)
    {
        printf("Digite um valor para o vetor X [%d]: ", i);
        scanf("%d", &vet[i]);
    }
    x = soma(vet);
    
    printf("A soma dos elementos de X é --> %d", x);

    return 0;
}