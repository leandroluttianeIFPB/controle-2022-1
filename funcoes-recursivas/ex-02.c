/*
   Implemente uma função recursiva que recebe 
   dois valores inteiros positivos x e y e retorna 
   o valor da potência x^y (x elevado a y, em que 
   x é a base e y o expoente)
*/

#include <stdio.h>

int potencia(int x, int y);

int main(void)
{
    int x, y;

    printf("\n Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    int pot = potencia(x, y);

    printf("\n Valor de %i elevado a %i: %i",x,y,pot);

    return 0;
}

int potencia(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    
    return x * potencia(x, y - 1);
}