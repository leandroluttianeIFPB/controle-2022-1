/*
    Exemplo de implementação utilizado para apresentar
    conceitos básicos sobre ponteiros
*/

#include <stdio.h>

int main()
{
    int numA = 5, numB = 10;  // variáveis inteiras
    int * ptrInt;             // declaração de ponteiro para inteiro
                              // ponteiro é uma variável que armazena um endereço

    ptrInt = &numA;   // ponteiro aponta para a variável numA
                      // &numA: endereço da variável numA
                      // ptrInt recebe o endereço de numA

    // Exibição de informações. Valores de numA e numB
    // Endereço de numA e valor de ptrInt (são iguais)
    printf("\n numA: %d numB: %d", numA, numB);
    printf("\n &numA: %p, ptrInt: %p", &numA, ptrInt);

    numB = *ptrInt;  // conteúdo da variável apontada por ptrInt (numA)
                     // é atribuído para a variável numB

    *ptrInt = 20;    // o conteúdo da variável apontada por ptrInt
                     // (numA) recebe o valor 20

    // Exibição de informações.
    printf("\n numA: %d numB: %d", numA, numB);
    printf("\n &numA: %p, ptrInt: %p", &numA, ptrInt);

    return 0;
}
