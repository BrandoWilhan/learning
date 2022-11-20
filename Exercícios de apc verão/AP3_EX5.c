#include <stdio.h>
#include <math.h>

int equacao2gr(int a, int b, int c, float* x1, float *x2)
{
	int delta;

			delta = b*b -4*a*c;
			*x1 = -b + sqrt(delta)/(2*a);
			*x2 = -b - sqrt(delta)/(2*a);

		return delta;
}




int main () 
{
	int a, b, c, delta;
	float x1, x2;
			puts("Digite a, b e c da equaçao do segundo grau:");
			scanf("%d" "%d" "%d", &a, &b, &c);

			delta = equacao2gr(a, b, c, &x1, &x2);
	if(delta < 0)
		printf("Nao existem raizes\n");
	if(delta > 0 && x1 == x2)
		printf("As raizes sao iguais e sao x1 = %f e x2 = %f\n",x1, x2);
	if(delta > 0 && x1 != x2)
		printf("As raizes existem e sao diferentes x1 = %f e x2 = %f\n",x1 , x2);


	
return 0;
}