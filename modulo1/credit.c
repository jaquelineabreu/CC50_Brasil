#include <cs50.h>
#include <math.h>
#include <stdio.h>

/*
    Algoritmo de Luhn
    Neste exercicio nao podera ser usado função, vetores ou matrizes.

    Então, qual é a fórmula secreta? Bem, a maioria dos cartões usa um algoritmo inventado por Hans Peter Luhn, da IBM. 
    De acordo com o algoritmo de Luhn, você pode determinar se um número de cartão de crédito é (sintaticamente) válido da seguinte maneira:

    Multiplique cada segundo digito por 2, começando com o penúltimo dígito do número e, em seguida, some os dígitos desses produtos.
    Adicione essa soma à soma dos dígitos que não foram multiplicados por 2.
    Se o último dígito do total for 0 (ou, mais formalmente, se o módulo total 10 for congruente com 0), o número é válido!
    Isso é meio confuso, então vamos tentar um exemplo com o cartão Visa do David: 4003600000000014.

*/

int main()
{

    long numero = 0, calculo = 0, resto = 0, bandeira = 0;
    int contador = 0, cont = 0, calculaPar = 0, calculaImpar = 0, calculaParRes = 0, calculaImparRes = 0, separaProduto = 0,
        calcula = 0, contaDigito = 0, digito1 = 0, digito2 = 0, calculaInicio = 0;

    numero = get_long("Digite o numero do cartão: ");
    resto = numero;
    bandeira = numero;

    //Algoritmo de Luhn
    while (numero != 0)
    {
        contador++;
        resto = numero;
        resto = resto % 10;
        numero = numero / 10;

    //vamos multiplicar cada um dos dígitos sublinhados por 2 e
     if (contador % 2 == 0)
     {
        calculaPar = resto * 2;
         if (calculaPar < 9)
         {
            calculaParRes += calculaPar;
         }
        //adicionar os dígitos desses produtos (ou seja, não os próprios produtos)
         else
         {
           calculaParRes++;
           separaProduto = calculaPar - 10;
           calculaParRes += separaProduto;
         }
      }

     //soma dos dígitos que não foram multiplicados por 2
     if (contador%2 != 0)
     {
        calculaImparRes += resto;
     }

   }

    //Verifica se o cartão é valido
    if (contador > 13 && contador < 17)
    {
        calcula = calculaParRes + calculaImparRes;
        calcula = calcula % 10;
        if (calcula == 0){
            //Verifica bandeira
            calculaInicio = contador - 2;
            while (contaDigito < contador)
            {
                resto = bandeira;
                resto = resto % 10;
                bandeira = bandeira / 10;
                if (contaDigito == calculaInicio + 1)
                {
                    digito1 = resto;
                }

                if (contaDigito == calculaInicio + 2)
                {
                    digito2 = resto;
                }

                contaDigito ++;
            }

          
            //AMEX
            if(digito1 == 3 && digito2 == 7)
            {
                    printf("AMEX\n");
            }
            //AMEX
            if(digito1 == 3 || digito2 == 4)
            {
                    printf("AMEX\n");
            }


           //VISA
           if (digito1 == 4)
           {
                printf("VISA\n");
           }

          
            //MASTERCARD
            if (digito1 == 5 && digito2 == 1)
            {
                    printf("MASTERCARD\n");
            }

            //MASTERCARD
            if (digito1 == 5 && digito2 == 2)
            {
                    printf("MASTERCARD\n");
            }

            //MASTERCARD
            if (digito1 == 5 && digito2 == 3)
            {
                    printf("MASTERCARD\n");
            }

            //MASTERCARD
            if (digito1 == 5 && digito2 == 4)
            {
                    printf("MASTERCARD\n");
            }

            //MASTERCARD
            if (digito1 == 5 && digito2 == 5)
            {
                    printf("MASTERCARD\n");
            }
           

          if (digito1 < 3 || digito1 > 5)
          {
            printf("INVALID\n");
          }
        }

        }
        else
        {
        printf("INVALID\n");
        }

    return 0;
}