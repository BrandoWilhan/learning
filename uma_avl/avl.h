#ifndef A_AVL_H
#define A_AVL_H


typedef struct node* arvore;

typedef struct node
{
	int chave;
	arvore sae, sad;
}no;

int altura(arvore r);

int fator_b(arvore r);

void rse(arvore* pr);

void rsd(arvore* pr);

int balanceamento_esq(arvore* pr);

int balanceamento_dir(arvore* pr);

int balanceamento(arvore* pr);

int insert(arvore* pr, int x);

void em_ordem(arvore r);

arvore busca_no(arvore r, int x);

arvore remove_raiz(arvore r);

void remove_no(arvore r, int x);

#endif