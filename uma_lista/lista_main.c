#include <stdio.h>
#include <stdlib.h>
#include "lista.h"



int main()
{
	int i;
	tipo_lista* lista;
	lista = malloc(sizeof(tipo_lista));
	cria_lista(lista);
	for(i = 1; i <= 5; i++)
		insert(lista, i);
	deletar(search(lista, 3));
	listar(lista);
	
	

	return 0;
}