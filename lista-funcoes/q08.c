#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10        // tamanho do vetor

// preenche vetor de inteiros com números pseudoaleatórios
// entre min e max. retorna o maior valor e atualiza índice
// por referência, indicando a posição do elemento de maior valor
int preencheVetorAleatorio(int * vetor, int tamanho, int min, int max, int * indice);

// imprime vetor de inteiros
// tamanho: número de elementos do vetor
void imprimeVetor(int * vetor, int tamanho);

int main(void)
{
    srand(time(NULL));

    int vetor[TAMANHO_VETOR];
    int min, max, indice;

    printf("\n -> Valor minimo do gerador aleatorio: ");
    scanf("%i", &min);

    printf(" -> Valor maximo do gerador aleatorio: ");
    scanf("%i", &max);

    int maior = preencheVetorAleatorio(vetor, TAMANHO_VETOR, min, max, &indice);
    printf("\n    * Vetor: "); imprimeVetor(vetor, TAMANHO_VETOR);
    printf("\n    * Maior: %i \n    * Indice: %i", maior, indice);

    return 0;
}

// preenche vetor de inteiros com números pseudoaleatórios
// entre min e max. retorna o maior valor e atualiza índice
// por referência, indicando a posição do elemento de maior valor
int preencheVetorAleatorio(int * vetor, int tamanho, int min, int max, int * indice)
{
    int maior;      // armazena o maior valor do vetor

    // verifica necessidade de ajuste dos
    // parâmetros
    if(min > max)
    {
        int aux = min;
        min = max;
        max = aux;
    }

    // início de busca do maior valor, considera o
    // primeiro valor como sendo o maior (único conhecido)
    *indice = 0;
    maior = vetor[*indice] = min + rand() % (max - min +1);    

    // geração dos elementos entre min e max
    for(int i = 1; i < tamanho; i++)
    {
        // preenchimento do vetor
        vetor[i] = min + rand() % (max - min + 1);

        // verificando se maior elemento
        if(vetor[i] > maior)
        {
            // atualização do índice e maior elemento
            maior = vetor[i];
            *indice = i;
        }
    }

    // retorna o maior valor do vetor
    return maior;
}

// imprime vetor de inteiros
// tamanho: número de elementos do vetor
void imprimeVetor(int * vetor, int tamanho)
{
    // exibe elementos do vetor em tela
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}