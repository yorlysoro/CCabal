#include <stdio.h>
#include <string.h>

#define PAIS "India"

void ObtenRespuesta(void);

char respuesta[40];

int main(void)
{
	printf("En que pais es el Taj Mahal?");
	ObtenRespuesta();
	
	while(strcmp(respuesta, PAIS))
	{
		printf("No, incorrecto. Otra ves: ");
		ObtenRespuesta();
	}
	
	puts("¡Correcto!");
	
	return 0;
}

void ObtenRespuesta(void)
{
	fgets(respuesta, 37, stdin );
	if(*(respuesta + strlen(respuesta) - 1) == '\n')
	*(respuesta + strlen(respuesta) - 1) = '\0';
}
