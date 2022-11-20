#include <stdio.h>


void leia_matriz(int vetor[4][4], int l, int c)
{
	int i, j;

	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
		scanf("%d", &vetor[i][j]);
}

void verifica(int vetor[4][4], int l, int c, int *l_nulo, int *c_nulo)
{
	int i, j, flag = 0;

		for(i = 0; i < l; i++)
		{ 	
				flag = 0;
			for(j = 0; j < c; j++)
			{ 	
				if(vetor[i][j] == 0)
					flag++;
				if(flag == 4)
					(*l_nulo)++;
			}			
		}

		for(j = 0; j< c; j++)
		{ 	
				flag = 0;
			for(i = 0; i < l; i++)
			{ 	
				if(vetor[i][j] == 0)
					flag++;
				if(flag == 4)
					(*c_nulo)++;
			}			
		}

}	

int main() 
{
 	
 	int matriz[4][4], l = 4, c = 4, l_nulo = 0, c_nulo = 0;

 		puts("Digite os termos da matriz:");

 			leia_matriz(matriz, l, c);
 			verifica(matriz, l, c, &l_nulo, &c_nulo);

 			printf("Linhas nulas = %d e colunas nulas = %d\n", l_nulo, c_nulo);



 

 			return 0;
}