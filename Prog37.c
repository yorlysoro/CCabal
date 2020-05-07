#include <stdio.h>

int main(void)
{
	printf("operador de pre y post incremento\n");
	int x = 4;
	printf("x = %i\n", x);
	
	printf("x = %i\n", x - 1);
	printf("x = %i\n", x );
	printf("x = %i\n", x -= 1 );
	
	printf("x = %i\n", x);
	printf("x--  = %i\n", x-- );
	printf("x despues de la operacion = %i\n\n", x );
	
	printf("x = %i\n", x );
	printf("--x = %i\n", --x);
	printf("x despues de la operacion = %i\n\n", x );
	
	printf("listo\n");
	return 0;
}
