/*
Escreva um algoritmo que forneça os números distintos de um vetor lido. Por exemplo, se
o vetor lido for v = {3, 2, 1, 3, 4, 1, 5, 5, 2} o algoritmo deverá mostrar os valores 3, 2, 1, 4,5.
Considere a leitura de um vetor de 20 números inteiros.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  int v[20], vaux[20], i = 0, j = 0, k = 0, dif = 0, z = 0, flag = 0;

  // preenchendo o vetor
  for(i=0;i<20;i++)
  {
    scanf("%d", &v[i]);
  }

  printf("\n\n");

	// mostra o vetor gravador
  for(i=0;i<20;i++)
  {
    printf("%d\n", v[i]);
  }

i = 0;
vaux[z] = v[i]; // grava a primeira posicao do vetor auxiliar, SEMPRE � diferente do restante, porque � a primeira
printf("AUX #1: %d\n", vaux[z]); // imprime a posicao gravada
z++; // incrementa o contador do vetor auxiliar

printf("Z = %d\n", z);

printf("-----\n\n");

while ( i < 20 )
{
	k = 0; // zera o contador para o nosso vetor auxiliar
	// printf("Z = %d\n", z);
  // printf("Testando o número: %d\n", v[i]);
	while ( k != z ) // k entra em 0 e vai incrementar até chegar no valor de Z, isso significa que ele comparou o valor do vetor inicial com todas as posicoes do vetor auxiliar gravadas ate entao
	{
		// printf("K = %d\n", k);
		if ( v[i] != vaux[k] )
		{
			flag++; // testa se é diferente o valor que esta no vetor auxiliar, se for adiciona 1 no contador de diferenças
			// printf("FLAG GRAVADA: %d\n", flag);
		}

		if ( flag == z ) // quando ele tiver testado o valor do v1, com todas posicoes do vaux e for diferente de todos, ele grava o valor de v1 no auxiliar
		{
      // printf("Gravar valor: %d na proxima posicao do vetor auxiliar\n", v[i]);
			vaux[z] = v[i];
			z++;
      // printf("Prox pos no vetor auxiliar a ser gravada: %d\n", z);
			flag = 0;
		}
	k++;
	}
flag = 0;
i++;
}


	// mostra o vetor auxiliar gravado
  for(i=0;i<z;i++)
  {
    printf("Numeros diferentes: #%d %d\n", i, vaux[i]);
  }


	return 0;
}
