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


int main()
{
	int vetor[10];

		puts("Digite os elementos do vetor:");
		le_vetor(vetor);
		bubble_sort(vetor);
		puts("Vetor ordenado:");
		mostra_vetor(vetor);

		return 0;
}