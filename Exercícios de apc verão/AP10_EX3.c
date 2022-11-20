#include <stdio.h>






int main()
{
	FILE *fp, *fp2;
	
	int i, alunos, codigo;
	float n1, n2, n3, media;
	char str[10], str2[10], nome[30];
	
		
			puts("Digite o nome do arquivo texto ja existente:");
			scanf("%s", str);
			puts("Digite o nome do novo arquivo que serao gravadas as medias:");
			scanf("%s", str2);
			fp = fopen(str,"r+");
			if(fp == NULL)
			{
				puts("Arquivo nao existe, crie o arquivo");
					return 0;
			}
			fp2 = fopen(str2, "w");
			
		while(fscanf(fp, "%s" "%d" "%f" "%f" "%f", nome, &codigo, &n1, &n2, &n3) > 0)
		{
		
			media = (n1 + n2 + n3)/3;
			fprintf(fp2, "%d", codigo);
			fprintf(fp2, " %f\n", media);

		}
			fclose(fp);
			fclose(fp2);

	return 0;
}