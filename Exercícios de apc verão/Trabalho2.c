
#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>


/*Nome: Brando Wilhan Galdino Da Silva */
/*Matricula: 170161579 */ 
/*Trabalho 2 */


char getch() /**pega um caractere do teclado sem precisar apertar enter by: Carlos Adir.*/
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


	
		
	
	
	printf("\n\nAstronacleto Vs Vampiro das sombras\n\n");
	
		
		 
		 
		 int pocao = 30;
         int pc;
	
	char resposta;
	
	srand(time(NULL));

	
	do {



			printf("                         ***********************  \n");
			printf("                         * Batalha de Vampiros *  \n");
			printf("                         ***********************  \n\n");
			printf("\tAstronacleto\t\t\t|\t\t\tVampiro\n"); 
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
			printf("\tAstronacleto\t\t\t|\t\t\tVampiro\n"); 
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





void mostra_mapa1(char  mapa[25][75]){


	int i, j;
	printf("LEVEL              1\n");
	printf("HIT POINTS   110/110\n");
	printf("ATAQUE             5\n");
	printf("LIFESTEAL          0\n");
	printf("POCOES             0\n");
	printf("PRECISAO        %%60\n");
	for(i = 0; i < 25; i++){
 	for(j = 0; j < 75; j++){
        printf("%c", mapa[i][j]);
                                 }   
        printf("\n");
                               }

		printf("           [W]\n");
        printf("         [A]");
        printf("[D]\n");
        printf("           [S]\n");




}










void mostra_mapa(char mapa[25][75], int* level, int* hp1, int* hp1max, int* atb1, int* lifes1, int*p1){

int i, j;

	
	printf("LEVEL              %d\n", *level);
	printf("HIT POINTS   %d/%d\n", *hp1, *hp1max);
	printf("ATAQUE             %d\n", *atb1);
	printf("LIFESTEAL          %d\n", *lifes1);
	printf("POCOES             %d\n", *p1);
	printf("PRECISAO         %%60\n");
	for(i = 0; i < 25; i++){
 	for(j = 0; j < 75; j++){
        printf("%c", mapa[i][j]);
                                 }   
        printf("\n");
                               }

		printf("           [W]\n");
        printf("         [A]");
        printf("[D]\n");
        printf("           [S]\n");


}



void movimentov(char mapa[25][75], int* vamplinha, int* vampcoluna){


		int movimentov;


					movimentov = rand() % 8;

			if(movimentov == 0) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vamplinha-= 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vamplinha += 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}

			if(movimentov == 1) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vamplinha += 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vamplinha -= 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}

			if(movimentov == 2) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vampcoluna -= 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vampcoluna += 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}

			if(movimentov == 3) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vampcoluna += 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vampcoluna -= 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}

			if(movimentov == 4) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vamplinha -= 1;
				*vampcoluna -= 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vamplinha += 1;
					 *vampcoluna += 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}
			if(movimentov == 5) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vamplinha += 1;
				*vampcoluna += 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vamplinha -= 1;
					 *vampcoluna -= 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}
			if(movimentov == 4) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vamplinha += 1;
				*vampcoluna -= 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vamplinha -= 1;
					 *vampcoluna += 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}
			if(movimentov == 6) 
			{
				mapa[*vamplinha][*vampcoluna] = ' ';

				*vamplinha += 1;
				*vampcoluna -= 1;
			
			if(mapa[*vamplinha][*vampcoluna] != '#' && mapa[*vamplinha][*vampcoluna] != '+' && mapa[*vamplinha][*vampcoluna] != '-')
				{
					
					   mapa[*vamplinha][*vampcoluna] = 'V';
				}
			else
				{
					 *vamplinha -= 1;
					 *vampcoluna += 1;
					 mapa[*vamplinha][*vampcoluna] = 'V';
				}
			}
		 





}





void abreportas(char mapa[25][75], int portal, int portac){



				mapa[portal][portac] = '-';


    }

















