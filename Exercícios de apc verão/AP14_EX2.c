#include <stdio.h>


int fat(int n)
{
	 if(n == 0)
	 	return 1;
	 else
	 	return n*fat(n-1);
}

int main()
{
 	int n, e;

 	puts("Digite um numero e tera o fatorial (n!)");
 	scanf("%d", &n);

 	printf("Resultado da funcao n!: %d\n", fat(n));
 

 	return 0;
}