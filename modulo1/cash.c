#include <cs50.h>
#include <math.h>
#include <stdio.h>

/*
Implemente, em um arquivo chamado cash.c em um diretório ~/pset1/cash, 
um programa que primeiro pergunta ao usuário quanto dinheiro é devido e depois imprime o número mínimo 
de moedas com as quais essa mudança pode ser feita.
*/


int main()
{
    float troco = 0;
    int contaMoeda = 0, calculaMoeda = 0, cont = 0;

    do
    {
        troco = get_float("Troca devida? ");

    }
    while (troco < 0.01 && troco <= 0.00);

    int centavos = round(troco * 100);
    printf("%d \n", centavos);
    calculaMoeda = centavos;

    for (cont = 1; calculaMoeda > 0; cont++)
    {
        if (calculaMoeda >= 25)
        {
            calculaMoeda -= 25;
            contaMoeda++;
            printf("rodada (25) %d\n", calculaMoeda);
        }

        if (calculaMoeda >= 10 && calculaMoeda < 25)
        {
            calculaMoeda -= 10;
            contaMoeda++;
            printf("rodada (10) %d\n", calculaMoeda);
        }

        if (calculaMoeda >= 5 && calculaMoeda <= 10)
        {
            calculaMoeda -= 5;
            contaMoeda++;
            printf("rodada (5) %d\n", calculaMoeda);
        }

        if (calculaMoeda < 5)
        {
            calculaMoeda -= 1;
            contaMoeda++;
            printf("rodada (1) %d\n", calculaMoeda);
        }

    }

    printf("%d\n", calculaMoeda);
    printf("%d\n", contaMoeda);

    return 0;

}