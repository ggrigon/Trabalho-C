/*
O(s) valor(es) de maior requência de uma relação de valores numéricos é(são) chamado(s)
moda
da relação. Escreva um algoritmo que receba uma relação de notas escolares maiores do
que zero e menores do que ou iguais a 10, com uma casa decimal, e forneça a(s) moda(s)
desta relação. Por exemplo, se a relação de notas for v = {8,0; 3,5, 4,5; 8,0; 6,0; 4,5; 6,0;
3,5; 2,5; 6,0; 9,0} a função deve fornecer o valor 6,0 (requência 3). Considere a leitura
de um vetor de notas de tamanho 15.
*/


#include <stdlib.h>
#include <stdio.h>

int main() {

  float notas[15], nota = 0.0, modal = 0.0;
  int cont[15], i = 0, j = 0, k = 0, maior = 0;

  // gravar as notas
  while ( i < 15 )
  {
    scanf("%f", &nota);
    if ( nota > 0 && nota <= 10 ) // maior que zero e menor ou igual a 10:  1~10
    {
      notas[i] = nota;
      i++;
    }
  }

  i = 0;
  // preencher o vetor de contagem com 0
  while ( i < 15 )
  {
    cont[i] = 0;
    i++;
  }

  i = 0;
  j = 0;

  while ( i < 15 )
  {
    while ( j < 15 )
    {
      // printf("Comparando %.2lf e %.2lf\n", notas[i], notas[j]);
      if ( (notas[i] == notas[j]) && (i != j) )
      {
        printf("IGUALDADE\n");
        cont[i]++;
      printf("Comparando %.2lf e %.2lf\n", notas[i], notas[j]);
      printf("Gravou repeticao em: %d\n", i);
      }
    j++;
    }
  j = 0;
  i++;
  }

  i = 0;

  printf("Vetor da contagem\n");
  while ( i < 15 )
  {
    printf("%2.lf %d\n", notas[i], cont[i]);
    i++;
  }

  i = 0;
  j = 0;

  maior = cont[0];
  modal = notas[0];

  while ( i < 15 )
  {
    if ( cont[i] > maior)
    {
      maior = cont[i];
      modal = notas[i];
      printf("%.2lf\n", modal);
    }
    i++;
  }

  printf("%d\n", maior);
  printf("%.2lf\n", modal);

	return 0;
}
