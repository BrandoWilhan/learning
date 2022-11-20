#ifndef LISTA_H
#define LISTA_H

typedef struct t_celula* apontador;

typedef struct t_celula
{
	int elem;
	apontador prox;
}celula;

typedef struct t_lista
{
	apontador primeiro, ultimo;	
}tipo_lista;

//cria uma lista encadeada com cabeça e retorna seu endereço.
void cria_lista(tipo_lista* le);

//recebe uma lista encadeada com cabeça e insere no fim da lista.
void insert(tipo_lista* le, int x);

//recebe uma lista encadeada com cabeça e procura o elemento x nela se existir retorna o endereço da celula anterior, 
//se não existe devolve NULL.
apontador search(tipo_lista* le, int x);

//deleta a proxima celula apontada pela celula p.
void deletar(apontador p);

//recebe uma lista encadeada com cabeça e mostra seus elementos.
void listar(tipo_lista* le);

#endif