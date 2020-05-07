#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char numero[30];
	char * Fin;
	long Valor;
	
	printf("Ingresa un numero (returno de carro para terminar): ");
	
	while(fgets(numero, 29, stdin) && numero[0] != '\n')
	{
		*(numero + (strlen(numero) - 1)) = '\0';
		
		Valor = strtol(numero, &Fin, 10);
		printf("Valor: %ld, terminado a %s (%d)\n", Valor, Fin, *Fin);
		Valor = strtol(numero, &Fin, 16);
		printf("Valor: %ld, terminado a %s (%d)\n", Valor, Fin, *Fin );
		
		printf("Siguiente numero: ");
	}
	
	puts("\n¡Adios!\n");
	return 0;
}
