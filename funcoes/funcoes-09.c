#include <stdio.h>

#define FINAL 3

void imprime(int * numero, int final);

int main()
{
    int num = 0;    

    imprime(&num, FINAL);

    // execucao das proximas linhas de codigo

    return 0;
}

void imprime(int * numero, int final)
{    
    printf("\n Valor: %i", (*numero)++);
    if(*numero != (final + 1))
        imprime(numero,final);
    else
        return;
}