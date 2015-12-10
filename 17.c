/*
17 PDF
*/
#include <stdlib.h>
#include <stdio.h>

int main() {

	int te = 0, ie = 0, i = 0, j = 0, forca = 0, aux = -1, total = 0, m = 0, l = 0; // aux = -1 pq tava pulando o indice 0 na soma final #!#!
	int timeA = 0, jta = 0, timeB = 0, jtb = 0, times = 0, at = 0, y, n;
	char nome[12]; //= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; /* vetor utilizado para inserir o nome de usuario e somar os seus valores ascii maximo de caracteres para o nome 10 */
	int continua = 1;
	do {
	printf("Digite o total de estudantes\n");
	scanf("%d", &te); // total de estudantes para os grupos
	continua = te;
	int soma[te]; // matriz que guarda a soma da força dos estudantes
	char estudantes[te][12]; // matriz para guardar o nome dos estudantes, 1 coluna apenas para o nome
	total = te;
	times = total;
	cu = te;

		for(i=0,y=-1;te>=0;i++,te--,y++)
		{
			printf("Insira o nome:\n");
			// fflush(stdin);
			fgets(nome,10,stdin); // grava o nome do usuario no vetor de soma

			for(i=0; nome[i] != '\n'; i++) // faz a contagem dos caracteres para saber a forca de cada nome
			{
				forca = (forca + nome[i]);
			}
			soma[aux] = forca;
			aux++;
			forca = 0;

			for(i=y;i == y;i++)
			{
				for(j=0;nome[j] != '\n' ; j++)
				{
					estudantes[i][j] = nome[j];
					// printf("I = %d J = %d %c\n", i, j, estudantes[i][j]);
				}
			}
		}

	for(i=0;i<total;i++)
	{
		// printf("Soma %d i= %d\n", soma[i], i);
	}

	// Dividindo as equipes e comparando as equipes se conseguimos empatar
	l = 1; // inicia os testes com 1 jogador no timeA
	while ( total > 0 )
	{
		jta = l; // total de jogadores para o timeA
		jtb = times - jta; // total de jogadores para o timeB
		// timeA
		for(j=0,m=l; j < jta; j++,m--) // m = l, porque se o L for 2, o timeA mais distante será 2
		{
			at = soma[j] * m; // m = variavel para controlar a multiplicacao
			timeA += at;
			// printf("Forca Time A: %d\n", timeA);
		}
		// timeB
		for(j=j,m = 1; m <= jtb; j++,m++) //
		{
			// printf("J = %d, M = %d, Valor: %d\n", j, m, soma[j]);
			at = soma[j] * m; // m = variavel para controlar a multiplicacao
			timeB += at;
			// printf("Forca Time B: %d\n", timeB);
		}

		if ( timeA == timeB )
		{
			printf("\n");
			i = 0;
			n = 10;
			while ( n > 0 )
			{
				printf("%c", estudantes[l-1][i] );
				i++;
				n--;
			}
			printf("\n");
			break; // para a execução dos testes, quando é encontrada a possibilidade do empate
		}
		else
		{
			ie++;
		}

		if ( ie == total)
		{
			printf("Impossibilidade de empate!");
		}
		l++; // aumenta o número de jogadores do timeA
		timeA = 0; // zera para a proxima passagem nos for
		timeB = 0; // zera para a proxima passagem nos for
		total--; // decremento para sair do while
	}

	} while( continua != 0 ); // fica pedindo por um número de estudantes, enquanto nao for digitado 0

	printf("\nFim do programa!\n");
	return 0;
}
