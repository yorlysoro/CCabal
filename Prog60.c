#include <stdio.h>
#define TAMANO 4

int main(void)
{
	int algunos_datos[TAMANO] = {1492, 1066},
	i;
	printf("\n%2s%21s\n--------------------\n", "i", "algunos_datos[i]");
	for(i = 0; i < TAMANO; i++)
	printf("%2d%14d\n",i, algunos_datos[i]);
	return 0;
}
