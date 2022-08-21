#include <cs50.h>
//lib CC50
#include <stdio.h>
int main(void)
{
     string answer = get_string("Qual é o seu nome?");
     printf("olá, %s", answer);
}