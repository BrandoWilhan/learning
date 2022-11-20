#include <stdio.h>


int main () 
{

	int i, n;

		for(i = 10;i <= 20;i++)
			for(n = 1; n <= 10; n++)
				printf("%dx%d = %d\n", i, n, i*n);
	
return 0;
}