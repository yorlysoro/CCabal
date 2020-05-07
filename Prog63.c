#include <stdio.h>

#define TAMANO 4

int main(void)
{
	short fechas[TAMANO], index;
	short * pti;
	double cuentas[TAMANO];
	double * ptf;
	
	pti = fechas;
	ptf = cuentas;
	
	printf("%23s %10s\n", "short", "double");
	for(index = 0; index < TAMANO; index++)
	printf("Puntero + %d: %10p %10p\n", index, pti + index, ptf + index);
	return 0;
}
