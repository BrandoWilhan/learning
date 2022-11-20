#include <stdio.h>
typedef struct 
{
	int codigo;
	char nome[20];
}tabela;

int main() 
{
	tabela registro[20];
	
	int n, encontre, i;
		
			puts("Informe o tamanho da tabela:");
			scanf("%d", &n);
		for(i = 0; i < n; i++)
		{
			puts("Digite o codigo:");
			scanf("%d", &registro[i].codigo);
			getchar();
			puts("Digite o nome da profissao:");
			scanf("%[^\n]", registro[i].nome);
		}
			puts("Digite o codigo da profissao que voce quer encontrar:");
			scanf("%d", &encontre);
		for(i = 0; i < n; i++)
			if(registro[i].codigo == encontre)
				printf("%s\n", registro[i].nome);

}