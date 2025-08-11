#include <stdio.h>

void torre(int t){
    if(t>0){
        printf("Direita\n"),
        torre(t-1);
    }
}

void bispo(int b){
    if(b>0){
        for (int b1 = 1; b1 > 0; b1--){
            printf("Cima, ");
            for (int b2 = 1; b2 > 0; b2--){
                printf("Direita\n");
            }

    }
    
    bispo(b-1);}
}

void rainha(int r){
    if(r>0){
        printf("Esquerda\n");
        rainha(r-1);
    }
}

int main() 
{
    //Variável para o movimento da torre
    int t1 = 5;

    // Movimento da torre (loop recursivo)
    printf("Torre se move\n");
    torre(t1);

    // Movimento da torre (estrutura while)
    /*while(t < 6) 
    {
        printf("Direita\n");
        t++;
    }
    */

    //Variável para o movimento do bispo
    int b3 = 5;

    //Movimento do bispo (loop recursivo com loop aninhado)
    printf("\n");
    printf("Bispo se move\n");
    bispo(b3);

    
    //Movimento do bispo (estrutura do-while)
    /*do
    {
        printf("Cima, direita\n");
        b++;
    } while(b < 6);*/


    //Variável para o movimento da rainha 
    int r1 = 8;

    //Movimento da rainha (loop recursivo)
    printf("\n");
    printf("Rainha se move\n");
    rainha(r1);
    
    //Movimento da rainha (estrutura for)
    /*for(r = 0; r < 8; r++)
    {
        printf("Esquerda\n");
    }*/

    //Variável para o movimento do cavalo
    int c, c1;

    //Movimento do cavalo (loop complexo)
    printf("\n");
    printf("Cavalo se move\n");
    for(c = 3 , c1 = 3 ; c > 0 || c1 > 0 ; c-- , c1--){
        if(c>0 && c1 != 1){
            printf("Cima\n");}
            else{
            printf("Direita\n");
        }
    }

        

    return 0;
}