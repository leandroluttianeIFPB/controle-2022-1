#include <stdio.h>

// protótipo da função/procedimento
// vetor: vetor de inteiros (passado por referência)
// tamanho: tamanho do vetor (número de elementos)
void imprimirVetor(const int * vetor, int tamanho);

int main()
{
    // declaração e inicialização de vetor
    int vetor [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // determinando o tamanho do vetor a partir do uso de sizeof
    // sizeof retorna tamanho de variável, ou tipo em bytes ocupados na memória
    int tamanho = sizeof(vetor) / sizeof(int);
    
    printf("\n sizeof(vetor): %d", sizeof(vetor));  // tamanho do vetor em bytes
    printf("\n sizeof(int): %d", sizeof(int));      // tamanho de um int em bytes
    printf("\n Tamanho: %d",tamanho);               // tamanho do vetor (posições)

    imprimirVetor(vetor,tamanho);   // chamada do método de impressão de vetor

    return 0;
}

// protótipo da função/procedimento
// vetor: vetor de inteiros (passado por referência)
// tamanho: tamanho do vetor (número de elementos)
void imprimirVetor(const int * vetor, int tamanho)
{
    // impressão do vetor
    printf("\n Vetor: ");
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);        
    }

    // estruturas homogêneas são passadas por referência
    // logo, qualquer alteração no parâmetro reflete na estrutura
    // cujo endereço foi passado como argumento
}