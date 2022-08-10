/*
    Escreva um programa em linguagem C que possui uma função que receba os três 
    coeficiente de uma equação de segundo grau e retorna o valor de delta, 
    que é computado por b^2 - 4ac.

    A esta questão foi inserido um procedimento que avalia valor de delta e
    imprime em tela informações sobre as raízes de uma equação de segundo grau
*/

#include <stdio.h>

// função que retorna o valor de delta de uma equação do segundo grau
// a, b, c: coeficientes de uma equação do segundo grau
float delta(float a, float b, float c);

// procedimento que imprime informação sobre as variáveis de uma equação 
// do segundo grau
// delta: valor de delta de uma equação do segundo grau
void avaliaRaizes(int delta);

int main()
{
    // coeficientes da equação do segundo grau
    float coefA, coefB, coefC;       

    // entrada do valor do coeficiente a
    printf("\n Digite coeficiente a: ");
    scanf("%f", &coefA);

    // entrada do valor do coeficiente b
    printf("\n Digite coeficiente b: ");
    scanf("%f", &coefB);

    // entrada do valor do coeficiente c
    printf("\n Digite coeficiente c: ");
    scanf("%f", &coefC);

    // cálculo de delta (chamada de função)
    float valor_delta = delta(coefA,coefB,coefC);
    printf("\n Valor de delta: %.2f", valor_delta);

    avaliaRaizes(delta); // chamada de procedimento

    return 0;
}

// implementação da função delta
float delta(float a, float b, float c)
{
    return (b * b) - 4 * a * c;
}

// função que imprime informação sobre as variáveis de uma equação do segundo grau
void avaliaRaizes(int delta)
{
    if(delta  < 0)
    {
        printf("\n Nao possui raizes reais!");
    }
    else if(delta == 0)
    {
        printf("\n Possui duas raizes iguais!");
    }
    else
    {
        printf("\n Possui duas raizes distintas!");
    }
}

