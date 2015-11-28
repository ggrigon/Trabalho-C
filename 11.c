/*
Escreva um programa que converta um número do sistema binário, dado como uma cadeia
de zeros e uns, para o sistema decimal de numeração. Considere que o número binário está
representado na notação de complemento de 2 (de 10 bits).
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  int num[10], i = 0, flag = 0, decimal = 0, negativo = 0, b = 0;

  while ( i < 10 )
  {
    scanf("%d", &num[i]);
    i++;
  }

  i = 0;

  while ( i < 10 )
  {
    printf("%d", num[i]);
    i++;
  }

  printf("\n");

  i = 0;
  if ( num[0] == 0 )
  {
    printf("Positivo, mantem igual\n");
  }
  else
  {
    printf("Negativo, inverte tudo\n");
    negativo++;
    i = 9;

    // checa os numeros
    while ( i >= 0 && flag == 0)
    {
      if ( num[i] != 1)
      {
        printf("faz nada, nao achei 1\n");
      }
      else
      {
        flag = i;
        printf("Achei o primeiro zero no indice: %d\n", flag);
      }
      // printf("Valor de I: %d\n", i);
    i--;
    }

    flag--;
    i = flag;
    printf("I = %d\n", i);
    // inverte numeros
    while ( flag >= 0 )
    {
      // printf("%d\n", num[i-1]);

      if ( num[i] == 0 )
      {
          num[i] = 1;
      }
      else if ( num[i] == 1 )
        {
          num[i] = 0;
        }
      i--;
      flag--;
    }
  }

i=0;
  while ( i < 10 )
  {
    printf("%d", num[i]);
    i++;
  }
  printf("\n");

  b = 1;
  i = 9;
  while ( i >= 0 )
  {
    if ( num[i] == 1)
    {
      printf("indice = %d | %d\n", i, num[i]);
      decimal += num[i] * b;
      printf("Parcial: %d\n", decimal);
    }
    b *= 2;
    i--;
  }

  if ( negativo == 1 )
  {
    decimal *= -1;
    printf("\n\n\n\n%d\n", decimal);
  }
  else
  {
    printf("\n\n\n\n%d\n", decimal);
  }

	return 0;
}
