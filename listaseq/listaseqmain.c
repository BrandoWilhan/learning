#include <stdio.h>
#include <stdlib.h>
#include "lista_v.h"

int main()
{
	
	int posicao, inicio, fim, tamanho, x, i;
	Celula* ls;
		puts("Indique o tamanho da lista que quer criar:");
		scanf("%d", &tamanho);
		ls = cria_lista(tamanho, &inicio, &fim);
		puts("A lista esta vazia, pois acabou de ser criada, a posiçao do vetor onde voce colocar o primeiro elemento da lista sera a posiçao inicial da lista ");
		puts("Escolha a posiçao onde quer iniciar a lista e o valor que quer inserir na lista de inteiros:");
		scanf("%d %d", &posicao, &x);
		insere_lista(x, ls, &inicio, &fim, tamanho, posicao);
		
		puts("Hora do teste:");

		for(i = 0; i < 2; i++)
		{
			puts("Insira x na posicao tal:");
			scanf("%d %d", &posicao, &x);
			insere_lista(x, ls, &inicio, &fim, tamanho, posicao);
		}
		
		
		for(i = 0; i < 2; i++)
			printf("%d ", ls[i].conteudo);
		putchar('\n');

	return 0;
}