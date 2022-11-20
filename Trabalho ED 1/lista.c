#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


void cria_lista(tipo_lista* le)
{
	le->primeiro =  malloc(sizeof(celula));
	le->ultimo = le->primeiro;
	le->primeiro->prox = NULL;
}

void insert(tipo_lista* le, int x)
{
	le->ultimo->prox =  malloc(sizeof(celula));
	le->ultimo = le->ultimo->prox;
	le->ultimo->elem = x;
	le->ultimo->prox = NULL;
}

apontador search(tipo_lista* le, int x)
{
	apontador p, q;
	p = le->primeiro;
	q = le->primeiro->prox;
	while(q != NULL && q->elem != x)
	{
		p = q;
		q = q->prox;
	}
	if(q != NULL)
		return p;
	else
		return NULL;
}

apontador deletar(apontador p)
{
	if(p != NULL)
	{	
		apontador tmp;
		tmp = p->prox;
		p->prox = tmp->prox;
		free(tmp);
	}
}

void listar(tipo_lista* le)
{
	apontador p;
	for(p = le->primeiro->prox; p != NULL; p = p->prox)
		printf("valor da celula: %d\n", p->elem);
}