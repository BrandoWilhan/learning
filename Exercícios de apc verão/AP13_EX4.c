
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
	int i = 0, cont;
	tabela funcionario;
	char str[] = "funcionarios.bin", str2[] = "funcionariosatualizado.bin", resposta;
	
		fp = fopen(str, "r+b");
		fp2 = fopen(str2, "wb");
		
			while(fread(&funcionario, sizeof(tabela), 1, fp) > 0)
			{
				if(funcionario.sal <= 1000)
					funcionario.sal += 0.3*funcionario.sal;
				if(funcionario.sal > 1000 && funcionario.sal < 5000)
					funcionario.sal += (0.2*funcionario.sal);
				if(funcionario.sal >= 5000)
					funcionario.sal += (0.1*funcionario.sal);
					fwrite(&funcionario, sizeof(tabela), 1, fp2);
					
			}
				
				fclose(fp2);

		fp2 = fopen(str2, "rb");
				
			
			
			while(fread(&funcionario, sizeof(tabela), 1, fp2) > 0)
			{
				printf("Aumento = %f\n", funcionario.sal);
			}

			fclose(fp);
			fclose(fp2);

	return 0;
}