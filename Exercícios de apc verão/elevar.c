#include <stdio.h>


int eleva_i(int base, int exp){
	
	int i, result = 1;
	
	for(i = 0; i < exp; i++){

	result = result*base;
							}

	return result; 
}

int eleva_r(int base, int exp){
	
	if(exp == 0)
	return 1;

	else {

	 return base * eleva_r(base, exp - 1);
}

	}

int main() {
	
int fodase, a, b;


scanf("%d%d", &a, &b);
	fodase = eleva_i(a, b);
	printf("%d^%d = %d\n", a, b, fodase);
	fodase = eleva_r(a, b);
	printf("%d^%d = %d\n", a, b, fodase);
	return 0;

}