void movimenta(char mapa[25][75]){
	
	
	srand(time(NULL));
	
	
	int atb1 = 5;
	int atb2 = 5;
	int atf1 = 10;
	int atf2 = 10;
	int lifes1 = 0;
	int lifes2 = 0;
	int p1 = 0;
	int p2 = 0;
	int xp = 0, xpmax = 10;
	int level = 1;
	int result, morreu = 0;
	int jogador_linha = 3, jogador_coluna = 7;
	int vamp1linha = 4, vamp1coluna = 22;
	int vamp2linha = 4, vamp2coluna = 40; 
	int vamp3linha = 3, vamp3coluna = 56;
	int vamp4linha = 3, vamp4coluna = 69;
	int vamp5linha = 12, vamp5coluna = 64;
	int vamp6linha = 10, vamp6coluna = 48;
	int vamp7linha = 11, vamp7coluna = 29;
	int vamp8linha = 10, vamp8coluna = 17;
	int vamp9linha = 11, vamp9coluna = 5; 
	int vamp10linha = 17, vamp10coluna = 6;
	int vamp11linha = 22, vamp11coluna = 6;
	int vamp12linha = 21, vamp12coluna = 30;   
	int porta1l = 3, porta1c = 32;
	int porta2l = 3, porta2c = 48;
	int porta3l = 3, porta3c = 64;
	int porta4l = 7, porta4c = 69;
	int porta5l = 10, porta5c = 53;
	int porta6l = 10, porta6c = 43;
	int porta7l = 11, porta7c = 25;
	int porta8l = 11, porta8c = 12;
	int porta9l = 14, porta9c = 6;
	int porta10l = 19, porta10c = 6;
	int porta11l = 21, porta11c = 12;
	int porta12l = 21, porta12c = 40;
	int	hp1max = 110;
	int	hp2max = 110;
	int	hp1 = hp1max;
	int hp2 = hp1max;
	int moreuu = 0;
	
	char movimento;


	

	do{ 
		

				
			if(morreu == 1)
			{
				
				
				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 2;
				hp2max = 150;
				hp1max = 120;
				hp1 = hp1max;
				hp2 = hp2max;
				atb1 = 7;
				atb2 = 10; 
				atf1 = 14;
				atf2 = 20;
				abreportas(mapa,porta1l,porta1c);
				
			}
			if(morreu == 2)
			{
				 
				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 4;
				hp1max = 140;
				hp2max = 150;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 9;
				atb1 = 10;
				atf1 = 18;
				atf2 = 20;
				abreportas(mapa,porta2l,porta2c);
				
			}
			if(morreu == 3)
			{

				
				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 6;
				hp1max = 160;
				hp2max = 180;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 13;
				atb1 = 11;
				atf2 = 26;
				atf1 = 22;
				abreportas(mapa,porta3l,porta3c);
				 
			}
			if(morreu == 4)
			{

				 
				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 9;
				hp1max = 190;
				hp2max = 200;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 15;
				atb1 = 14;
				atf1 = 28;
				atf2 = 30;
				abreportas(mapa,porta4l,porta4c);
				
			}
			if(morreu == 5)
			{

				 
				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 12;
				hp1max = 220;
				hp2max = 230;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 18;
				atb1 = 17;
				atf1 = 34;
				atf2 = 36;
				abreportas(mapa,porta5l,porta5c);
				
			}
			if(morreu == 6)
			{

				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 14;
				hp1max = 240;
				hp2max = 250;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 20;
				atb1 = 19;
				atf1 = 38;
				atf2 = 40;
				
				abreportas(mapa,porta6l,porta6c);
				
			}
			if(morreu == 7)
			{
				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 16;
				hp1max = 260;
				hp2max = 260;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 21;
				atb1 = 21;
				atf2 = 42;
				atf1 = 42;
		
				abreportas(mapa,porta7l,porta7c);
				
			}
			if(morreu == 8)
			{

				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 18;
				hp1max = 280;
				hp2max = 280;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 23;
				atb1 = 23;
				atf1 = 46;
				atf2 = 46;

				
				abreportas(mapa,porta8l,porta8c);
				
			}
			if(morreu == 9)
			{

				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 20;
				hp1max = 300;
				hp2max = 300;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 25;
				atb1 = 25;
				
				abreportas(mapa,porta9l,porta9c);
				
			}
			if(morreu == 10)
			{

				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 22;
				hp1max = 320;
				hp2max = 320;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 27;
				atb1 = 27;
				atf1 = 54;
				atf2 = 54;
				
				abreportas(mapa,porta10l,porta10c);
				
			}
			if(morreu == 11)
			{

				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 24;
				hp1max = 340;
				hp2max = 340;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 29;
				atb1 = 29;
				atf1 = 58;
				atf2 = 58;
				
				abreportas(mapa,porta11l,porta11c);
				
			}
			if(morreu == 12)
			{

				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				level = 25;
				hp1max = 350;
				hp2max = 450;
				hp1 = hp1max;
				hp2 = hp2max;
				atb2 = 40;
				atb1 = 30;
				atf1 = 60;
				atf2 = 80;
				
				abreportas(mapa,porta12l,porta12c);
				
			}



				if(moreuu == 1 && morreu == 0)
				{

					hp2max = 120;
					atb2 = 7;
					atf2 = 14;
					hp2 = hp2max;
				if(mapa[1][15] == 'V')
				{ 
					atb2 = 12;
					atf2 = 24;
					lifes2 = 10;
					printf("vampiro pegou arma1\n");
				}
				}
				if(moreuu == 1 && morreu == 1)
				{

					hp2max = 160;
					atb2 = 11;
					atf2 = 22;
					hp2 = hp2max;
				if(mapa[1][33] == 'V')
				{
					hp2max = 180;
					hp2 = hp2max;
					printf("Vampiro pegou armadura\n");
				}
				
					
				}
				if(moreuu == 1 && morreu == 2)
				{
					hp2max = 160;
					atb2 = 11;
					atf2 = 22;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 3)
				{
					hp2max = 190;
					atb2 = 14;
					atf2 = 28;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 4)
				{
					hp2max = 240;
					atb2 = 19;
					atf2 = 38;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 5)
				{
					hp2max = 240;
					atb2 = 12;
					atf2 = 24;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 6)
				{
					hp2max = 260;
					atb2 = 21;
					atf2 = 42;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 7)
				{
					hp2max = 270;
					atb2 = 22;
					atf2 = 44;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 8)
				{
					hp2max = 290;
					atb2 = 24;
					atf2 = 48;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 9)
				{
					hp2max = 310;
					atb2 = 26;
					atf2 = 52;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 10)
				{
					hp2max = 330;
					atb2 = 28;
					atf2 = 56;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 11)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 12)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
			if(moreuu == 2 && morreu == 0)
				{

					hp2max = 130;
					atb2 = 8;
					atf2 = 16;
					hp2 = hp2max;
				if(mapa[1][15] == 'V')
				{ 
					atb2 = 13;
					atf2 = 26;
					lifes2 = 10;
					printf("vampiro pegou arma1\n");
				}
				}
				if(moreuu == 2 && morreu == 1)
				{

					hp2max = 170;
					atb2 = 12;
					atf2 = 24;
					hp2 = hp2max;
				if(mapa[1][33] == 'V')
				{
					hp2max = 200;
					hp2 = hp2max;
					printf("Vampiro pegou armadura\n");
				}
		
					
				}
				if(moreuu == 2 && morreu == 2)
				{
					hp2max = 170;
					atb2 = 12;
					atf2 = 24;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 3)
				{
					hp2max = 200;
					atb2 = 15;
					atf2 = 30;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 4)
				{
					hp2max = 250;
					atb2 = 20;
					atf2 = 40;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 5)
				{
					hp2max = 250;
					atb2 = 20;
					atf2 = 40;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 6)
				{
					hp2max = 270;
					atb2 = 22;
					atf2 = 44;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 7)
				{
					hp2max = 280;
					atb2 = 23;
					atf2 = 46;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 8)
				{
					hp2max = 300;
					atb2 = 25;
					atf2 = 50;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 9)
				{
					hp2max = 320;
					atb2 = 27;
					atf2 = 54;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 10)
				{
					hp2max = 340;
					atb2 = 29;
					atf2 = 58;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 11)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 2 && morreu == 12)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 0)
				{

					hp2max = 140;
					atb2 = 9;
					atf2 = 18;
					hp2 = hp2max;
				if(mapa[1][15] == 'V')
				{ 
					atb2 = 14;
					atf2 = 28;
					lifes2 = 10;
					printf("vampiro pegou arma1\n");
				}
				}
				if(moreuu == 3 && morreu == 1)
				{

					hp2max = 180;
					atb2 = 13;
					atf2 = 26;
					hp2 = hp2max;
				if(mapa[1][33] == 'V')
				{
					hp2max = 200;
					hp2 = hp2max;
					printf("Vampiro pegou armadura\n");
				}
				
					
				}
				if(moreuu == 3 && morreu == 2)
				{
					hp2max = 180;
					atb2 = 13;
					atf2 = 26;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 3)
				{
					hp2max = 210;
					atb2 = 16;
					atf2 = 32;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 4)
				{
					hp2max = 260;
					atb2 = 21;
					atf2 = 42;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 5)
				{
					hp2max = 260;
					atb2 = 21;
					atf2 = 42;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 6)
				{
					hp2max = 280;
					atb2 = 23;
					atf2 = 46;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 7)
				{
					hp2max = 290;
					atb2 = 24;
					atf2 = 48;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 8)
				{
					hp2max = 310;
					atb2 = 26;
					atf2 = 52;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 9)
				{
					hp2max = 330;
					atb2 = 28;
					atf2 = 56;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 10)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 11)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 3 && morreu == 12)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 0)
				{

					hp2max = 150;
					atb2 = 10;
					atf2 = 20;
					hp2 = hp2max;
				if(mapa[1][15] == 'V')
				{ 
					atb2 = 15;
					atf2 = 30;
					lifes2 = 10;
					printf("vampiro pegou arma1\n");
				}
				}
				if(moreuu == 4 && morreu == 1)
				{

					hp2max = 190;
					atb2 = 14;
					atf2 = 28;
					hp2 = hp2max;
				if(mapa[1][33] == 'V')
				{
					hp2max = 200;
					hp2 = hp2max;
					printf("Vampiro pegou armadura\n");
				}
				
					
				}
				if(moreuu == 4 && morreu == 2)
				{
					hp2max = 190;
					atb2 = 14;
					atf2 = 28;
					hp2 = hp2max;
				}
				if(moreuu == 1 && morreu == 3)
				{
					hp2max = 220;
					atb2 = 17;
					atf2 = 34;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 4)
				{
					hp2max = 270;
					atb2 = 22;
					atf2 = 44;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 5)
				{
					hp2max = 270;
					atb2 = 22;
					atf2 = 44;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 6)
				{
					hp2max = 290;
					atb2 = 24;
					atf2 = 48;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 7)
				{
					hp2max = 300;
					atb2 = 25;
					atf2 = 50;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 8)
				{
					hp2max = 310;
					atb2 = 27;
					atf2 = 54;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 9)
				{
					hp2max = 340;
					atb2 = 29;
					atf2 = 58;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 10)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 11)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}
				if(moreuu == 4 && morreu == 12)
				{
					hp2max = 350;
					atb2 = 30;
					atf2 = 60;
					hp2 = hp2max;
				}

			
				if(morreu != 1 && morreu != 2 && morreu != 3 && morreu != 4 && morreu != 5 && morreu != 6 && morreu != 7 && morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp1linha, &vamp1coluna);
				}
				if(morreu != 2 && morreu != 3 && morreu != 4 && morreu != 5 && morreu != 6 && morreu != 7 && morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp2linha, &vamp2coluna);
				}
				if(morreu != 3 && morreu != 4 && morreu != 5 && morreu != 6 && morreu != 7 && morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp3linha, &vamp3coluna);
				}
				if(morreu != 4 && morreu != 5 && morreu != 6 && morreu != 7 && morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp4linha, &vamp4coluna);
				}
				if(morreu != 5 && morreu != 6 && morreu != 7 && morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp5linha, &vamp5coluna);
				}
				if(morreu != 6 && morreu != 7 && morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp6linha, &vamp6coluna);
				}
				if(morreu != 7 && morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp7linha, &vamp7coluna);
				}
				if(morreu != 8 && morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp8linha, &vamp8coluna);
				}
				if(morreu != 9 && morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp9linha, &vamp9coluna);
				}
				if(morreu != 10 && morreu != 11 && morreu != 12)
				{ 

				movimentov(mapa, &vamp10linha, &vamp10coluna);
				}
				if(morreu != 11 && morreu != 12)
				{

				movimentov(mapa, &vamp11linha, &vamp11coluna);
				}
				if(morreu != 12)
				{ 

				movimentov(mapa, &vamp12linha, &vamp12coluna);
				}


				if(mapa[1][15] == '@')
				{
					atb1 += 5;
					atf1 += 5;
					lifes1 = 10;
					printf("Voce pegou espada\n");
				}
				if(mapa[1][33] == '@')
				{
					hp1max += 20;
					hp1 += 20; 
					printf("Voce pegou armadura ferro\n");
				}
				if(mapa[10][37] == '@')
				{
					p1++; 
					printf("Voce pegou pocao\n");
				}
				if(mapa[15][44] == '@'){
					p1++;
					printf("Voce pegou pocao\n");
				}
				if(mapa[16][22] == '@')
				{
					hp1max += 30;
					hp1 += 30; 
					printf("Voce pegou armadura de titanio\n");
				}







			jogador_linha -= 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				
				moreuu++;
				jogador_linha += 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		}
	}
		else
		{
			jogador_linha += 2;
			
		}
			jogador_coluna -= 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
			
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		}
	}
		else
		{
			jogador_coluna += 2;
			
		}
			jogador_linha += 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
			
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 2;
				mapa[jogador_linha][jogador_linha] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
			
				jogador_linha -= 2; 
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		}
	}
		else 
		{
			jogador_linha -= 2;
			
		}
			jogador_coluna += 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_coluna -= 2;
			
		}

		
				jogador_linha -= 2;
				jogador_coluna -= 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 2;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
			
				jogador_linha += 2;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 2;
			jogador_coluna += 2;

		}
				jogador_linha += 2;
			    jogador_coluna += 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
			
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 2;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				
				moreuu++;
				jogador_linha -= 2;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha -= 2;
			jogador_coluna -= 2;
		}
				jogador_linha += 2;
				jogador_coluna -= 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 2;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;	
				jogador_linha -= 2;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha -= 2;
			jogador_coluna += 2;
		}
				jogador_linha -= 2;
				jogador_coluna += 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
			
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 2;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;			
				jogador_linha += 2;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 2;
			jogador_coluna -= 2;
		}

				jogador_linha -= 1;
				jogador_coluna += 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
			
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 1;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha += 1;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 1;
			jogador_coluna -= 1;
		}
				jogador_linha += 1;
				jogador_coluna -= 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 1;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha -= 1;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha -= 1;
			jogador_coluna += 1;
		}
				jogador_linha += 1;
				jogador_coluna += 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 1;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha -= 1;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha -= 1;
			jogador_coluna -= 1;
		}
				jogador_linha -= 1;
				jogador_coluna -= 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 1;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
			
				moreuu++;
				jogador_linha += 1;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 1;
			jogador_coluna += 1;
		}
				jogador_linha -= 1;
				jogador_coluna += 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 1;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha += 1;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 1;
			jogador_coluna -= 2;
		}
				jogador_linha -= 2;
				jogador_coluna += 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 2;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha += 2;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 2;
			jogador_coluna -= 1;
		}
				jogador_linha += 1;
				jogador_coluna += 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
			
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 1;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;	
				jogador_linha -= 1;
				jogador_coluna -= 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		} 
	}
		else
		{
			jogador_linha -= 1;
			jogador_coluna -= 2;
		}
				jogador_linha -= 1;
				jogador_coluna -= 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 1;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha += 1;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 1;
			jogador_coluna += 2;
		}
				jogador_linha += 1;
				jogador_coluna -= 2;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 1;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha -= 1;
				jogador_coluna += 2;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha -= 1;
			jogador_coluna += 2;
		}
				jogador_linha += 2;
				jogador_coluna -= 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 2;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha -= 2;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}

		else
		{
			jogador_linha -= 2;
			jogador_coluna += 1;
		}
				jogador_linha += 2;
				jogador_coluna += 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{


			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha -= 2;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha -= 2;
				jogador_coluna -= 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha -= 2;
			jogador_coluna -= 1;
		}
				jogador_linha -= 2;
				jogador_coluna -= 1;
		if(mapa[jogador_linha][jogador_coluna] == 'V' || mapa[jogador_linha][jogador_coluna] == 'D')
		{ 
			if(mapa[jogador_linha][jogador_coluna] != 'M')
			{ 
			result = batalha(&hp1max, &hp2max, &hp1, &hp2, &atb1, &atb2, &atf1, &atf2, &p1, &p2, &lifes1, &lifes2);	
			
			if(result == 2)
			{
				morreu++;
				
				mapa[jogador_linha][jogador_coluna] = 'M';
				jogador_linha += 2;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = '@';
			}
		    if(result == 1)
			{
				moreuu++;
				jogador_linha += 2;
				jogador_coluna += 1;
				mapa[jogador_linha][jogador_coluna] = ' ';
				jogador_linha = 3;
				jogador_coluna = 7;
				mapa[jogador_linha][jogador_coluna] = '@';
			}	
		}
	}
		else
		{
			jogador_linha += 2;
			jogador_coluna += 1;
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
					 printf("Nao pode atravessar parede\n");
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
					printf("Nao pode atravessar parede\n");
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
					printf("Nao pode atravessar parede\n");
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
					printf("Nao pode atravessar parede\n");
				}
			}


			
	system("clear");
	mostra_mapa(mapa, &level, &hp1, &hp1max, &atb1, &lifes1, &p1);
	 
	 }while(mapa[22][65] == 'D' || moreuu < 5);
	 if(moreuu == 5)
	 {
	 	printf("Sinto muito o mal venceu\n");
	 }
	 if(mapa[22][64] == 'M')
	 {
	 	printf("Voce venceu !\n");
	 }
}





