/*
    Escreva um programa em linguagem C que possui uma função que receba um número e
    retorna umconceito.

            NOTA           CONCEITO
       9 <= nota <=10         A 
       7 <= nota < 9          B
        7 < nota              C
*/

#include <stdio.h>

// protótipo da função que retorna um valor de conceito
// dependendo da nota de uma avaliação
// nota: valor de nota
char conceito(float nota);

int main(void)
{   
    float nota_aluno;       // nota do aluno

    // entrada da nota do aluno
    printf("\n Digite sua nota: ");
    scanf("%f", &nota_aluno);

    // chamada de função, exibindo o seu retorno (conceito)
    printf(" Conceito: %c",conceito(nota_aluno));

    return 0;
}

// implementação da função
char conceito(float nota)
{
    // se nota entre 9 e 10
    if(nota >= 9 && nota <= 10)
    {
        // retorna conceito A
        return 'A';
    }
    // se nota maior igual que 7
    else if(nota >=7)
    {
        // retorna conceito B
        return 'B';
    }
    else
    {
        // retorna conceito C
        return 'C';
    }
}