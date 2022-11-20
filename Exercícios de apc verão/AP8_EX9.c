#include <stdio.h>
#include <string.h>





int main()
{
	char str[11]; 
	int n, i, f = 0;	
		
		puts("Informe os digitos:");
		scanf("%s", str);
		n = strlen(str);
	for(i = 0; i < n; i++)
	{ 
		f = str[i] - '0'; 
		printf("%d", f); 
	}
		putchar('\n');
	return 0;
}