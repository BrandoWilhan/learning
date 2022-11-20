#include <stdio.h>


int main () 
{

	int i, n, idades, soma = 0;
	float media;
		
		printf("Digite quantas pessoas sao:\n");
		scanf("%d", &n)
	
	for (i = 0;i < n;i++) 
 	{
 		scanf("%d", &idades);
 			soma += idades;
 	}
 		media = soma/n;

return 0;
}