
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
	FILE *fp, *fp2;
	int i = 0, codigo;
	tabela funcionario;
	float novo;
	char str[] = "funcionarios.bin", str2[] = "funcionarioteste.bin", resposta;
	
		fp = fopen(str, "r+b");
		fp2 = fopen(str2, "wb");
			puts("Digite o codigo do funcionario que quer atualizar o cadastro:");
			scanf("%d", &codigo);
			while(fread(&funcionario, sizeof(tabela), 1, fp) > 0)
			{
				if(funcionario.cod == codigo)
				{
					puts("Digite o novo valor de salario:");
					scanf("%f", &novo);
					funcionario.sal = novo;	
					
				}
				fwrite(&funcionario, sizeof(tabela), 1, fp2);
			}
			fclose(fp);
			fclose(fp2);

		fp2 = fopen(str2 ,"rb");

			while(fread(&funcionario, sizeof(tabela), 1, fp2) > 0)
			{
				printf("%f\n", funcionario.sal);
			}
			
			fclose(fp2);
		

	return 0;
}