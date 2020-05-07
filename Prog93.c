#include <stdio.h>
#include <string.h>

#define TAMANO 40
#define TAMANODESTINO 7
#define LIM 5

int main(void)
{
	char qwords[LIM][TAMANO];
	char temp[TAMANO];
	int i = 0;
	
	printf("Escribe %d palabras que se inician con la letra c:\n", LIM);
	
	while(i < LIM)
	{
		fgets(temp, TAMANO - 2, stdin);
		
		if(*temp != 'c')
		{
			if(strlen(temp) < TAMANO - 2)
			*(temp + strlen(temp) - 1) = '\0';
			printf("%s no se inicia con la letra c!:\n", temp);
		}
		else
		{
			if(strlen(temp) < TAMANO - 2)
			*(temp + strlen(temp) - 1) = '\0';
			strncpy(qwords[i], temp, TAMANODESTINO - 1);
			*(qwords[i] + TAMANODESTINO - 1) = '\0';
			i++;
		}
	}
	puts("\nAqui esta la lista de palabras aceptadas.");
	for(i = 0; i < LIM; i++)
	puts(qwords[i]);
	
	return 0;
}
