
#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

char getch()
{
	int ch;
	struct termios oldt;
	struct termios newt;
	tcgetattr(STDIN_FILENO,&oldt);
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	ch = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	return ch;
}

int batalha(int* hp1max, int* hp2max, int* hp1, int* hp2, int* atb1, int* atb2, int* atf1, int* atf2, int* p1, int* p2, int* lifes1, int* lifes2){


	printf("             *******************************************\n");
	printf("             ************Batalha de vampiros************\n");
	printf("             *******************************************\n");

		
	
	
	printf("\n\nNoiado Vs Dracula\n\n");
	
		
		 
		 
		 int pocao = 30;
         int pc;
	
	char resposta;
	
	srand(time(NULL));

	
	do {



			printf("                         ***********************  \n");
			printf("                         * Batalha de Vampiros *  \n");
			printf("                         ***********************  \n\n");
			printf("\tVoce\t\t\t|\t\t\tDracula\n"); 
			printf("\tHit Points: %d/%d\t|\t\tHit Points: %d/%d\n", *hp1, *hp1max, *hp2, *hp2max); 
			printf("\tPocoes: %d\t\t|\t\tPocoes: %d\n", *p1, *p2); 
			printf("\tAtaque: %d\t\t|\t\tAtaque: %d\n", *atb1, *atb2); 
			printf("\tLife-steal: %d\t\t|\t\tLife-steal: %d\n", *lifes1, *lifes2); 
			printf("\tPrecisao: %%60\t\t|\t\tPrecisao: %%80\n\n"); 	
			printf("1 = Ataque rapido.\n");
			printf("2 = Ataque forte.\n");
			printf("3 = Defender\n");
			printf("4 = Porcao\n");
			printf("5 = Amarelar\n\n");
	
			scanf(" %c", &resposta);
		 	system("clear");
	while(resposta != '1' && resposta != '2' && resposta != '3' && resposta != '4' && resposta != '5') {
		
			printf("resposta invalida !\n\n\n");
			printf("                         ***********************  \n");
			printf("                         * Batalha de Vampiros *  \n");
			printf("                         ***********************  \n\n");
			printf("\tVoce\t\t\t|\t\t\tDracula\n"); 
			printf("\tHit Points: %d/%d\t|\t\tHit Points: %d/%d\n", *hp1, *hp1max, *hp2, *hp2max); 
			printf("\tPocoes: %d\t\t|\t\tPocoes: %d\n", *p1, *p2); 
			printf("\tAtaque: %d\t\t|\t\tAtaque: %d\n", *atb1, *atb2); 
			printf("\tLife-steal: %d\t\t|\t\tLife-steal: %d\n", *lifes1, *lifes2); 
			printf("\tPrecisao: %%60\t\t|\t\tPrecisao: %%80\n\n"); 	
			printf("1 = Ataque rapido.\n");
			printf("2 = Ataque forte.\n");
			printf("3 = Defender\n");
			printf("4 = Porcao\n");
			printf("5 = Amarelar\n\n");																							   

			scanf(" %c", &resposta);
			system("clear");																}								
		

			pc = 10 + rand() % 4;


			if(resposta == '1' && pc == 10){
				if((rand() % 101) < 60) {

					*hp2 -= *atb1;

					printf("\nseu ataque deu certo\n");

					if(*hp1 < *hp1max - *lifes1) {

						*hp1 += *lifes1;
						}
						else{
							*hp1 = *hp1max;
						}
					}
				

				else {

					printf("\nSeu ataque falhou\n");

				}

				if((rand () % 101) < 80) {

					*hp1 -= *atb2;

					printf("ataque rapido do Dracula!\n");

					if (*hp2 < *hp2max - *lifes2) { 

						*hp2 += *lifes2;
						}
						else{
							*hp2 = *hp2max;
						}
				}
				else { 

					printf("ataque rapido do Dracula falhou\n");

				}
}
			
			if(resposta == '1' && pc == 11){

				if((rand() % 101) < 60) {

					*hp2 -= *atb1;

					printf("\nseu ataque deu certo\n");

					if(*hp1 < *hp1max - *lifes1) {

						*hp1 += *lifes1;

					}
					else{
						*hp1 = *hp1max;
					}
				}

				else {

					printf("\nSeu ataque falhou\n");

				}


				if((rand() % 101) < 80) {

					*hp1 -= *atf2;

					printf("ataque forte do Dracula !\n");

				}
				else { 

					printf("ataque forte do Dracula falhou \n");
				}
			}
			
			if(resposta == '1' && pc == 12){

				if((rand() % 101) < 60) {

				*hp2 -= *atb1/2;
		printf("\nseu ataque deu certo\n");

				if(*hp1 < *hp1max - *lifes1) {

					*hp1 += *lifes1;

				}
				else{ 
					*hp1 = *hp1max;
				}
}

				else {

					printf("\nSeu ataque falhou\n");

				}

				printf("dracula defendeu\n");
			}

			if(resposta == '1' && pc == 13){

				if((rand() % 101) < 60) {

					*hp2 -= *atb1;

			printf("\nseu ataque deu certo\n");

					if(*hp1 < *hp1max - *lifes1) {

						*hp1 += *lifes1;

					}
					else{
						*hp1 = *hp1max;
					}
				}

				else {

					printf("\nSeu ataque falhou\n");

				}

				printf("Dracula usou pocao\n");
				if(*p2 > 0){

					if(*hp2 <= *hp2max){
						if((*hp2max - *hp2) < 30){

							*hp2 = *hp2max;
							*p2--;
						}

						else{

							*hp2 += pocao;
							*p2--;
						}
					}

				}
			}	

			if(resposta == '2' && pc == 10){

				if((rand () % 101) < 80) {

					*hp1 -= *atb2;

					printf("ataque rapido do Dracula!\n");

					if (*hp2 < *hp2max - *lifes2) { 

						*hp2 += *lifes2;
					}
					else{
						*hp2 = *hp2max;
					}
				}
				else { 

					printf("ataque rapido do Dracula falhou\n");

				}



				if((rand() % 101) < 60){

					*hp2 -= *atf1;

					printf("\nseu ataque forte deu certo\n");

				} 

				else {

					printf("\nseu ataque forte falhou\n");

				}
			}
			if(resposta == '2' && pc == 11){
				if((rand() % 101) < 60){

					*hp2 -= *atf1;

					printf("\nseu ataque forte deu certo\n");

				} 

				else {

					printf("\nseu ataque forte falhou\n");

				}


				if((rand() % 101) < 80) {

					*hp1 -= *atf2;

					printf("ataque forte do Dracula !\n");

				}
				else { 

					printf("ataque forte do Dracula falhou \n");
				}
			}

			if(resposta == '2' && pc == 12){

				if((rand() % 101) < 60){

					*hp2 -= *atf1/2;

					printf("\nseu ataque forte deu certo\n");

				} 

				else {

					printf("\nseu ataque forte falhou\n");

				}
				printf("Dracula defendeu\n");
			}

			if(resposta == '2' && pc == 13){

				if((rand() % 101) < 60){

					*hp2 -= *atf1;

					printf("\nseu ataque forte deu certo\n");

				} 

				else {

					printf("\nseu ataque forte falhou\n");

				}
				printf("Dracula usou pocao\n");


				if(*p2 > 0){

					if(*hp2 <= *hp2max){
						if((*hp2max - *hp2) < 30){
							*hp2 = *hp2max;
							*p2--;
						}

						else{

							*hp2 += pocao;
							*p2--;

						}
					}

				}

			}

			if(resposta == '3' && pc == 10){



				if((rand () % 101) < 80) {

					*hp1 -= *atb2/2;

					printf("ataque rapido do Dracula!\n");

					if (*hp2 < *hp2max) { 

						*hp2 += *lifes2;

					}
				}
				else { 

					printf("ataque rapido do Dracula falhou\n");

				}

				printf("Voce defendeu\n");
			}
			if(resposta == '3' &&  pc == 11){

				if((rand() % 101) < 80) {

					*hp1 -= *atf2/2;

					printf("ataque forte do Dracula !\n");

				}
				else { 

					printf("ataque forte do Dracula falhou \n");
				}

				printf("Voce defendeu\n");

			}

			if(resposta == '3' && pc == 12){

				if(*hp1 < *hp1max && *hp2 < *hp2max){ 
					if(*hp1max - *hp1 < 10)
						*hp1 = *hp1max;
					else
						*hp1 += 0.1*(*hp1max);
					if(*hp2max - *hp2 < 8)
						*hp2 = *hp2max;
					else
						*hp2 += 0.1*(*hp2max);

				}
				printf("Voce defendeu\n");
				printf("Dracula defendeu\n");
			}

			if(resposta == '3' && pc == 13){

				printf("Dracula usou pocao\n");
				if(*p2 > 0){

					if(*hp2 <= *hp2max){
						if((*hp2max - *hp2) < 30){
							*hp2 = *hp2max;
							*p2--;
						}

						else{

							*hp2 += pocao;
							*p2--;

						}
					}

				}
				printf("Voce defendeu\n");
			}

			if(resposta == '4' && pc == 10){
				printf("Voce usou pocao\n");
				if(*p1 > 0){

					if(*hp1 <= *hp1max){
						if((*hp1max - *hp1) < 30){
							*hp1 = *hp1max;
							*p1--;
						}

						else{

							*hp1 += pocao;
							*p1--;

						}
					}
				}

				if((rand () % 101) < 80) {

					*hp1 -= *atb2/2;

					printf("ataque rapido do Dracula!\n");

					if (*hp2 < *hp2max) { 

						*hp2 += *lifes2;

					}
					else{
						*hp2 = *hp2max;
					}
				}
				else { 

					printf("ataque rapido do Dracula falhou\n");

				}
			}

			if(resposta == '4' && pc == 11){

				printf("Voce usou pocao\n");
				if(*p1 > 0){

					if(*hp1 <= *hp1max){
						if((*hp1max - *hp1) < 30){
							*hp1 = *hp1max;
							*p1--;
						}

						else{

							*hp1 += pocao;
							*p1--;

						}
					}



				}
				
				if((rand() % 101) < 80) {

					*hp1 -= *atf2;

					printf("ataque forte do Dracula !\n");

				}
				else { 

					printf("ataque forte do Dracula falhou \n");
				}
			}

			if(resposta == '4' && pc == 12){

				printf("Voce usou pocao\n");
				if(*p1 > 0){

					if(*hp1 <= *hp1max){
						if((*hp1max - *hp1) < 30){ 
							*hp1 = *hp1max;
							--(*p1);
						}
						else{ 
							hp1 += pocao;
							--(*p1);
						}
					}
				 }
					printf("Dracula defendeu\n");
				
			}
			
			if(resposta == '4' && pc == 13){

				printf("Voce usou pocao\n");
				if(*p1 > 0){

					if(*hp1 <= *hp1max){
						if((*hp1max - *hp1) < 30){ 
							*hp1 = *hp1max;
							--(*p1);
						}
						else{ 
							*hp1 += pocao;
							--(*p1);
						}	
					}
				}
				printf("Dracula usou pocao\n");
				if(*p2 > 0){

					if(*hp2 <= *hp2max){
						if((*hp2max - *hp2) < 30){
							*hp2 = *hp2max;
							*p2--;
						}

						else{

							*hp2 += pocao;
							*p2--;

						}
					}

				}
			}
			if(resposta == '5'){

				*hp1 = 0;
				
			}
			
		} while ((resposta == '1' || resposta == '2' || resposta == '3' || resposta == '4' ) && *hp1 > 0 && *hp2 > 0);
		

		if(*hp1 <= 0)
		{
			*hp1 = *hp1max;
			*hp2 = *hp2max;
			return 1;
		}
		if(*hp2 <= 0) 
			return 2;
			
		}
















