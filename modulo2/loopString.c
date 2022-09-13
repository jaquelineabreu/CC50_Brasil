#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Saída: ");
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     printf("%c", s[i]);
    // }
    //  for (int i = 0; i < strlen(s); i++)
    // {
    //     printf("%c", s[i]);
    // }

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
    printf("\n");
}