#include <stdio.h>
#include <stdlib.h>
#include "avl.h"



int altura(arvore r)
{
	int aesq, adir;

	if(r == NULL)
		return 0;

		aesq = altura(r->sae);
		adir = altura(r->sad);

	if(aesq > adir)
		return aesq + 1;
	else
		return adir + 1;

}

int fator_b(arvore r)
{
	if(r == NULL)
		return 0;

	return altura(r->sae) - altura(r->sad);
}

void rse(arvore* pr)
{
	arvore paux; //paux = ponteiro auxiliar
	paux = (*pr)->sad;
	(*pr)->sad = paux->sae;
	paux->sae = *pr;
	*pr = paux;
}

void rsd(arvore* pr)
{
	arvore paux;
	paux = (*pr)->sae;
	(*pr)->sae = paux->sad;
	paux->sad = *pr;
	*pr = paux;
}


int balanceamento_esq(arvore* pr)
{
	int fb; 
	fb = fator_b((*pr)->sae);

	if(fb > 0)
	{	
		rsd(pr);
		return 1;
	}
	else if(fb < 0)
	{
		rse(&(*pr)->sae);
		rsd(pr);
		return 1;
	}
	return 0;
}

int balanceamento_dir(arvore* pr)
{
	int fb; 
	fb = fator_b((*pr)->sad);

	if(fb < 0)
	{	
		rse(pr);
		return 1;
	}
	else if(fb > 0)
	{
		rsd(&(*pr)->sad);
		rse(pr);
		return 1;
	}
	return 0;
}

int balanceamento(arvore* pr)
{
	int fb;
	fb = fator_b(*pr);

	if(fb > 1)
		return balanceamento_esq(pr);
	else if(fb < -1)
		return balanceamento_dir(pr);
	else
		return 0;
}

int insert(arvore* pr, int x)
{
	if(*pr == NULL)
	{
		*pr = malloc(sizeof(no));
		(*pr)->chave = x;
		(*pr)->sae = NULL;
		(*pr)->sad = NULL;
	}
	if((*pr)->chave > x)
	{	
		if(insert(&(*pr)->sae, x));
		{
			if(balanceamento(pr))
				return 0;
			else
				return 1;
		}
		
	}
	if((*pr)->chave < x)
	{
		if(insert(&(*pr)->sad, x));
		{
			if(balanceamento(pr))
				return 0;
			else
				return 1;
		}
	}
	return 0;
}

void em_ordem(arvore r)
{
	if(r != NULL)
	{
		em_ordem(r->sae);
		printf("%d\n", r->chave);
		em_ordem(r->sad);
	}
}

arvore busca_no(arvore r, int x)
{
	arvore rp = r; 
	while(r != NULL && r->chave != x)
		if(r->chave > x)
		{
			rp = r;
			r = r->sae;
		}
		else
		{
			rp = r;
			r = r->sad;
		}
		return rp;
}

arvore remove_raiz(arvore r)
{
	arvore rp, rq;
	if(r->sae == NULL)
	{	
		rq = r->sad;
		free(r);
		return rq;
	}
	rp = r;
	rq = r->sae;
	while(rq->sad != NULL)
	{	
		rp = rq;
		rq = rq->sad;
	}
	if(rp != r)
	{
		rp->sad = rq->sae;
		rq->sae = r->sae;
	}
	rq->sad = r->sad;
	free(r);
	balanceamento(&rq);
	return rq;
}

void remove_no(arvore r, int x)
{
	arvore na;
	na = busca_no(r, x);
	if(na != r)
	{	
		if(na->sad->chave == x)
			na->sad = remove_raiz(na->sad);
		else
			na->sae = remove_raiz(na->sae);
	}
	else
		r = remove_raiz(r);
}	

