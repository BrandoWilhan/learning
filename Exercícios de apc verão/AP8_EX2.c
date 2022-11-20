#include <stdio.h>
#include <string.h>




void compacta(char str[], char str2[], int* tam)
{
	
	int i, k = 1, l = 0;
		for(i = 0; i < *tam; i++)
			if(i+1 <= *tam && str[i] == str[i+1])
					k++;
	
			else
			{
					str2[l] = k + '0';
					str2[l+1] = str[i];
					l += 2;
					k = 1;
			}
				*tam = l;
				printf("%d\n",l );
}
void mostra(char str[], int* tam)
{
		int i;
			for(i = 0; i < *tam; i++)
				if(str[i] != '1')
			 		printf("%c", str[i]);	
			 		putchar('\n');

}






int main()
{
	char str[25], str2[25];
	int tam;

		puts("Digite sua string");
			scanf("%s", str);

		tam = strlen(str);
			compacta(str, str2, &tam);
			mostra(str2, &tam);

	return 0;
}