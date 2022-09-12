#include <cs50.h>
#include <stdio.h>

/*
  Por exemplo, se começarmos com n = 1.200 lhamas, no primeiro ano, 1.200 / 3 = 400 novas lhamas nascerão e 1.200 / 4 = 300 lhamas morrerão.
  No final daquele ano, teríamos 1.200 + 400 - 300 = 1.300 lhamas.
  Para tentar outro exemplo, se começarmos com n = 1000 lhamas, no final do ano teremos 1000/3 = 333,33 novas lhamas.
  Não podemos ter uma parte decimal de uma lhama, entretanto, vamos truncar o decimal para que 333 novas lhamas nasçam.
  1000/4 = 250 lhamas passarão, então terminaremos com um total de 1000 + 333 - 250 = 1083 lhamas no final do ano.
*/

int main(void)
{
      // TODO: Solicite o valor inicial ao usuário
      int nInicial,nFinal,lhamasMortas, lhamasNovas, calculoLhamas = 0, n = 0, somaLhamas = 0;
      do
      {
        nInicial = get_int("Tamanho inicial da população: ");
      }
      while (nInicial < 9);

      // TODO: Solicite o valor final ao usuário
      do
      {
        nFinal = get_int("Tamanho final da população: ");
      }
      while (nFinal < nInicial);



      // TODO: Calcule o número de anos até o limite
     somaLhamas = nInicial;
     while(somaLhamas < nFinal){
        n++;
        lhamasNovas = somaLhamas/3;
        lhamasMortas = somaLhamas/4;
        calculoLhamas = lhamasNovas - lhamasMortas;
        somaLhamas += calculoLhamas;
      }


     // TODO: Imprima o número de anos
     printf("Years: %i", n);

     return 0;

}