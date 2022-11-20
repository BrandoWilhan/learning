#include <stdio.h>
#include <string.h>

int conta_palavras(char fr[], tam)
{
	int i, palavras = 0;

			for(i = 0; i < tam)
				if(--i > 0 && fr[--i] != ' ' && fr[++i] != ' ' && fr[i] == ' ')
					palavras++;

	return palavras;
}

void palavra_velha(char fr[], char pvelha[], char pnova[])
{
	int i, j;

		
		for(i = 0; i < n; i++)
		 



}



int main()
{
	char fr[26], pvelha[11], pnova[11]; 
	int tam;	
		
		puts("Digite a frase:");
		scanf("%[^\n]", fr);		
		tam = strlen(fr);
		puts("Digite a palavra que voce quer substituir:");
		scanf("%s", pvelha);
		puts("Digite a palavra nova:");
		scanf("%s", pnova);
		conta_palavras(fr, tam);
		palavra_velha(fr, pvelha, pnova);
		printf("%s\n", );


	return 0;
}