void mostra_mapa(char mapa[25][75]){

int i, j;

	for(i = 0; i < 25; i++){
 	for(j = 0; j < 75; j++){
        printf("%c", mapa[i][j]);
                                 }   
        printf("\n");
                               }

		printf("            W = Cima\n");
        printf("Esquerda = A");
        printf(" D = Direita\n");
        printf("            S = Baixo\n");

}
void movimenta(char mapa[25][75], int hp1max, int hp2max, int hp1, int hp2, int atb1, int atb2, int atf1, int atf2, int p1, int p2, int lifes1, int lifes2 ){
	
	
	srand(time(NULL));
	int* ptrhp1max = &hp1max;
	int* ptrhp2max = &hp2max;
	int* ptrhp1 = &hp1;
	int* ptrhp2 = &hp2;
	int* ptratb1 = &atb1;
	int* ptratb2 = &atb2;
	int* ptratf1 = &atf1;
	int* ptratf2 = &atf2;
	int* ptrp1 = &p1;
	int* ptrp2 = &p2;
	int* ptrlifes1 = &lifes1;
	int* ptrlifes2 = &lifes2;
	int result, movimentov1;
	int jogador_linha = 3, jogador_coluna = 7;
	int vamp1l = 4, vamp1c = 22;  
	char movimento;

	

	

	while(1){ 
		





				if(mapa[vamp1l][vamp1c] != 'M'){
					movimentov1 = rand() % 8;
				

			if(movimentov1 == 0) 
			{
			 
			  
				mapa[vamp1l][vamp1c] = ' ';

				vamp1l-= 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1l += 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
		    }
			if(movimentov1 == 1) 
			{
			  
				mapa[vamp1l][vamp1c] = ' ';

				vamp1l += 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1l -= 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
			}
			if(movimentov1 == 2) 
			{
			  
				mapa[vamp1l][vamp1c] = ' ';

				vamp1c -= 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1c += 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
			}
			if(movimentov1 == 3) 
			{
			 
				mapa[vamp1l][vamp1c] = ' ';

				vamp1c += 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1c -= 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
			}
			if(movimentov1 == 4) 
			{
			  
				mapa[vamp1l][vamp1c] = ' ';

				vamp1l -= 1;
				vamp1c -= 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1l += 1;
					 vamp1c += 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
			}
			if(movimentov1 == 5) 
			{
			 
			  
				mapa[vamp1l][vamp1c] = ' ';

				vamp1l += 1;
				vamp1c += 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1l -= 1;
					 vamp1c -= 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
			}
			if(movimentov1 == 4) 
			{
			  
				mapa[vamp1l][vamp1c] = ' ';

				vamp1l += 1;
				vamp1c -= 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1l -= 1;
					 vamp1c += 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
			}
			if(movimentov1 == 6) 
			{
			  
				mapa[vamp1l][vamp1c] = ' ';

				vamp1l += 1;
				vamp1c -= 1;
			
			if(mapa[vamp1l][vamp1c] != '#' && mapa[vamp1l][vamp1c] != '+' && mapa[vamp1l][vamp1c] != '-')
				{
					
					   mapa[vamp1l][vamp1c] = 'V';
				}
			else
				{
					 vamp1l -= 1;
					 vamp1c += 1;
					 mapa[vamp1l][vamp1c] = 'V';
				}
			 
			}


			vamp1l -= 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
			vamp1l += 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		}
		
			vamp1c -= 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
			vamp1c += 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		}
		
			vamp1l += 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
			vamp1l -= 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_linha] = '@';
			}
		    if(result == 1)
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		}
		
			vamp1c += 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
			vamp1c -= 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
		

		
				vamp1l -= 2;
				vamp1c -= 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
				vamp1l += 2;
				vamp1c += 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	
				vamp1l += 2;
			    vamp1c += 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
				vamp1l -= 2;
				vamp1c -= 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
		
				vamp1l += 2;
				vamp1c -= 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
				vamp1l -= 2;
				vamp1c += 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
		
				vamp1l -= 2;
				vamp1c += 2;
		if(mapa[vamp1l][vamp1c] == '@')
		{ 
				vamp1l += 2;
				vamp1c -= 2;
			if(mapa[vamp1l][vamp1c] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			}
			if(result == 2)
			{
				
				mapa[vamp1l][vamp1c] = 'M';
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
		}
		movimento = getch();
		
		if(movimento == 'w' || movimento == 'W')
			{
			
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha-= 1;
			
			if(mapa[jogador_linha][jogador_coluna] != '#' && mapa[jogador_linha][jogador_coluna] != '+')
				{
					if(mapa[jogador_linha][jogador_coluna] == '-')
						{
							jogador_linha -= 1;
							mapa[jogador_linha][jogador_coluna] = '@';
						}
					   mapa[jogador_linha][jogador_coluna] = '@';
				}
			else
				{
					 jogador_linha += 1;
					 mapa[jogador_linha][jogador_coluna] = '@';
				}
			}
		if(movimento == 's' || movimento == 'S')
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha += 1;
			
			if(mapa[jogador_linha][jogador_coluna] != '#' && mapa[jogador_linha][jogador_coluna] != '+')
				{
					if(mapa[jogador_linha][jogador_coluna] == '-')
						{
							jogador_linha += 1;
							mapa[jogador_linha][jogador_coluna] = '@';
						}
						mapa[jogador_linha][jogador_coluna] = '@';
				} 
			else
				{
					jogador_linha -= 1;
					mapa[jogador_linha][jogador_coluna] = '@';
				}
			}	
		if(movimento == 'a' || movimento == 'A')
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_coluna -= 1;
			
			if(mapa[jogador_linha][jogador_coluna] != '#' && mapa[jogador_linha][jogador_coluna] != '+')
				{
					if(mapa[jogador_linha][jogador_coluna] == '-')
						{
							jogador_coluna -= 1;
							mapa[jogador_linha][jogador_coluna] = '@';
						}
						mapa[jogador_linha][jogador_coluna] = '@';
				} 
			else	
				{
					jogador_coluna += 1;
					mapa[jogador_linha][jogador_coluna] = '@'; 
				}
			}
		if(movimento == 'd' || movimento == 'D')
			{
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_coluna += 1;
			
			if(mapa[jogador_linha][jogador_coluna] != '#' && mapa[jogador_linha][jogador_coluna] != '+')
				{
					if(mapa[jogador_linha][jogador_coluna] == '-')
						{
							jogador_coluna += 1;
							mapa[jogador_linha][jogador_coluna] = '@';
						}
						mapa[jogador_linha][jogador_coluna] = '@';
				} 
			else
				{
					jogador_coluna -= 1;
					mapa[jogador_linha][jogador_coluna] = '@';
				}
			}


			


























	system("clear");
	mostra_mapa(mapa);
	 }
}





