

#include <stdio.h>


long int n_segundos(int n_horas)
{
	int transformado;

	transformado = n_horas*3600;

	return transformado;
}

int main()
{
	
	int r = n_segundos(7);
		printf("%d\n",r);
	return 0;
}