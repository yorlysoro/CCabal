#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFTAMANO 1024
#define STROZO 81

void append(FILE * fuente, FILE * dest);

int main(void)
{
	FILE *ADest, *AFuente;
	
	int Archivos = 0;
	
	char ArchivoDestino[STROZO], ArchivoFuente[STROZO];
	
	printf("Ingresa el nombre del archivo de destino: ");
	fgets(ArchivoDestino, STROZO - 2, stdin);
	
	if(*(ArchivoDestino + strlen(ArchivoDestino) - 1 ) != '\n')
	{
		printf("El nombre que entrates es demasiado largo.\n"
		"Solo %d chars MAX\n", STROZO - 2);
		exit(1);
	}
	
	else
	*(ArchivoDestino + strlen(ArchivoDestino) - 1 ) = '\0';
	
	if((ADest = fopen(ArchivoDestino, "a")) == NULL)
	{
		fprintf(stderr, "No puedo abrir %s\n", ArchivoDestino);
		exit(2);
	}
	
	if(setvbuf(ADest, NULL, _IOFBF, BUFTAMANO) != 0)
	{
		fputs("No puedo crear el buffer de salida\n", stderr);
		exit(3);
	}
	
	puts("ingresa el nombre del primer archivo de fuente (linea vacio a terminar): ");
	while(fgets(ArchivoFuente, STROZO - 2, stdin) && ArchivoFuente[0] != '\n')
	{
		if(*(ArchivoFuente + strlen(ArchivoFuente) - 1 ) != '\n')
		{
			printf("El nombre que entrastes es demasiado largo.\n"
			"Solo %d chars MAX\n", STROZO - 2);
			exit(1);
		}
		else
		*(ArchivoFuente + strlen(ArchivoFuente) - 1) = '\0';
		
		if(strcmp(ArchivoFuente, ArchivoDestino) == 0)
		fputs("No puede usar el mismo archivo por fuente y destino\n", stderr);
		else if(( AFuente = fopen(ArchivoFuente, "r")) == NULL)
		fprintf(stderr, "No puedo abrir %s\n", ArchivoFuente);
		else
		{
			if(setvbuf(AFuente, NULL, _IOFBF, BUFTAMANO) != 0)
			{
				fputs("No puedo cerrar el buffer de ingreso\n", stderr);
				continue;
			}
			append(AFuente, ADest);
			if(ferror(AFuente) != 0)
			fprintf(stderr, "Error en leer el archivo %s\n", ArchivoFuente);
			if(ferror(ADest) != 0)
			fprintf(stderr, "Error en escribir el archivo file %s\n", ArchivoDestino);
			fclose(AFuente);
			Archivos++;
			printf("Archivo %s agregada\n", ArchivoFuente);
			puts("Siguiente archivo(Linea vacio para terminar): ");
		}
	}
	
	printf("Listo. %d archivos agregados.\n", Archivos);
	fclose(ADest);
	
	return 0;
} 

void append(FILE * fuente, FILE * dest)
{
	size_t bytes;
	static char temp[BUFTAMANO];
	while((bytes = fread(temp, sizeof(char), BUFTAMANO, fuente)) > 0)
	fwrite(temp, sizeof(char), bytes, dest);
}