int main(){
	
int	hp1max = 100;
int	hp2max = 100;
int	hp1 = 100;
int hp2 = 100;
int atb1 = 10;
int atb2 = 10;
int atf1 = 20;
int atf2 = 20;
int lifes1 = 0;
int lifes2 = 0;
int p1 = 6;
int p2 = 0;

	
    char mapa[25][75] = { "###########################################################################",
                          "#             #W                #               #               #         #",
                          "#             -                 #               #               #         #",
                          "#      @      #                 +               +       V       +    P    #",
                          "#             #       V         #       V       #               #         #",
                          "#             #                 #               #               #         #",
                          "#             #                 #               #               #         #",
                          "#######################+################+###############+############-#####",
                          "#P          #            #      #          #         #                    #",
                          "#           #            #      #          #         #                    #",
                          "#           #            #      #          -    A    #                    #",
                          "#    V      -            -   V  -          #         #                    #",
                          "#           #            #      #          ###########          V         #",
                          "#           #            #W     #                                         #",
                          "######+######            ########                                         #",
                          "#           #                                                             #",
                          "#           #                                                             #",
                          "#     V     -           ######-##########             #####################",
                          "#           #           #               #             #                   #",
                          "######+######           #               #             #                   #",
                          "#           #           #               #             #                   #",
                          "#           -           #     V         +             -         D         #",
                          "#     V     #           #               #             #                   #",
                          "#           #           #               #             #                   #",
                          "###########################################################################"};
    
    mostra_mapa(mapa);
    movimenta(mapa, hp1max, hp2max, hp1, hp2, atb1, atb2, atf1, atf2, p1, p2, lifes1, lifes2);



         return 0;


}
