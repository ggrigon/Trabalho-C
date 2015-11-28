/*
Textos podem conter mensagens ocultas. Neste problema a mensagem oculta em um
texto é composto pelas primeiras letras de cada palavra do texto, na ordem em que
aparecem.
É dado um texto composto apenas por letras minúsculas ou espaços. Pode haver mais de
um espaço entre as palavras. O texto pode iniciar ou terminar em espaços, ou mesmo
conter somente espaços.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  char nome[50];
  int n = 0, i = 0,  t = 0, c = 0, j = 0, flag = 0, spc = 0, spcd = 0;

  printf("Quantidade de codigos a serem testados:");
  scanf("%d", &n);

  while (i <= n)
  {
    fgets(nome,50,stdin);

    for(c = 0;nome[c] != '\n'; c++)
    {
      t++;
    }

    for(c=0;c<t;c++)
    {
      if (nome[c] == ' ')
      {
        spc++;
      }
    }

    printf("Total de espaços: %d\n", spc);
    printf("Total de caracteres: %d\n", t);

    // FLAG 1 = mais caracteres do que espacos
    // FLAG 2 = mais espacos do que caracteres

    if ( t - spc > t/2 )
    {
      flag = 1;
      printf("FLAG 1\n");
    }
    else
    {
      flag = 2;
      printf("FLAG 2\n");
    }

    if ( flag == 1 )
    {
      if ( j == 0 && nome[j] != ' ' )
      {
        printf("%c", nome[j]);
      }
      j++;

      while ( j < t)
      {
        // printf("Testando letra: %c\n", nome[j]);
        if ( nome[j] != ' ')
        {
          // printf("espaco\n");
        }
        else
        {
          while ( nome[j] == ' ' ) // procura a proximo posicao com um caracter
          {
            j++;
          }
          printf("%c", nome[j]); // imprime o caracter, apos os espacos
        }
        j++;
      }
    }

    else // FLAG = 2
    {
      if ( j == 0 && nome[j] == ' ')
      {
        j++;
      }

      while ( j < t )
      {
        if (nome[j] != ' ')
        {
          while ( nome[j] == ' ' ) // procura a proximo posicao com um caracter
          {
            j++;
          }
          printf("%c", nome[j]);
        }
        j++;

      }

    }


    i++;
    c = 0;
    spc = 0;
    t = 0;
    j = 0;
    printf("\n");

  }

	return 0;
}
