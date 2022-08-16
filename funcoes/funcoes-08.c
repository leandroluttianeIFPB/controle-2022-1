#include <stdio.h>

// protótipo da função
// vetor: vetor de double
// tamanho: número de elementos de vetor
// indice: indice do elemento de maior valor (por referência)
// retorna o valor do maior elemento do vetor
double maiorValor(double vetor [], int tamanho, int * indice);

int main(void)
{
    // declaração e inicialização do vetor (apenas exemplo)
    double vetor [5] = {10.2, 5.7, 15.4, 25.2, 3.0};
    
    int indiceMaior;    // indice do maior elemento do vetor
                        // ainda a ser determinado pela função

    // chamada da função, retornando o maior valor do vetor
    double maior = maiorValor(vetor, 5, &indiceMaior);

    printf("\n Maior elemento: %.3f", maior);
    printf("\n Inice: %d", indiceMaior);

    return 0;
}

// protótipo da função
// vetor: vetor de double
// tamanho: número de elementos de vetor
// indice: indice do elemento de maior valor (por referência)
// retorna o valor do maior elemento do vetor
double maiorValor(double vetor [], int tamanho, int * indice)
{
    double maior = vetor[0];
    *indice = 0;

    for(int i = 1; i < tamanho; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
            *indice = i;
        }
    }

    return maior;
}