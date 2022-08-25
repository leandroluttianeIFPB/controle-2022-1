/*
    Utilizando recursividade, elabore uma função 
    para calcular e retornar a soma de todos os 
    elementos de um vetor de reais
*/

#include <stdio.h>

#define TAMANHO_VETOR 5

float somaElementos(float * vetor, int n);

int main(void)
{
    float vetor [TAMANHO_VETOR] = {1, -1, 10, -5, 2.5};

    float soma = somaElementos(vetor, TAMANHO_VETOR);

    printf("\n Soma elementos: %.2f", soma);

    return 0;
}


float somaElementos(float * vetor, int n)
{
    if(n == 1)
    {
        return vetor[n-1];
    }

    return vetor[n-1] + somaElementos(vetor, n-1);
}