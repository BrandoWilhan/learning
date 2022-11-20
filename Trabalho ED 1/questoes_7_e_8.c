#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct elemento{
	char dado;
	struct elemento* proximo;
}t_elemento;

typedef struct lista{
	t_elemento* primeiro;
	t_elemento* ultimo;
}t_lista;

t_lista* incializa(){
	t_lista* lista = malloc(sizeof(t_lista));
	lista->primeiro = NULL;
	lista->ultimo = NULL;

	return lista;
}

t_elemento* elemento(char dado){
	t_elemento* elemento = malloc(sizeof(t_elemento));
	elemento->dado = dado;
	elemento->proximo = NULL;

	return  elemento;
}

void empilha(char y,t_lista* lista){

	t_elemento *atual = NULL;
	atual = elemento(y);

	atual->dado = y;
	atual->proximo  = lista->primeiro;

	lista->primeiro = atual;
}

char desempilha(t_lista* lista){
	char dadoAtual;
	t_elemento* atual = NULL;

	if(lista->primeiro == NULL){
		return -1;
	}
	else{
		atual = lista->primeiro->proximo;
		dadoAtual = lista->primeiro->dado;
		free(lista->primeiro);
		lista->primeiro = atual;

		return dadoAtual;		
	}

	return 0;
}

int main(){
	
	t_lista* lista = incializa();

	/*Questão 07*/
	char string[16];
	printf("Digite a frase:\n");
	scanf("%[^\n]",string);

	int i = 0;
	char conteudo;
	while(string[i] != '\0' && i < 16){
		if(string[i] != ' '){
			empilha(string[i],lista);
		}
		if(string[i] == ' '){
			empilha(string[i],lista);
		}
		if(string[i] == ' ' || string[i+1] == '\0'){

			while(lista->primeiro != NULL){
				conteudo = desempilha(lista);
				printf("%c",conteudo );
			}
		}
		i++;
	}

	/*Questão 08*/
	char word[16];
	printf("Digite a palavra:\n");
	getchar();
	scanf("%[^\n]",word);

	i = 0;
	int aux = 0;
	while(word[i] != '\0' && i < 16){
		empilha(word[i],lista);
		i++;
		aux++;
	}
	i = 0;
	while(lista->primeiro != NULL && word[i] != '\0' && i < 16){
		conteudo = desempilha(lista);
		if(conteudo == toupper(word[i]) || conteudo == tolower(word[i])){
			aux--;
		}
		i++;
	}

	if(aux == 0){
		printf("É palindromo\n");
	}

	free(lista);



	return 0;
}

