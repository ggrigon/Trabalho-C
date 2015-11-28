/*
Escreva um algoritmo que leia um vetor de 10 números reais(float). Considere que na
medida em que os números forem lidos, os mesmos deverão ser inseridos na posição
correta para que o vetor fique ordenado em ordem crescente. Por exemplo, lido o número
5, o vetor ficará {5, , , , , , , , , }; lido o número 2, vetor ficará {2,5, , , , , , , , }; lido o valor 8, o
vetor ficará {2,5,8 , , , , , , , }; e assim por diante até que o vetor seja totalmente
preenchido. O algoritmo deverá considerar que o usuário poderá informar números
repetidos. No final o algoritmo deverá mostrar o vetor lido.
*/
#include <stdlib.h>
#include <stdio.h>

int main() {

  float v[10], aux = 0.0, aux2 = 0.0;
  int  i = 0, k = 0, flag = 0, z = 0, maior = 0;

  printf("Digite 10 numeros reais\n");

  // 5 - 4 - 2 - 7 - 9 - 8 - 6 - 1 - 3 - 0

  while ( i < 10 )
  {
    printf("_____\n\n\n\n");
    scanf("%f", &v[i]);

    if ( i == 0 )
    {
      printf("primeiro numero, nao preciso testar se eh o maior\n");
    }
    else
    {
      // printf("nao eh o primeiro nr\n");
      k = i - 1;
      maior = 0;
      printf("Valor de K: %d\n", k);
      while ( k >= 0 && maior == 0) // testa se é menor que o anterior, caso seja maior ele passa para proximo numero
      {
        printf("Comparado %f menor que ou igual %f\n", v[i], v[k]);
        if ( v[i] < v[k] )
        {
          flag++;
          printf("flag++ %d\n", flag);
        }
        else
        {
          maior++;
        }
        printf("ANTESSS Valor de K: %d\n", k);
        k--;
        printf("Valor de K: %d\n", k);
      }
      z = i;
      while ( flag > 0 )
      {
        aux = v[z-1];
        v[z-1] = v[z];
        v[z] = aux;
        z--;
        flag--;
      }
      flag = 0;
          // printf("S\n");
          // // aux2 = v[i];
          // aux = v[k];
          // v[k] = v[i];
          // v[i] = aux;
      }
        // printf("saindo do loop com valores %f -\n", v[i]);

  i++;
  }


  for(i=0;i<10;i++)
  {
    printf("Vetor Ordenado: %.2lf, indice = %d\n", v[i], i);
  }


	return 0;
}
