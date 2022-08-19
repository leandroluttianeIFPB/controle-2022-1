#include <stdio.h>

// calcula o fatorial do número n
// retorna -1, caso o fatorial não exista
int fatorial(int n);

// calcula a combinação simples de n tomados de p em p
// retorna -1, caso a combinação não exista
int combinacao(int n, int p);

int main(void)
{
    int n, p;

    printf("\n -> Digite o valor de n <int>: ");
    scanf("%i", &n);

    printf(" -> Digite o valor de p <int>: ");
    scanf("%i", &p);

    int comb = combinacao(n, p);
    if(comb != -1)
    {
        printf("    * Combinacao de %i elementos tomados de %i em %i: %i ", n, p, p, comb);
    }
    else
    {
        printf("    * Combinacao invalida! ");
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

// calcula a combinação simples de n tomados de p em p
// retorna -1, caso a combinação não exista
int combinacao(int n, int p)
{
    // verifica se a combinação simples existe
    if(n >= p && (n > 0 && p > 0))
    {
        // calcula a combinação de n p a p
        return fatorial(n) / (fatorial(p) * fatorial(n - p));
    }
    else
    {
        // combinação simples solicitada não existe
        return -1;
    }
}