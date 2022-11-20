#include <stdio.h>

void leitura(int vetor[])
{
	int a, i;
			puts("Digite 10 numeros inteiros");
		for(i = 0; i < 4; i++)
		{
			scanf("%d", &a);
			vetor[i] = a;
		}
}
void procedimento(int vetor1[], int vetor2[], int conjunto_intersecao[], int conjunto_uniao[], int tam)
{
	int i, j, flag =0, k = 0;
		
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			if(vetor1[i] == vetor2[j])
				conjunto_intersecao[k] = vetor2[j];
				k++;
		}
	}
	for(i = 0; i < 10; i++)
	{
			flag = 0;
		for(j = 0; j <10; j++)
		{
			if(vetor2[i] == conjunto_intersecao[j])
					flag = 1;
		
			if(flag == 0)
				conjunto_uniao[i] = vetor2[i];
		}
	}
}
void mostra(int vetor[], int tam)
{
	int i;
		for(i = 0; i < tam; i++)
			if(vetor[i] != 0)
				printf("%d ", vetor[i]);
				putchar('\n');
}



int main()
{
	int X[4], Y[4], I[4], U[8], tam = 4;
	
				leitura(X);
				leitura(Y);
				procedimento(X, Y, I, U, tam);
				puts("Conjunto interseção");
				mostra(I,tam);
				puts("Conjunto união");
				mostra(U,2*tam);
			
	
	return 0;
}