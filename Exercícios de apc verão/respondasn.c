

#include <stdio.h>


void responda_S_ou_N(){

char resposta;

 		printf("Tudo bem ?\n");
 		scanf(" %c", &resposta);

	
 	while(resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N'){

 		printf("Resposta invalida\n");
 		scanf(" %c", &resposta);
 	}

	if(resposta == 's' || resposta == 'S'){ 
		printf("Que bom !\n");
	}
 	if(resposta == 'n' || resposta == 'N'){
         
      	printf("Posso ajudar ?\n");
 	 	scanf(" %c", &resposta);
 	 while(resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N'){

 		printf("Resposta invalida\n");
 		scanf(" %c", &resposta);
 	}
	
	if(resposta == 's' || resposta == 'S'){
		printf("Chego em 10 minutos \n");
	}
	if(resposta == 'n' || resposta == 'N'){
		printf("Espero que melhore !\n");
	}
	
} 

return;
}

int main(){

responda_S_ou_N();
	return 0;
}
