/* Um vetor é palíndromo se ele não se altera quando as posições das componentes são
invertidas. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo. Escreva um
algoritmo que leia um vetor de 15 números inteiros e verifique (e mostre) se o vetor lido é
palíndromo.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  int v[15], i = 0, tv = 0, z=0, a = 0;

  for(i=0;i<15;i++)
  {
    scanf("%d", &v[i]);
  }

  // for(i=0;i<15;i++)
  // {
  //   printf("Vetor: %d\n", v[i]);
  //   tv++;
  // }

  for(i=0,z=14;i<7 && i == a;i++,z--)
  {
    if( v[i] == v[z])
    {
      // printf("%d = %d\n", v[i], v[z]);
      a++;
    }
  }

  if ( a++ == 7)
  {
    printf("O vetor lido eh um palindromo.\n");
  }
  else
  {
    printf("O vetor lido NAO eh um palindromo,\n");
  }

	return 0;
}
