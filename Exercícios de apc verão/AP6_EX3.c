#include <stdio.h>


void leitura(int* ptrn1, int* ptrn2, int* ptrn3, int* ptrcodigo)
{
	
	int codigo, n1, n2, n3;


			puts("Digite o codigo do aluno:");
			scanf("%d", &codigo);
				*ptrcodigo = codigo;
			puts("Digite as 3 notas, nota 1, nota 2 e nota 3:");
			scanf("%d" "%d" "%d", &n1, &n2, &n3);
				*ptrn1 = n1;
				*ptrn2 = n2;
				*ptrn3 = n3;
}	
float media(int* ptrn1, int* ptrn2, int* ptrn3)
{
	float media;
	const int PESO1 = 3, PESO2 = 3, PESO3 = 4;
	
	media = (PESO1*(*ptrn1) + PESO2*(*ptrn2) + PESO3*(*ptrn3))/(PESO1 + PESO2 + PESO3)

	return media;
}
		


int main()
{
	int codigo ,n1, n2, n3, n_alunos, i;

			puts("Digite o numero de alunos que se deseja calcular a media:");
			scanf("%d", &n_alunos);
		for(i = 0; i < n_alunos; i++)
		{
				leitura(&n1, &n2, &n3, &codigo);
			printf("Media do aluno %d de codigo = %d eh %f\n",i, codigo, media(&n1, &n2, &n3));
		}


	

	return 0;
}