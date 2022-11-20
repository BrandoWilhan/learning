#include <stdio.h>
#include <math.h>

float f(float r, float n){
	
	float f;

	f = (r*r*r) - n;
	return f;
}

float fd(float r, float n){
	
	float fd;

	fd = 3*(r*r);
	return fd;
}

float valor_inicial(float n) {
	return n/2;
}

float aproxima(float r, float n){
	
	return r - f(r, n)/fd(r,n);
}

float erro(float r, float n){
	return fabs(r*r - n);
}

float newton_raphson(float n, int iteracoes, float precisao){
	float r = valor_inicial(n);

	for(; iteracoes > 0; --iteracoes){

		r = aproxima(r,n);
		if(precisao >= erro(r,n))
			break;
	}
	return r;
}


int main(){
	
	float n, r, precisao;
	int iteracoes, i;

	scanf("%d" "%f", &iteracoes, &precisao);

	for(i = 0; i < 12; i++){

		scanf("%f", &n);
	r = newton_raphson(n, iteracoes, precisao);

	printf("A raiz e: %f\n", r);
	}
	return 0;
}