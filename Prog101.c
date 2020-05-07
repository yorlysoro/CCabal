#include <stdio.h>

int main(void)
{
	int x = 30;
	
	printf("x afuera del bloque: %d\n", x);
	{
		int x = 77;
		printf("x adentro del bloque: %d\n", x);
	}
	
	printf("x a fuera del bloque: %d\n", x);
	
	while(x++ < 33)
	{
		int x = 100;
		x++;
		printf("x a dentro del while loop: %d\n", x);
	}
	
	printf("x a fuera del bloque: %d \n", x );
	
	return 0;
}
