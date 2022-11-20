#include <stdio.h>


void leia_matriz(int vetor[6][8], int l, int c)
{
	int i, j;

	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
		scanf("%d", &vetor[i][j]);
}

void verifica(int vetor[6][8], int vetorc[6], int l, int c)
{
	int i, j, negativos = 0;

		for(i = 0; i < l; i++)
		{
				negativos = 0;
			for(j = 0; j < c; j++)
			{ 	
				if(vetor[i][j] < 0)
					negativos++;
			}
			vetorc[i] = negativos;			
		}
}	
void mostra_vetor(int vetor[6][8])
{
	int i, j;

		for(i = 0; i < 6; i++)
		{	
			for(j = 0; j < 8; j++)
				printf("%d",vetor[i][j]);
				putchar('\n');
		}
}

int main() 
{
 	
 	int matriz[6][8], vetor[6], i, l = 6, c = 8;

 		puts("Digite os termos da matriz:");

 				leia_matriz(matriz, l, c);
 				verifica(matriz, vetor, l, c);
 				mostra_vetor(matriz);
 			for(i = 0; i < 6; i++)
 				printf("Numeros de negativos na linha = %d eh = %d\n", i+1, vetor[i]);



 

 			return 0;
}