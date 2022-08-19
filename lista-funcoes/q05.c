#include <stdio.h>

// verifica se a, b e c formam o triângulo e, em caso positivo,
// retorna o tipo de triângulo formado
// 1 - caso o triângulo seja equilátero
// 2 - caso o triângulo seja isósceles
// 3 - caso o triângulo seja escaleno
// 0 - caso a, b e c não formem um triângulo
int triangulo(float a, float b, float c);

int main(void)
{
    float a, b, c;

    printf("\n -> Digite os tres valores: ");
    scanf("%f %f %f", &a, &b, &c);

    int retorno = triangulo(a, b, c);

    switch (retorno)
    {
        case 1:
            printf("  * Formam os lados de um triangulo EQUILATERO!");
            break;
        case 2:
            printf("  * Formam os lados de um triangulo ISOSCELES!");
            break;
        case 3:
            printf("  * Formam os lados de um triangulo ESCALENO!");
            break;
        default:
            printf("  * Nao formam um triangulo!");
            break;
    };

    return 0;
}

// verifica se a, b e c formam o triângulo e, em caso positivo,
// retorna o tipo de triângulo formado
// 1 - caso o triângulo seja equilátero
// 2 - caso o triângulo seja isósceles
// 3 - caso o triângulo seja escaleno
// -1 - caso a, b e c não formem um triângulo
int triangulo(float a, float b, float c)
{
    // verifica condição de formação de triângulo
    if(a < (b+c) && b < (a+c) && c < (a+b))
    {
        // verifica se triângulo equilátero
        if (a == b && b == c)
        {
            return 1;
        }
        // verifica se triângulo escaleno
        else if (a != b && b != c)
        {            
            return 3;
        }
        else
        {
            // triângulo isósceles
            return 2;
        }
    }
    else
    {
        // a, b e c não formam um triângulo
        return 0;
    }

}