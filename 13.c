/*
Escreva um algoritmo que gere senhas para usuários de um sistema de computação
baseado naseguinte regra: a senha é composta pelas letras iniciais do nome e sobrenome(s) do
usuário, acrescidas do número de letras que compõem o nome e os respectivos sobre
nomes. Por exemplo, o nome “Carlos Drumond de Andrade” geraria a seguinte senha
“C6D7d2A7”. Considere, para esta questão, que o nome não poderá ultrapassar 30
caracteres.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  char nome[30];
  int i = 0, flag = 0, c = 0, t = 0;

  fgets(nome,30,stdin);

  // contagem do numero de caracteres do nome
  for(i=0;nome[i] != '\n';i++)
  {
    t++;
  }
  i = 0;

while ( i < t )
{
  if ( i == 0 ) // imprime a primeira letra
  {
    printf("%c", nome[i]);
  }

  if ( nome[i] != ' ' ) // verifica se é um caractere ou espaço
  {

    c++; // se for caractere incrementa o contador
  }
  else // condicao caso seja um espaco
  {
    flag++;
  }

  if ( i == t - 1) // verificacao do termino do nome
  {
    flag++;
  }

  if ( flag == 1) // quando encontra um espaço, manda imprimir a contagem de caracteres até ele
  {               // e imprime o proximo caractere
    printf("%d", c);
    printf("%c", nome[i+1]);
    flag = 0;
    c = 0;
  }
  i++;
}

  printf("\n");

	return 0;
}
