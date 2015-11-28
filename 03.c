/* Escreva um programa que transforme o computador numa urna eletrônica para
eleição, em segundo turno, para presidente de um certo país, às quais concorrem
os candidatos 83-Alibabá e 93-Alcapone. Cada voto deve ser dado pelo número do
candidato, permitindo-se ainda o voto 0(zero) para voto em branco. Qualquer voto
diferente dos já citados é considerado nulo; em qualquer situação, o eleitor deve ser
consultado quanto à confirmação do seu voto. No final da eleição o programa deve emitir
um relatório contendo a votação de cada candidato, a quantidade votos em branco, a
quantidade de votos nulos e o candidato eleito.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  char c;
  int c83 = 0, c93 = 0, nulo = 0, branco = 0, total = 10, voto = 0, confirma = 0;

  while ( total > 0)
  {
    printf("Digita o numero de seu candidato: \n");
    scanf("%d", &voto);
    getchar(); // limpar o buffer
    if ( voto == 0)
    {
      printf("Seu voto sera em branco!\n");
    }
    else if ( voto != 83 && voto != 93){
      printf("Seu voto sera nulo!\n");
    }
    else
    {
    printf("Seu voto foi para o canditado: %d\n", voto);
    }
    printf("Digite S para confirmar o seu voto ou N para mudar a opcao:");

    while ( confirma == 0)
    {
      // fflush(stdin);
      scanf("%c", &c);
      if ( c != 'n' || c != 'N' || c != 's' || c != 'S'  )
      {
        printf("Opcao invalida, Digite S para confirmar o seu voto ou N para mudar a opcao: \n");
      }
      if ( c == 'n' || c == 'N')
      {
        printf("Digita o numero do seu canditado: \n");
        scanf("%d", &voto);
        getchar();
        printf("Seu voto foi para o canditado: %d\n", voto);
        printf("Digite S para confirmar o seu voto ou N para mudar a opcao:");
      } else if ( c == 's' || c == 'S')
        {
        confirma = 1;
        printf("Voto confirmado!\n");
        }
    }
    confirma = 0;
    total--;
    printf("\e[1;1H\e[2J"); // limpa a tela


    if ( voto == 83 )
    {
      c83++;
    }
    else if ( voto == 93)
    {
      c93++;
    }
    else if ( voto == 0 )
    {
      branco++;
    }
    else
    {
      nulo++;
    }
}

  total = c83 + c93 + branco + nulo;
  printf("\n\n\n\n\n");
  printf("\e[1;1H\e[2J"); // limpa o tela

  printf("A votacao foi encerrada!\n");
  printf("Total de votos computados: %d\n", total);
  printf("Votos para o canditado 83-Alibaba: %d\n", c83);
  printf("Votos para o canditado 93-Alcapone: %d\n", c93);
  printf("Votos em branco: %d\n", branco );
  printf("Votos nulos: %d\n", nulo );


	return 0;
}
