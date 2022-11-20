
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
	int i, cont;
	tabela funcionario;
	char str[] = "funcionarios.bin", resposta;
	
		fp = fopen(str, "rb");

			while(fread(&funcionario, sizeof(tabela), 1, fp) > 0)
			{
				printf(" Cod = %d\n Departamento = %c\n Nome = %s\n Salario = %f\n\n", funcionario.cod, funcionario.depto, funcionario.nome, funcionario.sal);
			}

			

		fclose(fp);

	return 0;
}