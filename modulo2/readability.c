#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
    Seu programa deve contar o número de letras, palavras e frases do texto.
    Implemente um programa que calcule o nível (representado a partir de uma série, como na escola)
    aproximado necessário para compreender algum texto, conforme a seguir.
*/

int main(void)
{
    int i = 0, n = 0, l = 0, p = 0, f = 0;
    //double indice = 0;
    string texto = get_string("Digite o texto: ");

    //Letras
    n = strlen(texto);
    while(i < n)
    {
        if ((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122))
        {
            l++;
        }else{
            if(texto[i] == 32){
            p++;
            }else{
                if(texto[i] == 33 || texto[i] == 63 || texto[i] == 46){
                f++;
            }
            }
        }

       i++;
    }

    printf("\n");

    float L = l / (float) p * 100;
    float S = f / (float) p * 100;
    int indice = (0.0588 * L) - (0.296 * S) - 15.8;
   // int grade = round(indice);

    if(indice >= 1 && indice < 16){
        printf("Grade %d\n", indice);
    }else{
        if(indice >= 16)
        {
          printf("Grade 16+\n");
        }
        else{
            printf("Before Grade 1\n");
        }

    }

    printf("\n");

    return 0;
}

