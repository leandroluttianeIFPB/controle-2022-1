/*
    P02.2 Escreva um programa em linguagem C que simule um jogo de batalha
    naval. O algoritmo deve simular uma batalha naval em que os navios estão
    dispostos em uma estrutura homogênea bidimensional (matriz) de ordem 15x15,
    o nosso tabuleiro. Cada navio é representado por um espaço preenchido na
    matriz. Temos navios que ocupam um, dois ou três posições horizontais.
    Serão distribuídos aleatoriamente, sem sobreposição, um total de 2 navios
    com três posições, 3 com duas posições e 5 com uma posição. Cada usuário
    terá um total de vinte tentativas. Cada tentativa é representada por um par
    de números que representam a linha e coluna do tabuleiro. O algoritmo deve,
    a cada tentativa, exibir uma matriz de ordem 15x15 com as posições escolhidas
    pelo usuário e se o usuário acertar parte de algum navio, deve ser exibido
    um “X”, caso contrário deve ser impresso um hífen “ - ”, para cada posição
    do tabuleiro. Ao fim das tentativas, o algoritmo deve exibir o tabuleiro com
    a disposição de todos os navios e a quantidade de acertos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM_TABULEIRO  15       // dimensão do tabuleiro
#define LIM_TENTATIVAS 20       // limite de tentativas

#define SEM_NAVIO 0     // posição do tabuleiro sem navio
#define COM_NAVIO 1     // posição do tabuleiro com navio
#define ACERTO    2     // posição do tabuleiro com acerto
#define ERRO     -1     // posição do tabuleiro com erro

#define N_TIPOS_NAVIOS      3    // número de tipos de navios
#define N_NAVIOS_POSICOES   17   // número total de posições ocupadas
                                 // pelos navios

#define TRUE  1          // valor verdadeiro (TRUE)
#define FALSE 0          // valor falso (FALSE)

int main()
{
    srand(time(NULL));   // inicialização do gerador pseudoaleatório

    // inicialização do tabuleiro sem navios
    int tabuleiro[DIM_TABULEIRO][DIM_TABULEIRO] = {SEM_NAVIO};

    // quantidade de posições ocupadas por cada tipo de navio.
    // Há navios que ocupam 3 posições duas posições e uma única posição
    const int N_POSICOES [N_TIPOS_NAVIOS] = {3, 2, 1};    

    // número de navios de cada tipo: 2 de três posições, 3 de duas posições
    // e 5 de apenas uma posição
    int n_navios [N_TIPOS_NAVIOS] = {2, 3, 5};

    // posicionamento dos navios, inicia com os navios de três posições
    for(int i = 0; i < N_TIPOS_NAVIOS; i++)
    {
        // enquanto todos os navios de um determinado tipo i
        // não tiverem sido posicionados no tabuleiro
        while(n_navios[i] > 0)
        {
            // posicionamento de um navio de N_POSICOES[i] posições
            while(TRUE)
            {                
                int linha = rand() % DIM_TABULEIRO;     // seleção aleatória da linha do tabuleiro
                int coluna = rand() % DIM_TABULEIRO;    // seleção aleatória da coluna do tabuleiro

                // se a posição do tabuleiro estiver sem navio posicionado
                // esta posição corresponde ou a posição mais à esquerda do navio
                // ou a posição mais à direita do navio
                if(tabuleiro[linha][coluna] == SEM_NAVIO)
                {
                    // se o navio se encaixa não ultrapassa limite direito do tabuleiro
                    if(coluna + (N_POSICOES[i] - 1) < DIM_TABULEIRO)
                    {
                        // considera inicialmente que o posicionamento é livre (hipótese)
                        // não há navio previamente posicionado na posição sorteada,
                        // considerando o tamanho do navio
                        int posicionamento_livre = TRUE;        // flag de posicionamento

                        // laço para confirmar que o posicionamento é livre
                        for(int j = coluna + 1; j < (coluna + N_POSICOES[i]); j++)
                        {
                            // se encontrar alguma posição ocupada para o posicionamento
                            if(tabuleiro[linha][j] != SEM_NAVIO)
                            {
                                // seta flag para FALSO: o posicionamento sorteado
                                // não é livre
                                posicionamento_livre = FALSE;
                            }    
                        }    

                        // se o posicionamento se confirmar livre
                        if (posicionamento_livre)
                        {
                            // efetua o posicionamento do navio de acordo com
                            // o seu tamanho (número de posições ocupadas)
                            for(int j = coluna; j < coluna + N_POSICOES[i]; j++)
                            {
                                // posicionamento de navio no tabuleiro
                                tabuleiro[linha][j] = COM_NAVIO;
                            }
                            
                            // saída do laço de repetição (while) com
                            // a inserção de um navio no tabuleiro
                            break;
                        }                      
                    }
                    // caso o posicionamento gerado randomicamente ultrapasse
                    // o limite direito, testa-se o limite esquerdo do tabuleiro
                    // se o navio não ultrapassa o limite esquerdo do tabuleiro
                    else if(coluna - (N_POSICOES[i] - 1) >= 0)
                    {
                        // considera inicialmente que o posicionamento é livre (hipótese)
                        // não há navio previamente posicionado na posição sorteada,
                        // considerando o tamanho do navio
                        int posicionamento_livre = TRUE;        // flag de posicionamento

                        // laço para confirmar que o posicionamento é livre
                        for(int j = coluna - 1; j >= 0; j--)
                        {
                            // se encontrar alguma posição ocupada para o posicionamento
                            if(tabuleiro[linha][j] != SEM_NAVIO)
                            {
                                // seta flag para FALSO: o posicionamento sorteado
                                // não é livre
                                posicionamento_livre = FALSE;
                            }
                        }

                        // se o posicionamento se confirmar livre
                        if (posicionamento_livre)
                        {
                            // efetua o posicionamento do navio de acordo com
                            // o seu tamanho (número de posições ocupadas)
                            for(int j = coluna; j >= coluna - (N_POSICOES[i] - 1); j--)
                            {
                                // posicionamento de navio no tabuleiro
                                tabuleiro[linha][j] = COM_NAVIO;                                
                            }

                            // saída do laço de repetição (while) com
                            // a inserção de um navio no tabuleiro
                            break;
                        }  
                    }
                }
            }
            // decrementa o número de navios do tipo i a serem
            // posicionados no tabuleiro
            n_navios[i]--;
        }
    }    

    int tentativas = 0; // número de tentativas efetuadas
    int n_acertos = 0;   // número de acertos nas tentativas

    // realização de tentativas
    while(tentativas < LIM_TENTATIVAS)
    {
        int linha, coluna;      // linha e coluna informados pelo jogador
                                // tentativa do usuário

        // linhas e colunas entre 1 e 15
        printf("\n\nTentativa %d. Digite linha e coluna (15x15): ", tentativas + 1);
        scanf("%d%d", &linha, &coluna); 

        // verifica o estado da posição selecionada na tentativa
        if(tabuleiro[linha-1][coluna-1] == SEM_NAVIO)
        {
            // erro: não há navio na posição
            tabuleiro[linha-1][coluna-1] = ERRO;
        }
        else if(tabuleiro[linha-1][coluna-1] == COM_NAVIO)
        {
            // acerto: há navio na posição
            tabuleiro[linha-1][coluna-1] = ACERTO;
            n_acertos++;
        }

        // exibe o tabuleiro em tela
        for(int i = 0; i < DIM_TABULEIRO; i++)
        {
            printf("\n");
            for(int j = 0; j < DIM_TABULEIRO; j++)
            {
                switch(tabuleiro[i][j])
                {
                    case ERRO:
                        // imprime posição de tentativa errada
                        printf("-  ");
                        break;
                    case ACERTO:
                        // imprime posição de tentativa com acerto
                        printf("X  ");
                        break;
                    default:  
                        // imprime posição que ainda não foi tentada
                        printf("0  ");
                        break;             
                };                
            }
        }  

        // verifica se todas as posições de navios foram
        // acertadas
        if(n_acertos == N_NAVIOS_POSICOES)
        {
            printf("\n\n Parabens! Voce afundou todos os navios!");
            break;
        }

        // incrementa contador de tentativas realizadas
        tentativas++;
    } 

    printf("\n");
    // verifica se todos os navios foram atingidos
    if(n_acertos != N_NAVIOS_POSICOES)
    {
        // caso contrário, exibe tabuleiro com o
        // posicionamento dos navios, erros e acertos do usuário
        for(int i = 0; i < DIM_TABULEIRO; i++)
        {
            printf("\n");
            for(int j = 0; j < DIM_TABULEIRO; j++)
            {
                switch(tabuleiro[i][j])
                {
                    case ERRO:
                        // imprime posição de tentativa errada
                        printf("-  ");
                        break;
                    case ACERTO:
                        // imprime posição de tentativa com acerto
                        printf("X  ");
                        break;
                    default:  
                        // imprime posição que ainda não foi tentada
                        // com navio 1, ou sem navio 0
                        printf("%d  ",tabuleiro[i][j]);
                        break;             
                };                
            }
        }        
    }

    return 0;
}