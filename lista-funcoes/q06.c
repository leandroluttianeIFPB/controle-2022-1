#include <stdio.h>

#define TAMANHO_VETOR 5   // tamanho do vetor

// retorna o somatório de todos os elementos de um vetor
// tamanho: número de elementos do vetor
int somaElementos(int * vetor, int tamanho);

int main(void)
{
    int vetor[TAMANHO_VETOR];       // declaração do vetor

    // entrada de elementos do vetor pelo usuáio
    printf("\n # Digite os elementos do vetor.....  \n");
    for(int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("   -> Vetor[%i]: ", i);
        scanf("%i", &vetor[i]);     // entrada de dados
    }

    // chamada do método para soma de elementos
    int soma_elementos = somaElementos(vetor, TAMANHO_VETOR);
    printf("\n * Soma dos elementos do vetor: %i", soma_elementos);

    return 0;
}

// retorna o somatório de todos os elementos de um vetor
// tamanho: número de elementos do vetor
int somaElementos(int * vetor, int tamanho)
{
    int soma = 0;   // acumulador do somatório

    for(int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];   // soma de elementos
    }

    return soma;    // retorna o resultado
}