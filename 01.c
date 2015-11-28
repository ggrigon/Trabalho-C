/*
Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus
divisores. Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12, 6 é
perfeito. A matemática ainda não sabe se a quantidade de números perfeitos é ou não
finita. Escreva um programa que liste todos os números perfeitos menores que um inteiro
n dado.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  int x = 0, n = 0, div = 1, aux = 0, total = 0;
  scanf("%d", &x );

while ( x > 0)
{
    while ( x >= div)
    {
      if ( x % div == 0)
      {
        aux+= div;
        div++;
      }
      else
      {
        div++;
      }
      total = x * 2;
    }
    if ( total == aux )
    {
      printf("%d é perfeito\n", x);
    }
  total = 0;
  aux = 0;
  div = 1;
  x--;
  }
	return 0;
}
