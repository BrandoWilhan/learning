#include <stdio.h>


void cabecalho(){
	
	char arquivo[21]; 
	char nome[21]; 
	char o_que_faz[21]; 

	
	scanf("%[^\n]", arquivo);
	__fpurge(stdin);
	scanf("%[^\n]", nome);
	__fpurge(stdin);
	scanf("%[^\n]", o_que_faz);
	__fpurge(stdin);
	 printf("/** @file: %s\n", arquivo);
	 printf("* @author: %s\n", nome);
	 printf("* @disciplina: Algoritmos e Programaçao de Computadores\n");
	 printf("*\n");
	 printf("*%s*/\n", o_que_faz);




	return;
}

int main(){

	cabecalho();


	return 0;
}