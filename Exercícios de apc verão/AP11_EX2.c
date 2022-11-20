#include <stdio.h>


void le_vetor(int vetor[10])
{
	int i;

		for(i = 0; i < 10; i++)
			scanf("%d", &vetor[i]);
}

void bubble_sort(int vetor[10])
{
	int i, aux, flag;

	while(flag)
	{
		flag = 0;
		for(i = 0; i < 9; i++)
		{
			
			if(vetor[i] > vetor[i+1])
			{
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				flag = 1;
			}
		}
	}
}

void mostra_vetor(int vetor[10])
{
	int i;

		for(i = 0; i < 10; i++)
			printf(" %d", vetor[i]);
			putchar('\n');
}

int pesquisa_sequencial(int vetor[10], int termo)
{
	int i;

		
		for(i = 0; i < 10; i++)
			if(vetor[i] == termo)
				return i;
			
				return -1;
}


int main()
{
	int vetor[10], i, termo;

		puts("Digite os elementos do vetor:");
		le_vetor(vetor);
		puts("Digite o elemento que quer encontrar:");
		scanf("%d", &termo);
		i =	pesquisa_sequencial(vetor, termo);

		if(i < 0)
			puts("Nao achou");
		else
			printf("Achou o elemento no indice %d\n", i+1);

		return 0;
}