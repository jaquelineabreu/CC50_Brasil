#include <cs50.h>
#include <stdio.h>


const int TOTAL = 3;
int main(void)
{
    // int scores[3];
    // scores[0] = get_int("Pontuação:");
    // scores[1] = get_int("Pontuação:");
    // scores[2] = get_int("Pontuação:");
    // // Imprimir média
    // printf ("Média: %f \n", (scores[0] + scores[1] + scores[2]) / 3.0);


    // int scores[TOTAL];
    // for (int i = 0; i < TOTAL; i ++)
    // {
    //      scores[i] = get_int("Pontuação:");
    // }
    // // Imprimir média
    // printf ("Média: %d \n", (scores[0] + scores[1] + scores[2]) / TOTAL);

    int soma = 0, quantidade = 0, array[3] = {1, 2, 3};
     for (int i = 0; i < quantidade; i++)
     {
            soma += array[i];
     }
     return soma / (float) quantidade;
}