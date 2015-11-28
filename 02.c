/* O número 3.025 possui a seguinte característica: 30 + 25 = 55 e 552= 3 025. Escreva um
programa que escreva todos os números com quatro algarismos que possuem a citada
característica. */

#include <stdlib.h>
#include <stdio.h>

int main() {

  int n = 9999, c = 999, p = 0, s = 0;

  while ( c <= n) {
    p = c / 100;
    s = c % 100;

    if ( (p + s) * (p + s) == c )
    {
      printf("%d\n", c);
    }
    c++;
  }
	return 0;
}
