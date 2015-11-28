/*
Uma palavra é palíndroma se ela não se altera quando lida da direita para esquerda. Por
exemplo, a palavra “raiar” é palíndroma. Escreva um programa que verifique se uma
palavra dada é palíndroma. Considere, para esta questão, que o a palavra não poderá
ultrapassar 15 caracteres.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  char palavra[15];
  int i = 0, j = 0, k = 0, pal = 0, tpalavra = 0, cont1 = 0;

    printf("Digita uma palavra para ser verificada:\n");
    // gets(pala`vra);
    fgets(palavra, 15, stdin);

    while ( palavra[i] != '\n')
    {
      tpalavra++;
      i++;
    }

     printf("Tamanho da palavra: %d\n", tpalavra);

    j = (tpalavra / 2 );
    k = tpalavra - 1;

    printf("j= %d k= %d\n", j, k);

    for(i=0;i<(tpalavra);i++)
    {
      printf("%d %c\n", i, palavra[i]);
    }


    while ( cont1 < j && k >= j)
    {
      if ( palavra[cont1] == palavra[k] )
      {
        pal++;
      }
      cont1++;
      k--;
    }

    if ( pal == ( tpalavra / 2))
    {
      printf("A palavra eh um palindromo.\n");
    }

	return 0;
}
