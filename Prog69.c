#include <stdio.h>

void intercambio(int * u, int * v);

int main(void)
{
	int x = 5, y = 10;
	
	printf("Originalmente x = %d y e %d.\n", x, y);
	intercambio(&x, &y);
	printf("En main(), Despues de intercambio( x, y) x = %d e y = %d.\n", x, y);
	
	return 0;
}

void intercambio(int * u, int * v)
{
	int temp;
	
	printf("Inicialmente en intercambio u = %d y v = %d.\n", *u, *v);
	temp = *u;
	*u = *v;
	*v = temp;
	printf("En intercambio(), Despues de intercambiar u = %d y v = %d.\n", *u, *v);
}
