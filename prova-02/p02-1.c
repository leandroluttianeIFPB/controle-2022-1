/*
    P02.1 Escreva um programa em linguagem C leia o tamanho de dois vetores, 
    os dados dos vetores ordenados e mescle-os em um terceiro vetor. O algoritmo
    deve no momento da atribuição, no terceiro vetor, inserir os valores já
    ordenados. Por fim, deve ser impresso o terceiro vetor ordenado. 
*/

#include <stdio.h>

int main()
{
    int tamA, tamB;     // tamanho dos vetores A e B

    // entrada dos tamanhos dos vetores
    printf(" Digite o tamanho de dois vetores: ");
    scanf("%d %d", &tamA, &tamB);

    // declaração dos vetores A, B e C
    int vetorA[tamA], vetorB[tamB], vetorC[tamA + tamB];

    // preenchimento do vetor A (valores fornecidos pelo usuário)
    printf(" Digite os elementos do vetor A (ordenados) \n");
    for (int i = 0; i < tamA; i++)
    {
        printf(" Vetor A[%d]:  ", i);
        scanf("%d", &vetorA[i]);
    }

    // preenchimento do vetor B (valores fornecidos pelo usuário)
    printf("\n Digite os elementos do vetor B (ordenados) \n");
    for (int i = 0; i < tamB; i++)
    {
        printf(" Vetor B[%d]:  ", i);
        scanf("%d", &vetorB[i]);
    }

    // índices que percorrem as posições dos vetores A e B, respectivamente
    int indA = 0, indB = 0;     

    // i é o índice que percorre o vetor C
    for(int i = 0; i < (tamA + tamB); i++)
    {
        // se os vetores A e B não foram totalmente percorridos
        if(indA < tamA && indB < tamB)
        {
            // teste de menor elemento. elemento do vetorA ou 
            // elemento do vetor B
            if(vetorA[indA] < vetorB[indB])
            {
                // insere elemento do vetor A no vetor C e incrementa índice
                // que percorre vetor A
                vetorC[i] = vetorA[indA++]; 
            }
            else
            {
                // insere elemento do vetor B no vetor C e incrementa índice
                // que percorre vetor B
                vetorC[i] = vetorB[indB++]; 
            }
        }
        // algum dos vetores teve todos os seus elementos inseridos no
        // vetor C
        else
        {
            // se ainda há elementos no vetor A
            if(indA < tamA)
            {
                // insere elemento do vetor A no vetor C e
                // incrementa índice que percorre vetor A
                vetorC[i] = vetorA[indA++];
            }
            else
            {
                // insere elemento do vetor B no vetor C e
                // incrementa índice que percorre vetor B
                vetorC[i] = vetorB[indB++]; 
            }
        }
    }

    // imprime o vetor C em tela
    printf("\n Vetor C:");
    for(int i = 0; i < (tamA + tamB); i++)
    {
        printf(" %d ", vetorC[i]);
    }

    return 0;
}