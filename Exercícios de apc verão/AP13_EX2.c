
#include <stdio.h>


typedef struct 
{
	int cod;
	char depto, nome[30];
	float sal;
}
tabela;



int main()
{
	FILE *fp;
	int i;
	float mediat, mediap, mediaf;
	tabela funcionario;
	char str[] = "funcionarios.bin", resposta;
	
		fp = fopen(str, "wb");

			do
			{
				puts("Digite o codigo do funcionario:");
				scanf("%d", &funcionario.cod);
				puts("Digite o departamento:");
				getchar();
				funcionario.depto =	getchar();
				puts("Digite o nome do funcionario:");
				getchar();
				scanf("%[^\n]", funcionario.nome);
				puts("Digite o salario:");
				getchar();
				scanf("%f", &funcionario.sal);
				getchar();
				fwrite(&funcionario, sizeof(tabela), 1, fp);
				puts("Ainda quer continuar cadastrando ? (S/n)");
				resposta = getchar();
			}
			while(resposta != 'n');


		fclose(fp);

	return 0;
}