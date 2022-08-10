/*
    Escreva um programa em linguagem C que possui um procedimento que receba um número
    e imprima em tela o dia da semana correspondente ao número. Caso o número informado
    não corresponda a umdia da semana, umamensagem de erro deve ser gerada.
*/

#include<stdio.h>

// assinatura ou protótipo do procedimento (sem retorno - tipo void)
// dia: valor numérico referente ao dia da semana
void exibirDiaSemana(int dia);   

int main()
{
    // recebe valor numérico referente ao dia da semana
    int dia_semana;     

    // entrada de valor numérico
    printf("\n Dia da semana <int - 1 a 7>: ");
    scanf("%d", &dia_semana);  

    // chamada do procedimento
    exibirDiaSemana(dia_semana);
    
    return 0;
}

// implementação da função sem retorno (procedimento)
// dia: valor numérico referente ao dia da semana
void exibirDiaSemana(int dia)
{
    // analisa o valor do parâmetro dia e
    // imprime o dia da semana correspondente
    switch(dia)
    {
        case 1:  // valor referente ao domingo
            printf("\n Dia da semana: domingo!");
            break;
        case 2:  // valor referente à segunda-feira
            printf("\n Dia da semana: segunda-feira!");
            break;
        case 3:  // valor referente à terça-feira
            printf("\n Dia da semana: terca-feira!");
            break;
        case 4:  // valor referente à quarta-feira
            printf("\n Dia da semana: quarta-feira!");
            break;
        case 5:  // valor referente à quinta-feira
            printf("\n Dia da semana: quinta-feira!");
            break;
        case 6:  // valor referente à sexta-feira
            printf("\n Dia da semana: sexta-feira!");
            break;
        case 7:  // valor referente à sábado
            printf("\n Dia da semana: sabado!");
            break;
        default:  // qualquer valor inválido
            printf("\n ERRO: valor invalido para dia da semana!");
            break;
    };
}