int main(){
	

	
    


    char mapa[25][75] = { "###########################################################################",
                          "#            ##W               ##A             ##              ##         #",
                          "#             -                ##              ##              ##         #",
                          "#      @     ##                 +               +       V       +    V    #",
                          "#            ##       V        ##       V      ##              ##         #",
                          "#            ##                ##              ##              ##         #",
                          "##################################################################### #####",
                          "#####################################################################-#####",
                          "#          ##           ##      #          #         ##                   #",
                          "#          ##           ##      ############         ##                   #",
                          "#          ##    V      ##      -    P     +    V    +                    #",
                          "#    V      +            +   V  ############         ##                   #",
                          "#          ##           ##      #          ############         V         #",
                          "#          ##           ##      #                     #                   #",
                          "######+##########################                     #                   #",
                          "#          ##                               P         #                   #",
                          "#          -          A                               #                   #",
                          "#     V    ##           #################             #####################",
                          "#          ##           ##             ##             #                   #",
                          "######+##################               #             #                   #",
                          "#########################               #             #                   #",
                          "#           +           -     V         +             -         D         #",
                          "#     V     #############               #             #                   #",
                          "#           ################          ###             #                   #",
                          "###########################################################################"};
	mostra_mapa1(mapa);    
    movimenta(mapa);



         return 0;


}
