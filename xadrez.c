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
    printf("Bispo se move\n");
    
    do
    {
        printf("Cima, direita\n");
        b++;
    } while(b < 6);


    //Variável para o movimento da rainha 
    int r;

    //Movimento da rainha (estrutura for)
    printf("Rainha se move\n");
    
    for(r = 0; r < 8; r++)
    {
        printf("Direita\n");
    }

        

    return 0;
}