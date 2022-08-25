#include <stdio.h>

int fatorial(int n);

int main()
{
    int n = 4;

    printf("\n -> Fatorial de %i: %i", n, fatorial(n));

    return 0;
}

int fatorial(int n)
{
    if (n < 0)
        return -1;
    else if(n <= 1)
        return 1;
    else
        return n * fatorial(n - 1);
}