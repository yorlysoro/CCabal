#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 80

void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
	char Linea[LIMIT];
	
	puts("Ingresa una linea de texto por favor:");
	fgets(Linea, 79, stdin);
	ToUpper(Linea);
	puts(Linea);
	printf("Esta linea tiene %d caracteres de puntuacion.\n", PunctCount(Linea));
	
	return 0;
}

void ToUpper(char * str)
{
	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
}

int PunctCount(const char * str)
{
	int ct = 0;
	
	while(*str)
	{
		if(ispunct(*str))
		ct++;
		str++;
	}
	return ct;
}
