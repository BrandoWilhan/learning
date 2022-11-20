#include <stdio.h>


int main()
{
	
	int indice_de_poluicao;

		printf("Digite o indice de pouluicao\n");
		scanf("%d", &indice_de_poluicao);

	if(indice_de_poluicao < 0.05)
		printf("Abaixo do normal\n");
	if(indice_de_poluicao > 0.05 && indice_de_poluicao < 0.25)
		printf("Normal\n");
	if(indice_de_poluicao > 0.25 &&  indice_de_poluicao < 0.30)
		printf("Alerta\n");
	if(indice_de_poluicao > 0.30 && indice_de_poluicao < 0.40)
		printf("Industrias da lista A: suspensas\n");
	if(indice_de_poluicao > 0.40 && indice_de_poluicao < 0.50)
	{
		printf("Idustrias da lista A: suspensas\n");
		printf("Idustrias da lista B: suspensas\n");
	}
	if(indice_de_poluicao > 0.50)
	{
		printf("Idustrias da lista A: suspensas\n");
		printf("Idustrias da lista B: suspensas\n");
		printf("Idustrias da lista C: suspensas\n");

	}
	
	

	return 0;
}