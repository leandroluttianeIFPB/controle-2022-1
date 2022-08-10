/*
    Implemente uma função/procedimento que realiza a troca de valores 
    entre duas variáveis. Dica: utilize passagem de parâmetro por 
    referência. Assim, será possível alterar o valor armazenado
    em uma variável que não faz parte do escopo da função/procedimento
*/

#include <stdio.h>

// protótipo ou assinatura do procedimento
// a e b: ponteiros de inteiro, fazendo com que os
//        a passagem de parâmetros seja efetuada por referência
// Na passagem por referência o parâmetro formal refere-se a um
// endereço e não a um valor
void trocaValores(int * a, int * b);

int main()
{
    // variáveis que terão os seus valores trocados
    // pelo procedimento de troca de valores
    int varA = 2, varB = 5;

    // sequência de comandos para esclarecimento de conceitos

    // 1. Exibe os valores (conteúdo) das variáveis A e B
    printf("\n Antes de chamada: varA = %d, varB = %d ", varA, varB);

    // 2. Exibe os endereços dos espaços de memória alocados para
    //    as variáveis varA e varB. O uso do operador unário de endereço & 
    //    na frente de qualquer variável, retorna o endereço da variável
    printf("\n Enderecos: varA = %p, varB = %p ", &varA, &varB);

    // 3. Exibe os valores das variáveis varA e varB. O operador de derreferenciação
    //    * quando aplicado a um endereço, exibe o conteudo armazenado neste
    //    endereço de memória. Assim, *(&varA) corresponde ao conteúdo
    //    armazenado no endereço da variável varA. Ou seja, a própria variável varA.
    printf("\n Valores: varA = %d, varB = %d ", *(&varA), *(&varB));

    // chamada do procedimento de troca de valores
    // deve-se passar um endereço quando a passagem de parâmetro 
    // se dá por referência. Assim, são utilizados &varA e &varB,
    // os endereços das variáveis varA e varB
    trocaValores(&varA,&varB);

    // exibe os valores das variáveis varA e varB
    // pode-se notar que a troca de valores ocorreu no interio da função
    printf("\n Apos chamada: a = %d, b = %d ", varA, varB);

    return 0;
}

// Implementação do procedimento trocaValores
// a e b: ponteiros de inteiro, fazendo com que os
//        a passagem de parâmetros seja efetuada por referência
// Na passagem por referência o parâmetro formal refere-se a um
// endereço e não a um valor
void trocaValores(int * a, int * b)
{
    // utilizado apenas para demonstrar que os valores dos 
    // parâmetros a e b correspondem aos endereços das variáveis
    // passadas por referência (não faz parte da lógica do procedimento)
    printf("\n Valores: ptrB = %p, ptrB = %p", a, b);

    int aux = *a;       // auxiliar recebe o valor da variável apontada por a (varA)
    *a = *b;            // a variável apontada por a (varA) recebe o valor 
                        // da variável apontada por b (varB)
    
    *b = aux;           // a variável apontada por b (varB) recebe o valor de aux
}







