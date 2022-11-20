#include <stdio.h>



int main(){
	

		int i, n = 0;
		char ch;


				for(i = 0; i <= 255; i++)
				{
						printf("%2i -> %c\n", i, (char)i);
					if(n == 20)
					{
							do{
								scanf(" %c", &ch);
							}while(ch != 'c' && ch != 'C');
						
						n = 0;
					}
						n++;
					
				}

	return 0;
}