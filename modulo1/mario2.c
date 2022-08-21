#include <stdio.h>
#include <cs50.h>
//lib CC50

int main()
{
    int contaLinha, contaColuna, altura;

    do
    {
       altura = get_int("Digite um numero positivo: ");
    }
    while ((altura < 1) || (altura > 8));

    int i=0,valor = 8;
    i = valor;
    for (contaLinha = 1; contaLinha <= altura; contaLinha++)
    {
        while(i > 0){
        if(i<=valor-contaLinha){
            printf(".");
        }
        else{
            printf("#");
        }

            // if(i = ){

            // }
           // printf("%d", i);

            i--;
        }

        // for (contaColuna = contaLinha; contaColuna > 0; contaColuna--)
        // {

        //     printf("#");
        // }
        printf("\n");


    }

    return 0;

}