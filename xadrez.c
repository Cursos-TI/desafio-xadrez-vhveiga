#include <stdio.h>

int main() 
{
    //Variável para o movimento da torre
    int t = 1;

    // Movimento da torre (estrutura while)
    printf("Torre se move\n");
    
    while(t < 6) 
    {
        printf("Direita\n");
        t++;
    }

    //Variável para o movimento do bispo
    int b = 1;

    //Movimento do bispo (estrutura do-while)
    printf("\n");
    printf("Bispo se move\n");
    
    do
    {
        printf("Cima, direita\n");
        b++;
    } while(b < 6);


    //Variável para o movimento da rainha 
    int r;

    //Movimento da rainha (estrutura for)
    printf("\n");
    printf("Rainha se move\n");
    
    for(r = 0; r < 8; r++)
    {
        printf("Esquerda\n");
    }

    //Variável para o movimento do cavalo
    int c;

    //Movimento do cavalo (loop aninhado)
    printf("\n");
    printf("Cavalo se move\n");
    for(c = 1; c <= 1; c++)
    {
        int c1 = 1;
        while(c1 <= 2)
        {
            printf("Baixo\n");
            c1++;
        }
        printf("Esquerda\n");
    }
        

    return 0;
}