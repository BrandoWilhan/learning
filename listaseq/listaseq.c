
#include <stdio.h>
#include <stdlib.h>
#include "lista_v.h"


typedef struct lista
{	
	int conteudo;
}Celula;

Celula* cria_lista (int tamanho, int* Inil, int* Fiml)
{
	Celula* lista_sequencial;
	lista_sequencial = (Celula*) malloc(tamanho*sizeof(Celula));
	*Inil = *Fiml;
	return lista_sequencial;
}

int verifica_lsvazia (int* Inil, int* Fiml)
{
	if((*Inil) == (*Fiml))
		return 1;
	else
		return 0;
}
void insere_lista (int x, Celula* ls, int* Inil, int* Fiml, int tamanho, int inserir)
{
	int i;
	
	if((*Inil == 0 && *Fiml == tamanho) || (*Inil + inserir < 0 || *Inil + inserir == tamanho)) /* "tamanho" eh o tamanho do vetor */
	{	
		printf("Overflow\n");
		return;
	}
	if(verifica_lsvazia(Inil, Fiml))
	{
		*Inil = inserir;
		*Fiml = inserir + 1;
	}
	if((inserir + *Inil) <= (*Fiml - *Inil)/2 || *Fiml == tamanho) /*"FimLista - InicioLista" eh o tam(lista) que eh != tam(vetor)*/
	{	
		(*Inil)--;
		for(i = (*Inil); i < (inserir + *Inil); i++)	/*"inserir + Inil" eh pra garantir que a pos de inserçao esteja na lista*/
			ls[i] = ls[i+1];
	}
	if((inserir + *Inil) > (*Fiml - *Inil)/2 || *Inil == 0)
	{
		(*Fiml)++;
		for(i = (*Fiml); i > (inserir + *Inil); i--)
			ls[i] = ls[i-1];
	}
	ls[inserir].conteudo = x;
	
}
int remove_lista (Celula* ls, int* Inil, int* Fiml, int retirar)
{
	int i;
	int x;
	
	if(verifica_lsvazia(Inil, Fiml))
	{
		printf("Underflow\n");
	}
	if((retirar + *Inil) <= (*Inil - *Fiml)/2)
	{
		x = ls[retirar].conteudo;
		for(i = (retirar + *Inil); i > (*Inil); i--)
			ls[i] = ls[i-1];
		(*Inil)++;
	}
	if((retirar + *Inil) > (*Inil - *Fiml)/2)
	{
		x = ls[retirar].conteudo;
		for(i = (retirar + *Inil); i < (*Fiml); i++)
			ls[i] = ls[i+1];
		(*Fiml)--;
	}
	return x;
} 

