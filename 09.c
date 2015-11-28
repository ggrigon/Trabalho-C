/*
Escreva um programa que determine o menor valor de cada uma das linhas de uma matriz
[3][4] e
forneça o índice da coluna que contém este menor valor.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  int m[3][4], i = 0, j = 0, menor = 0, maior = 0, coluna = 0, resp[3][3], k = 0, l = 0, z = 0;

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      scanf("%d", &m[i][j]);
      if ( m[i][j] > maior)
      {
        maior = m[i][j];
      }
    }
  }

  menor = maior ;

  printf("Maior valor para comparar sera: %d\n", maior);

    printf("MATRIZ LIDA\n");

    for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
      {
        printf("%d   ", m[i][j]);
      }
      printf("\n");
    }

      i = 0;
      j = 0;


      while ( i < 3)
      {
        while ( j < 4 )
        {
          if ( m[i][j] < menor )
          {
            // printf("%d menor que %d\n", m[i][j], maior);
            menor = m[i][j];
            resp[k][l] = i; // recebe a linha
            l++;
            resp[k][l] = menor; // recebe o numero
            l++;
            resp[k][l] = j; // recebe a coluna
          }
          j++;
          l = 0;
        }
        menor = maior;
        j = 0;
        k++;
        i++;
      }

      // humanizar valores, mostrar o valor do usuário e não a posição de indice
      // i = 0;
      // while ( i < 3 )
      // {
      //   resp[i][0] += 1;
      //   i++;
      // }

      i=0;
      printf("Linha | Menor Valor | Coluna\n");
      while ( i < 3)
      {
        printf("  %d          %d         %d  \n", resp[i][0], resp[i][1], resp[i][2] );
        i++;
      }

	return 0;
}
