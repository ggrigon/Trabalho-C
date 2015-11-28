/*
As companhias de transportes aéreos costumam representar os nomes dos passageiros no
formato último sobrenome/nome. Por exemplo, o passageiro “Carlos Drumond de
Andrade” seria indicado por “Andrade/Carlos”. Escreva um programa que receba um
nome e o escreva no formato acima. Considere, para este problema, um tamanho máximo
de 40 letras para o nome lido. Na implementação deste exercício não poderão ser
utilizados recursos/funções prontas para a manipulação de Strings.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  char nome[40];
  int i = 0, t = 0, fpn = 0, spc = 0, vspc[10], k = 0;

  fgets(nome,40,stdin);

  while ( nome[i] != '\n' )
  {
    if ( nome[i] == ' ')
    {
      vspc[k] = i+1;
      // printf("%d\n", vspc[k]);
      k++;
      spc++;
    }
    t++; // contagem do tamanho do vetor
    i++;
  }

    // printf("caracteres: %d espacos: %d\n", t, spc);
    // printf("DENTRO DO vspc[k] = %d\n", vspc[k-1]);

    for(i=vspc[k-1];i<t;i++)
    {
      printf("%c", nome[i]);
    }

    printf("/");

    fpn = vspc[0] - 1; // fim do primeiro nome, eh a posicao anterior ao primeiro espaco

    for(i=0;i<fpn;i++)
    {
      printf("%c", nome[i]);
    }
    printf("\n");

	return 0;
}
