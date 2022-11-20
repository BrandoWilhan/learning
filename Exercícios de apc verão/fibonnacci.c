#include <stdio.h>



int fibonacci(int N){
	
int i, j = 1, k = 0, t;
	

	for( i = 0; i < N; i++){
		t = j + k;
		j = k;
		k = t; 

	}

	return k;




}










int main (){
	
int N, enesimo;

  scanf("%d", &N);
	enesimo = fibonacci(N);
	printf("%d\n", enesimo);


	return 0;
}