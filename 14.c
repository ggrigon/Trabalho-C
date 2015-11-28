/*
O problema dos cubos de algarismos. O número 153 é igual à soma dos cubos de seus
algarismos, ou seja: 1 + 5 +3 = 1 + 125 +27 = 153 .Existem outros números de três
algarismos com a mesma propriedade? Se existirem, quais são? Faça um algoritmo que
responda esta questão. Obs1. Não considere números com zeros à esquerda como 001.
Ob2. O algoritmo não deve receber nenhuma entrada.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
  int n = 100, c = 0, d = 0, u = 0;

  while ( n <= 999 )
  {
    c = n / 100;
    d = (n % 100 ) / 10;
    u = n % 10;

    if ( pow(c,3) + pow(d,3) + pow(u,3) == n )
    {
    printf("%d\n", n);
    }
    n++;
  }

	return 0;
}
