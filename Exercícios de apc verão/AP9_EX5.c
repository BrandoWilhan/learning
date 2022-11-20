#include <stdio.h>


void leia_matriz(int vetor[5][5], int l, int c)
{
	int i, j;

	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
		scanf("%d", &vetor[i][j]);
}
void leia_vetor(int vetor[5])
{
	int i;

		for(i = 0; i < 5; i++)
			scanf("%d", &vetor[i]);

}

int verifica(int vetor[5][5], int vetorc[5], int l, int c)
{
	int i, j, iguais = 0;

		for(i = 0; i < l; i++)
		{
				iguais = 0;
			for(j = 0; j < c; j++)
			{ 	
				if(vetor[i][j] == vetorc[j])	
					iguais++;
			}

				if(iguais == 5)
				{	
					return i;
				}
			}
				return -1;
}


int main() 
{
 	
 	int matriz[5][5], vetor[5], i, l = 5, c = 5;

 		puts("Digite os termos da matriz:");

 				leia_matriz(matriz, l, c);
 		puts("Digite os termos do vetor:");		
 				leia_vetor(vetor);
 				i = verifica(matriz, vetor, l, c);
 					if(i != -1)
 						printf("linha igual esta na posicao = %d da matriz\n",i+1);
 					else
 						puts("Nao ha linha igual ao vetor na matriz");


			return 0;
}