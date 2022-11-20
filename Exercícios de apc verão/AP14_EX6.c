#include <stdio.h>



int fib(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);


}


int main(){
	
	int n;
	printf("Digite n\n");
	scanf("%d", &n);
	printf("Resultado = %d\n", fib(n));

	return 0;
}