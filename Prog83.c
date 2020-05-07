#include <stdio.h>

int main(void)
{
	char nombre1[11], nombre2[11];
	
	int cuenta;
	
	printf("Escribe dos nombres por favor: ");
	
	cuenta = scanf("%5s %10s", nombre1, nombre2);
	
	printf("Lei los %d nombres %s y %s.\n", cuenta, nombre1, nombre2);
	
	return 0;
}
