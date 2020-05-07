#include <stdio.h>
#include <string.h>

#define PALABRAS "burro"
#define TAMANO 50

int main(void)

{
	const char * orig = PALABRAS;
	char copia[TAMANO] = "Debe ser muy si quieres un regalo.";
	char * ps;
	
	puts(orig);
	puts(copia);
	
	ps = strcpy(copia + 9, orig);
	
	puts(copia);
	puts(ps);
	
	return 0;
}
