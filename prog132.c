#include <stdio.h>

#define SQUARE(X) X*X
#define CUADRADO(X) (X)*(X)
#define CUAD(x) ((x)*(x))
#define PR(X) printf("El resultado es %d\n", X)

int main(void)
{
	int x = 4;
	int z;
	
	printf("x = %d\n", x);
	
	z = SQUARE(x);
	printf("Evaluando SQUARE(x): ");
	PR(z);
	
	z = SQUARE(2);
	printf("Evaluando SQUARE(2): ");
	PR(z);
	
	printf("Evaluando SQUARE(x+2): ");
	PR(SQUARE(x+2));
	
	printf("Evaluando CUADRADO(x+2): ");
	PR(CUADRADO(x+2));
	
	printf("Evaluando 100/SQUARE(2): ");
	PR(100/SQUARE(2));
	
	printf("Evaluando 100/CUAD(2): ");
	PR(100/CUAD(2));
	
	printf("Evaluando CUAD(x+2): ");
	PR(CUAD(x+2));
	
	printf("x is %d.\n", x);
	printf("Evaluadno SQUARE(++x): ");
	
	PR(SQUARE(++x));
	printf("Despues de intercambiar, x is %x\n", x);
	
	x = 4;
	
	printf("x is %d\n", x);
	printf("Evaluando CUAD(++x): ");
	
	PR(CUAD(++x));
	printf("Despues de intercambiar, x es %x\n", x);
	
	return 0;
}
