#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int letras = 0, palavras = 1, frases = 0;

    string texto = get_string("Texto: ");
    int tamanhoTexto = strlen(texto);

    for (int i = 0; i < tamanhoTexto; i++)
    {
        if (isalpha(texto[i]))
        {
            letras++;
        }
        else if (texto[i] == ' ')
        {
            palavras++;
        }
        else if (texto[i] == '!' || texto[i] == '?' || texto[i] == '.')
        {
            frases++;
        }

    }

    float L = ((float) letras / palavras) * 100;
    float S = ((float) frases / palavras) * 100;
    float indice = (0.0588 * L - 0.296 * S - 15.8);
    int grade = round(indice);


    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}