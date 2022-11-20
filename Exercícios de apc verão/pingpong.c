#include <stdio.h>

void pong(int x);

void ping(int i)
{
	switch(i)
	{
		case 1:
		case 2:
		case 3: while(i--)
					printf("\n%d", --i);
					break;
		case 25: pong(3);
				 break;
		default:	printf("\nJa passei em C");
				 pong(123);
	}
}

void pong(int x)
{
	int j = 0;
	switch(x)
	{
		case 1:
		case 2: ping(x);
		case 3:	j = 5;
				j++;
				return;
		default: printf("\nOla");

	}
	printf("\nVou Sair");
}

int main()
{
	ping(25);

	return 0;
}