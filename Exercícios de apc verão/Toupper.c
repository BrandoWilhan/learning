#include <stdio.h>


void merda(){

	char fodase;

	scanf("%c", &fodase);

	if(fodase >= 'A' && fodase <= 'Z'){

		
		printf("%c\n",fodase);		
	}
	else {

		fodase -= ('z' - 'Z');
		printf("%c\n", fodase);

	}
 }
int main() {


		merda();






	return