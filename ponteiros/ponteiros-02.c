/*
    Exemplo utilizado para demonstrar que o identificador
    de um vetor (estrutura homogênea) corresponde a um
    ponteiro que aponta para a primeira posição do vetor
*/

#include <stdio.h>

int main()
{
    // vetor de inteiros de 5 elementos
    int vetor [5] = {10, 1, 2, 3, 4};   

    // exibe o valor da primeira posição do vetor
    printf("\n -> vetor[0] = %d ", vetor[0]);
    
    // exibe o valor do nome do vetor (ponteiro): um endereço
    printf("\n -> vetor = %p", vetor);
    
    // exibe o conteúdo presente no endereço de memória
    // apontado pelo ponteiro vetor (primeira posição do vetor)
    printf("\n -> *vetor = %d ", *vetor);

    vetor[0] = 20;   // atribui valor para primeiro elemento do vetor
    
    // exibe o primeiro elemento do vetor de d
    // duas maneiras diferentes
    printf("\n -> vetor[0] = %d ", vetor[0]);
    printf("\n -> *vetor = %d ", *vetor);

    // exibe o endereço da primeira posição do vetor
    // que é igual ao endereço armazenado pelo ponteiro vetor
    printf("\n -> &vetor[0] = %p, vetor = %p", &vetor[0], vetor); 

    printf("\n\n -> Vetor = ");
    // usando aritmética de ponteiros para percorrer vetor
    for(int i=0; i < 5; i++)
    {
        printf("%d ", *(vetor + i));
    }

    return 0;
}