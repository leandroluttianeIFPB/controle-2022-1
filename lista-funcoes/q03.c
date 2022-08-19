#include <stdio.h>

// calcula o fatorial do número n
// retorna -1, caso o fatorial não exista
int fatorial(int n);

int main(void)
{
    int numero;     // variável numérica

    // entrada de valor pelo usuário
    printf("\n -> Calcule o fatorial de: ");
    scanf("%d", &numero);

    // chamada de função para cálculo de fatorial
    int fat = fatorial(numero);

    // verifica se fatorial existe
    if(fat != -1)
    {
        printf("   * O fatorial de %i e: %i.",numero,fat);
    }
    else
    {
        // fatorial existe: exibe o resultado
        printf("\n   * Nao existe fatorial de %i!",numero);
    }

    return 0;
}

// calcula o fatorial do número n
// retorna -1, caso o fatorial não exista
int fatorial(int n)
{
    // verifica se o fatorial de n existe
    if(n >= 0)
    {
        int fat = 1;  // variável com valor do fatorial de n

        for(int i = 1; i <= n; i++)
        {
            fat *= i;   // cálculo do fatorial
        }

        return fat;
    }
    else
    {
        // fatorial de n não existe
        return -1;
    }
}