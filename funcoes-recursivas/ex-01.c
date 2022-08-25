/*
   Implemente uma função que calcule o fatorial de um
   número de maneira recursiva
*/

#include <stdio.h>

int fatorial(int n);

int main(void)
{
    int n;

    printf("\n -> Digite o valor de n <int>: ");
    scanf("%i", &n);

    int fat = fatorial(n);

    printf("    * Fatorial de %i: %i",n,fat);

    return 0;
}

int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fatorial(n - 1);
}