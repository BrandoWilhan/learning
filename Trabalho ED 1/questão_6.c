/* 
	A entrada dos dados é feita via linha de comando do terminal.
*/

#include <stdio.h>
#include <stdlib.h>

int isdigit(char c){
	if(c >= '0' && c<='9')
		return 1;
	else
		return 0;
}

int main(int numargs, char const *argv[])
{
	int i;

	for(i=1;i<numargs;i++){
		if(!isdigit(argv[i][0]))
			printf("%s i\n",argv[i] );
		else
			printf("%s n\n",argv[i] );
	}
	putchar('\n');


	return 0;
}