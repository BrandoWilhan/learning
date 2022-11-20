#include <stdio.h>
#include <stdlib.h>
#include "lista.h"



int main()
{
	tipo_lista* lista;
	lista = malloc(sizeof(tipo_lista));
	cria_lista(lista);
	insert(lista, 2);
	insert(lista, 3);
	deletar(search(lista, 3));
	listar(lista);
	
	

	return 0;
}