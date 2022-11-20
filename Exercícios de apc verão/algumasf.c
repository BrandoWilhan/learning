#include <stdio.h>

int isdigit(char c)
{
	if(c >= '0' && c <= '9')
		return 1;
			
			return 0;

}

int isalpha(char c)
{
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 1;
			
			return 0;
}

int isalnum(char c)
{
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return 1;
			
			return 0;
}

int main()
{
	
	int i = isalnum('7');
	printf("%i\n", i);

	return 0;
}