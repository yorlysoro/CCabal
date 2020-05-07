#include <stdio.h>
#define TAMANO 10

int sum(int ar[], int n);

int main(void)
{
	int canicas[TAMANO] = {20,10,5,39,4,16,19,26,31,20};
	long solucion;
	
	solucion = sum(canicas, TAMANO);
	printf("El numero total de canicas es %ld.\n", solucion);
	
	printf("El tamano de canicas es %zd bytes.\n", sizeof canicas);
	
	return 0;
}

int sum(int ar[], int n)
{
	int i, total = 0;
	
	for(i = 0; i < n; i++)
	total += ar[i];
	printf("El tamano de ar es %zd bytes.\n", sizeof ar);
	
	return total;
}
