#include <stdio.h>
#include <string.h>


void copia_n_caracteres(char s1[], int n, int pos)
{
	int i, j;

		
		for(i = 0; i < n; i++)
		 { 	
		 	s1[pos] = ' ';
		 	pos++;
		 }



}



int main()
{
	char s1[21], s2[21]; 
	int n, pos;	
		
		puts("Digite a string:");
		scanf("%[^\n]", s1);		
		puts("Digite quantos caracteres voce quer copiar:");
		scanf("%d", &n);
		puts("Digite a partir de que posicao da string voce quer deletar caracteres:");
		scanf("%d", &pos);
		copia_n_caracteres(s1, s2, n, pos);
		printf("%s\n", s2);


	return 0;
}