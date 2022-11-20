#include <stdio.h>


int Abs(int x)
{
	if(x < 0)
		x = x*(-1);
	return x;
}

int main()
{
	printf("%d\n",Abs(2));
	return 0;
}