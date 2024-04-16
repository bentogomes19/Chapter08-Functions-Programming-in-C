#include <stdio.h>
/*19. Faça uma sub-rotina que receba como parâmetro dois vetores de dez números inteiros, determine e mostre o vetor intersecção entre eles.*/
int vetx[10], vety[10], intersec[10];

void inter()
{
    int k = 0;
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(vetx[i] == vety[j])  
            {
                intersec[k] = vetx[i];
                k++;
            }
        }
        
    }

    printf("Vetor Intersecção: ");
    for(int i=0; i<k; i++)
    {
        printf("%d ", intersec[i]);
    }
}


int main()
{
    for (int i=0; i<10; i++) //Vetor X
    {
        printf("Digite um valor para o vetor x [%d]: ", i);
        scanf("%d", &vetx[i]);
    }

    for(int i=0; i<10; i++) // Vetor Y
    {
        printf("Digite um valor para o vetor y [%d]: ", i);
        scanf("%d", &vety[i]);
    }

    inter();
    return 0;

}