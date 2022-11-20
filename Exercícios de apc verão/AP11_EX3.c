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

int pesquisa_binaria(int vetor[10], int termo)
{
	int inicio = 0, fim = 9, meio, achou;

		achou = 0;
	while((inicio <= fim) && (!achou))
	{
		meio = (inicio + fim)/2;

			if(termo < vetor[meio])
					fim = meio - 1;
			else
			{
				if(termo > vetor[meio])
					inicio = meio + 1;
				else
					achou = 1;
			}
	}
	
		if(achou)
			return meio;
		else
			return -1;
}
		
int main()
{
	int vetor[10], i, termo;

		puts("Digite os elementos do vetor:");
		le_vetor(vetor);
		puts("Digite o elemento que quer encontrar:");
		scanf("%d", &termo);
		i =	pesquisa_binaria(vetor, termo);

		if(i < 0)
			puts("Nao achou");
		else
			printf("Achou o elemento no indice %d\n", i+1);

		return 0;
}