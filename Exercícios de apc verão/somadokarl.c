#include <stdio.h>


int soma(int N){
	
	if(N == 0)
	return 0;

	return N + soma(N -1);





	return;
}


int main(){
	
	int N, somao;
		
		
		scanf("%d", &N);

		somao = soma(N);

		printf("%d\n", somao);
		return 0;
}