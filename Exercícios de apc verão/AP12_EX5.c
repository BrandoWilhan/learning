#include <stdio.h>
typedef struct 
{
	float salario;
	char nome[21], cargo[21], departamento[21], data[9];
}tabela;

int main() 
{
	tabela registro[10];
	
	int n = 10, encontre, i, maior_salario, media = 0;
		
			
		for(i = 0; i < n; i++)
		{
					puts("Digite o nome:");
					scanf("%[^\n]", registro[i].nome);
					getchar();
					puts("Digite o nome da profissao:");
					scanf("%[^\n]", registro[i].cargo);
					getchar();
					puts("Digite o nome do departamento:");
					scanf("%[^\n]", registro[i].departamento);
					getchar();
					puts("Digite o salario:");
					scanf("%f", &registro[i].salario);
						media += registro[i].salario; 
					getchar();		
					puts("Digite a data de admissao:");
					scanf("%[^\n]", registro[i].data);
					getchar();
		}
						media = media/10;
		for(i = 0; i < n; i++)
				if(registro[i].salario > media)
				{	
					printf("Maior que a media %s, %f\n", registro[i].nome, registro[i].salario);
				}
}