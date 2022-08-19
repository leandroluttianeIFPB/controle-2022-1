#include <stdio.h>

#define TAMANHO_VETOR 5   // tamanho do vetor

// imprime vetor em tela
// tamanho: número de elementos do vetor
// ordem: se 1 imprime vetor na ordem direta, caso
//        contrário imprime na ordem inversa
int imprimeVetor(int * vetor, int tamanho, int ordem);

int main(void)
{
    // declaração e inicialização do vetor
    int vetor[TAMANHO_VETOR] = {10, 5, 9, 3, 2};

    // imprime os vetores na ordem direta e inversa, respectivamete
    printf("\n * Vetor: "); imprimeVetor(vetor,TAMANHO_VETOR,1);
    printf("\n * Vetor: "); imprimeVetor(vetor,TAMANHO_VETOR,0);

    return 0;
}

// imprime vetor em tela
// tamanho: número de elementos do vetor
// ordem: se 1 imprime vetor na ordem direta, caso
//        contrário imprime na ordem inversa
int imprimeVetor(int * vetor, int tamanho, int ordem)
{
    // verifica ordem de impressão
    if(ordem == 1)
    {
        // impressão em ordem direta
        for(int i = 0; i < tamanho; i++)
        {
            printf("%d ", vetor[i]);
        }
    }
    else
    {
        // impressão em ordem inversa
        for(int i = (tamanho - 1); i >= 0; i--)
        {
            printf("%d ", vetor[i]);
        }
    }
}