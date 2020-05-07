#include <stdio.h>

int main(void)
{
	const char * mensaje = "No seas tonto";
	const char * copia;
	
	copia = mensaje;
	
	printf("%s\n", copia);
	printf("mensaje = %s; &mensaje = %p; valor = %p\n", mensaje, &mensaje, mensaje);
	printf("copia = %s; &copia = %p; valor = %p\n", copia, &copia, copia);
	return 0;
}
