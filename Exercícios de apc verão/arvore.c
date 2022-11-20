#include <stdio.h>



int main(){
	

	int i, j, n;
	char ch = 'A';
	
				
			scanf("%d", &n);

			for(j = 1; j <= n; ch++,j++)
			{ 	
				for(i = 1; i <= j; i++)
				{
					printf("%c", ch);
				}
				putchar('\n');

			}
	return 0;


}