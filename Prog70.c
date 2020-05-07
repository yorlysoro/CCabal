#include <stdio.h>

void intercambio(void);

int x = 5, y = 10;

int main(void)
{
	printf("Originalmente x = %d y e = %d.\n", x, y);
	intercambio();
	printf("En main(), Despues de intercambio( x, y ) x = %d e y = %d.\n", x, y);
	return 0;
}

void intercambio(void)
{
	int temp;
	printf("Inicialmente  en intercambio x = %d e y = %d.\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("En intercambio(), Despues de intercambiar x = %d e y = %d.\n", x, y);
}
