#include <stdio.h>
#include <string.h>


void inverte(char str[], char straux[], int tam)
{
	int i, j;

		 
		 j = tam - 1;
		for(i = 0; i < tam; i++)
				straux[i] = str[i];
		for(i = 0; i < tam; i++)
		{
			str[i] = straux[j];
			j--;
		}


}



int main()
{
	char str[21], straux[21];
	int tam;	
		
		puts("Digite a string:");
		scanf("%[^\n]", str);
		tam = strlen(str);
		inverte(str, straux, tam);
		printf("%s\n", str);


	return 0;
}