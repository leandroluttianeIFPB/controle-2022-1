/*
    Desenvolva uma função que possui como entrada dois números inteiros 𝑥 e 𝑦. 
    A função deve analisar se o número 𝑥 é divisível pelo número 𝑦. Em caso 
    positivo, a função deve retornar o valor 1, caso contrário zero. Escreva um 
    programa para testar a sua função.
*/

#include <stdio.h>

// Funcao que verifica se o número x é divisível por y
// Retorna 1 caso x seja divisível por y e 0 caso contrário
int divisivel(int x, int y);

int main(void)
{
    int x, y;       // declaração de variáveis

    // recebendo valor de x do usuário
    printf("\n -> Digite o valor de x: ");
    scanf("%i", &x);

    // recebendo valor de y do usuário
    printf("\n -> Digite o valor de y: ");
    scanf("%i", &y);

    // verificando se x é divisível por y
    if(divisivel(x, y))
    {
        // x é divisível por y
        printf("\n   * %i e divisivel por %i!", x,y);
    }
    else
    {
        // x não é divisível por y
        printf("\n   * %i nao e divisivel por %i!", x,y);
    }

    return 0;
}

// Funcao que verifica se o número x é divisível por y
// Retorna 1 caso x seja divisível por y e 0 caso contrário
int divisivel(int x, int y)
{
    // utiliza o operador módulo para verificar o resto da divisão inteira
    // se o resto for igual a zero, dizemos que x é divisível por y
    return (x % y == 0);
}