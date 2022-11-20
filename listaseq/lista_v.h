#ifndef	LISTA_V_H
#define LISTA_V_H


typedef struct lista 
{
	int conteudo;
}
Celula;

/*Cria um vetor de tamanho variavel e magnitude "tamanho"*/
Celula* cria_lista (int tamanho, int* Inil, int* Fiml);

/*Em uma lista nao vazia Inicio_lista != Fim_lista logo em uma lista vazia Inicio_lista = Fim_lista*/ 
int verifica_lsvazia (int* Inil, int* Fiml);

/*recebe uma lista linear ls insere o valor x na na posiçao "inserir" da lista*/
void insere_lista (int x, Celula* ls, int* Inil, int* Fiml, int tamanho, int inserir);

/*recebe uma lista linear ls e remove o elemento da lista na posiçao "retirar"*/
int remove_lista (Celula* ls, int* Inil, int* Fiml, int retirar);


#endif