#include <stdio.h>

void leitura(int vetor[5])
{
	int i;

		for(i = 0; i < 5; i++)
		{
			puts("Digite 6 numeros:");
			scanf("%d", &vetor[i]);

		}
}
void pares_impares(int vetor[5], int* pares, int* impares)
{

	int i;

		for(i = 0; i < 5; i++)
		{
			if(vetor[i]%2 == 0)
				*pares++;
			else
				*impares++;
		}
}



int main () 
{

	int inteiro[5], pares = 0, impares = 0;
			 
		leitura(inteiro);
		pares_impares(inteiro, &pares, &impares);
			printf("Pares = %d Impares = %d\n", pares, impares); 
		
		return 0;
}