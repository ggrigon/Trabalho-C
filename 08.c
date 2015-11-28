/*
Uma matriz quadrada é dita triangular se os elementos situados acima de sua diagonal
principal são todos nulos. Escreva um algoritmo que receba uma matriz quadrada [5x5] e
verifique (e mostre) se ela é triangular.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  int m[5][5], i = 0, j = 0, zero = 0;

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      scanf("%d", &m[i][j]);
    }
  }

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      printf("%d\n", m[i][j]);
    }
  }

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      if ( j > i )
      {
        if ( m[i][j] == 0)
        {
          zero++;
        }
      }
    }
  }

    printf("MATRIZ LIDA\n");

    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      {
        printf("%d   ", m[i][j]);
      }
      printf("\n");
    }




  if ( zero == 10)
  {
    printf("Matriz quadrada triangular\n");
  }
  else
  {
    printf("Matriz quadrada NAO eh triangular\n");

  }

	return 0;
}
