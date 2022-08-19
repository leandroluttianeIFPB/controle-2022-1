#include <stdio.h>

// Verifica se um caractere ch é uma letra do alfabeto
// Retorna 1 se é letra do alfabeto e maiúscula
// Retorna -1 se é letra do alfabeto e minúscula
// Retorna 0 se não é letra do alfabeto
int testeAlfabeto(char ch);

int main(void)
{
    char ch;        // declaração de caractere

    // caractere informado pelo usuário
    printf("\n -> Digite um caractere: ");
    scanf("%c", &ch);

    // chamada de função para avaliar caractere
    int retorno = testeAlfabeto(ch);

    // exibe mensagem de acordo com o valor de retorno
    // da função testeAlfabeto
    switch (retorno)
    {
        case 1:
            printf("   * Letra maiuscula do alfabeto!\n");
            break;        
        case -1:
            printf("   * Letra minuscula do alfabeto!\n");  
            break;  
        default:
            printf("   * O caractere nao e uma letra do alfabeto!");    
            break;
    }

    return 0;
}

// Verifica se um caractere ch é uma letra do alfabeto
// Retorna 1 se é letra do alfabeto e maiúscula
// Retorna -1 se é letra do alfabeto e minúscula
// Retorna 0 se não é letra do alfabeto
int testeAlfabeto(char ch)
{
    // verifica se o caractere é uma letra maiúscula,
    // conforme codificação da tabela ASCII
    if (ch >= 65 && ch <= 90)
    { 
        return 1;
    }
    // verifica se o caractere é uma letra minúscula,
    // conforme codificação da tabela ASCII
    else if(ch >= 97 && ch <= 122)
    {
        return -1;
    }

    // retorna 0 caso o caractere não seja letra do alfabeto
    return 0;
}