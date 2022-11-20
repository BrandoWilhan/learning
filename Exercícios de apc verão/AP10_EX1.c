#include <stdio.h>






int main()
{
	FILE *fp;
	
	int i, alunos, codigo;
	float n1, n2, n3;
	char str[10], nome[30];
	
		
			puts("Digite o nome do arquivo texto:");
			scanf("%s", str);
			
			fp = fopen(str,"w");
			puts("Digite o numero de alunos:");
			scanf("%d", &alunos);
		for(i = 0; i < alunos; i++)
		{
		
			puts("Digite o nome do aluno:");
			scanf("%[^\n]", nome);
			puts("Digite o codigo do aluno:");
			scanf("%d", &codigo);
			puts("Digite as 3 notas do aluno:");
			scanf("%f %f %f", &n1, &n2, &n3);
			fprintf(fp, "%s", nome);
			fprintf(fp, "%d", codigo);
			fprintf(fp , "%f %f %f\n", n1, n2, n3);

		}
			fclose(fp);

	return 0;
}