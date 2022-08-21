#include <stdio.h>

/*
 Módulo 1 - Mundo 1-1 - Mario exercício
 Descrição do exercício:
 Vamos recriar essa pirâmide em C, ainda que em texto, usando hashes ( # ) para tijolos, como visto a seguir. 
 Cada hash é um pouco mais alto do que largo, então a pirâmide em si também é mais alta do que larga.
*/

int main()
{
    int contaLinha, contaColuna, altura;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &altura);
    }
    while ((altura < 1) || (altura > 8));

    for (contaLinha = 1; contaLinha <= altura; contaLinha++)
    {
        for (contaColuna = contaLinha; contaColuna > 0; contaColuna--)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;

}