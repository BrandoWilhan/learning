#include <stdio.h>


int fat(int n)
{
	 if(n==0)
	 	return 1;
	 else
	 	return n*fat(n-1);
}

int main()
{
 
 	printf("Resultado da funcao n!: %d\n",fat(5));
 

 	return 0;
}