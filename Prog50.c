#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
	char c, prev;
	
	long n_chars = 0L;
	
	int n_lineas = 0, n_palabras = 0, p_lineas = 0;
	
	bool inpalabra = false;
	
	printf("Introduzca el texto para analizar (| para terminar): \n");
	prev = '\n';
	while((c = getchar()) != STOP)
	{
		n_chars++;
		if(c == '\n')
		n_lineas++;
		if(!isspace(c) && !inpalabra)
		{
			inpalabra = true;
			n_palabras++;
		}
		if(isspace(c) && inpalabra)
		inpalabra = false;
		prev = c;
	}
	if(prev != '\n')
	p_lineas = 1;
	printf("Characters = %ld, palabras = %d, lineas = %d, ", n_chars, n_palabras, n_lineas);
	printf(" Lineas parciales = %d\n", p_lineas);
	return 0;
}
