#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(void)
{
	FILE *fp;
	
	char Palabras[MAX];
	
	if((fp = fopen("Palabras", "a+")) == NULL)
	{
		fprintf(stderr, "No puedo abrir \"Palabras\" archivo.\n");
		exit(1);
	}
	
	puts("Ingreso las palabras que quieres agregar al archivo.");
	puts("Retorno de carrito al inicio de la linea a terminar");
	
	while(gets(Palabras) != NULL && Palabras[0] != '\0')
	fprintf(fp, "%s", Palabras);
	
	puts("Contenidos del archivo: ");
	rewind(fp);
	
	while(fscanf(fp, "%s", Palabras) == 1)
	puts(Palabras);
	
	if(fclose(fp) != 0)
	{
		fprintf(stderr, "Error: No puedo cerrar el archivo.\n");
		exit(1);
	}
	
	return 0;
}
