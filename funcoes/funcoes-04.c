/*
    Escreva um programa em linguagem C que possui uma função que receba os três lados
    de um triângulo e calcula a sua área. Considere a fórmula de Hero para cômputo da área.
    S equivale a metade do perímetro.

        area = sqrt(s * (s-a) * (s-b) * (s-c))
*/


#include <stdio.h>
#include <math.h>

// protótipo de função que calcula a área de um triângulo a partir do
// comprimento de seus três lados a, b e c
float calculaArea(float a, float b, float c);

// protótipo de função que calcula o perímetro de um triângulo a partir do
// comprimento de seus três lados a, b e c
float calculaPerimetro(float a, float b, float c);

int main()
{
    float a, b, c;    // lados do triângulo
    float area;       // armazena a área calculada do triângulo

    a = b = c = 5;    // valores para teste (triângulo equilátero)

    area = calculaArea(a,b,c);      // chamada de função para cálculo de área
    printf("\n Area: %.2f", area);  // exibe área calculada do triângulo

    return 0;
}

// implementação de função que calcula a área de um triângulo
// a partir do comprimento de seus lados a, b e c
float calculaArea(float a, float b, float c)
{
    float s = calculaPerimetro(a,b,c);            // chamada de função que calcula perímetro
    return sqrt(s * (s - a) * (s -b) * (s - c));  // retorn valor da área
}

// implementação de função que calcula o perímetro de um triângulo
// a partir do comprimento de seus lados a, b e c
float calculaPerimetro(float a, float b, float c)
{
    return a + b + c;   // retorna o perímetro (soma dos lados)
}