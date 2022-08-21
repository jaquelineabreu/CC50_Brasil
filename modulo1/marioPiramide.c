#include <stdio.h>

/*
 Módulo 1 - Mundo 1-1 - Mario desafio
 Descrição do desafio:
 Vamos recriar essas pirâmides em C, ainda que em texto, usando hashes ( # ) para tijolos, a la a seguir. 
 Cada hash é um pouco mais alto do que largo, então as pirâmides em si também são mais altas do que largas.
*/

int main()
{
    int contaLinha, contaColuna, altura, aux;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &altura);
    }
    while ((altura < 1) || (altura > 8));

    aux = altura-1;
    for (contaLinha = 1; contaLinha <= altura; contaLinha++)
    {
        printf("  ");
        for (contaColuna = aux; contaColuna > 0; contaColuna--)
        {
            printf(" ");

        }

        for (contaColuna = contaLinha; contaColuna > 0; contaColuna--)
        {
             printf("#");
        }

        printf("  ");

        for (contaColuna = contaLinha; contaColuna > 0; contaColuna--)
        {
             printf("#");
        }

        printf("\n");
        aux--;
    }

    return 0;

}