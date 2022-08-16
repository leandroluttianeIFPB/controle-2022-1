/*
    Elabore uma função que recebe como parâmetros
    três vetores de mesma dimensão (vetorA, vetorB e vetorC).
    Esta função deve efetuar a soma vetorial entre os vetores
    A e B e armazenar o resultado no vetor C.

    Implemente também uma função para imprimir o conteúdo
    de um vetor. Após a soma entre os vetores, imprima
    o resultado fazendo uso desta última função.
*/
#include <stdio.h>

// protótipo do procedimento
// vetorA: vetor de inteiros (por referência)
// vetorB: vetor de inteiros (por referência)
// vetorC: vetor de inteiros (por referência)
// tamanho: número de elementos dos vetores (considerando iguais)
void somaVetorial(int vetorA [], int vetorB [], 
                  int vetorC [], int tamanho);

// protótipo da função/procedimento
// vetor: vetor de inteiros (passado por referência)
// tamanho: tamanho do vetor (número de elementos)
void imprimirVetor(int vetor [], int tamanho);

int main(void)
{
    // declaração e inicialização dos vetores
    int vetorA [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorB [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorC [] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 

    // determinando o tamanho de um dos vetores
    // todos possuem o mesmo número de elementos
    int tamanho = sizeof(vetorA) / sizeof(int);

    // chamada de procedimento que calcula a soma vetorial
    // entre vetorA e vetorB
    somaVetorial(vetorA,vetorB,vetorC,tamanho);

    // imprime todos os vetores, incluindo o do resultado (vetorC)
    imprimirVetor(vetorA,tamanho);
    imprimirVetor(vetorB,tamanho);
    imprimirVetor(vetorC,tamanho);

    return 0;
}

// protótipo do procedimento
// vetorA: vetor de inteiros (por referência)
// vetorB: vetor de inteiros (por referência)
// vetorC: vetor de inteiros (por referência)
// tamanho: número de elementos dos vetores (considerando iguais)
void somaVetorial(int vetorA [], int vetorB [], 
                  int vetorC [], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        // soma vetorial: posição a posição
        vetorC[i] = vetorA[i] + vetorB[i];
    }
}

// protótipo da função/procedimento
// vetor: vetor de inteiros (passado por referência)
// tamanho: tamanho do vetor (número de elementos)
void imprimirVetor(int vetor [], int tamanho)
{
    // impressão dos elementos do vetor em tela
    printf("\n Vetor: ");
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}
