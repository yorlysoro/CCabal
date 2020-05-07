/*Archivo prog105b.c*/
#include <stdio.h>

extern int Contar;
static int total = 0;

void acumularse(int k)
{
	static int subtotal = 0;
	if(k <= 0)
	{
		printf("ciclo de loop: %d\n", Contar);
		printf("subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}
