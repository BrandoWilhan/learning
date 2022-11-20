#include <stdio.h>


int pot(int n, int e)
{
	 if(e)
	 {	
	 	e--;
	 	return n*pot(n, e);

	 }
	 else
	 	return 1;
}

int main()
{
 	int n, e;

 	puts("Digite um numero e um expoente (potencia)");
 	scanf("%d", &n);
 	scanf("%d", &e);

 	printf("Resultado da funcao pot: %d\n",pot(n, e));
 

 	return 0;
}