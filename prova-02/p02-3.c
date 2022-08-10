/*
    P02.3 Escreva um programa em linguagem C que leia um vetor de dez números
    inteiros e imprima o valor da maior soma possível de elementos consecutivos.
    Por exemplo, o vetor com os elementos [0, 18, 20, -7, 12, -5, -22, 0, -2, 3, 1]
    possui como soma máxima o valor 43, que seria equivalente a soma dos elementos
    consecutivos [18, 20, -7, 12].
*/

#include <stdio.h>

#define N_ELEMENTOS 10

int main()
{
    // vetor de exemplo (poderia solicitar para o usuário 
    // informar todos os elementos do vetor)
    int vetor[N_ELEMENTOS] = {18, 20, -7, 12, -5, -22, 0, -2, 3, 1};

    int max_soma = vetor[0];                // armazena maior soma calculada
    int indInic = 0, indFim = 0, soma;      // índices iniciais e finais da maior soma
                                            // soma de sequência de números a ser avaliada

    // percorre os elementos do vetor (do início ao fim)
    for(int i = 0; i < N_ELEMENTOS; i++)
    {
        soma = 0;    // inicializa variável de soma

        // calcula soma das sequências de números 
        // iniciadas na posição i
        for(int j = i; j < 10; j++)
        {
            soma += vetor[j];   // cálculo de somatório de elementos

            // se a soma for maior que a soma máxima já calculada
            if(soma > max_soma)
            {
                max_soma = soma;        // atualiza soma máxima
                indInic = i;            // índice inicial da sequência
                indFim = j;             // índice final da sequência 
            }
        }
    }

    // exibe valor da maior soma de elementos do vetor
    printf("\n Soma: %d\n Elementos: ", max_soma);

    // exibe os elementos da sequência que geram a soma máxima
    for(int i = indInic; i <= indFim; i++)
    {
        printf(" %d ", vetor[i]);
    }

    return 0;
}