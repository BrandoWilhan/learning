#include <stdio.h>


void le_vetor(int vetor[10])
{
	int i;

		for(i = 0; i < 10; i++)
			scanf("%d", &vetor[i]);
}
void bubble_sort(int vetor[10])
{
	int i, aux;

		for(i = 0; i < 10; i++)
		{
			if(i+1 < 10 && vetor[i+1] < vetor[i])
			{
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
			}
		}
}
void mostra_vetor(vetor[10])
{
	int i;

		for(i = 0; i < 10; i++)
			printf("%d", vetor[i]);
			putchar('\n');
}


int main()
{
	int vetor[10];

		le_vetor(vetor);
		bubble_sort(vetor);
		mostra_vetor(vetor);

		return 0;
}