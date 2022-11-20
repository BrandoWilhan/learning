#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

int main()
{
	int i;
	arvore r = NULL;
	for(i = 0; i < 8; i++)
		insert(&r, i);
	remove_no(r, 6);
	em_ordem(r);
	return 0;
}