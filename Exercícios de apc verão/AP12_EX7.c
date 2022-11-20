#include <stdio.h>
#include <string.h>


typedef struct 
{
	int dia, mes, ano;
	char nome[21], endereco[21], telefone[11];
}tabela;



void ordena(tabela registro[])
{
	int i, flag = 1;
	tabela aux;

	while(flag)
	{		
			flag = 0;
		for (i = 0; i < 9; ++i)
			if(strcmp(registro[i].nome, registro[i+1].nome) > 0)
			{
				aux = registro[i];
				registro[i] = registro[i+1];
				registro[i+1] = aux;
				flag = 1;
			}
	}
}


int main() 
{
	tabela registro[10];
	int n = 10, i;
		
			
		for(i = 0; i < n; i++)
		{
					puts("Digite o nome:");
					scanf("%[^\n]", registro[i].nome);
					getchar();
					puts("Digite o endereço:");
					scanf("%[^\n]", registro[i].endereco);
					getchar();
					puts("Digite o telefone:");
					scanf("%[^\n]", registro[i].telefone);
					getchar();
					puts("Digite o dia do aniversario:");
					scanf("%d", &registro[i].dia);
					puts("Digite o mes do aniversario:");
					scanf("%d", &registro[i].mes);
					puts("Digite o ano do aniversario:");
					scanf("%d", &registro[i].ano);
					getchar();
		}
		
		ordena(registro);

		for(i = 0; i < n; i++)
				if(registro[i].mes == 12)
				{	
					printf("%s faz aniversario em dezembro\n", registro[i].nome);
				}
}