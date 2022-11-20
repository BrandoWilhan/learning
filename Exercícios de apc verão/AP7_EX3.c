#include <stdio.h>

void leitura(int vetor[5], int n)
{
	int i;

			puts("Digite 6 numeros:");
		for(i = 0; i < n; i++)
		{
			scanf("%d", &vetor[i]);

		}
}
void pares_impares(int vetor[5], int* pares, int* impares, int n)
{

	int i;

		for(i = 0; i < n; i++)
		{
			if(vetor[i]%2 == 0)
				(*pares)++;
			else
				(*impares)++;
		}
}



int main () 
{

	int inteiro[19], pares = 0, impares = 0, n;
			 
	do{
		puts("Informe quantos numeros voce vai digitar (20 no maximo):");
		scanf("%d", &n);
		if(n < 1 && n > 20)
			puts("Valor invalido, o valor deve ser menor que 20");
	  }while(n < 1 && n > 20);
		leitura(inteiro, n);
		pares_impares(inteiro, &pares, &impares, n);
			printf("Pares = %d Impares = %d\n", pares, impares); 
		
		return 0;
}