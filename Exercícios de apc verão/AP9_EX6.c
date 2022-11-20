#include <stdio.h>


void leia_matriz(int vetor[5][5], int l, int c)
{
	int i, j;

	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
		scanf("%c", &vetor[i][j]);
}

void verifica(char matriz[5][5], int matriz2[5][5], int l, int c)
{
	int i, j;

		for(i = 0; i < l; i++)
		{
			for(j = 0; j < c; j++)
			{ 	
				if([i][j] == vetorc[j])	
				
			}
		}
				
}


int main() 
{
 	
 	int l = 5, c = 5;
 	char matriz[5][5];

 		puts("Digite os termos do campo:");

 				leia_matriz(matriz, l, c);
 		puts("Digite os termos do vetor:");		
 				leia_vetor(vetor);
 				verifica(matriz, vetor, l, c);
 					


			return 0;
}