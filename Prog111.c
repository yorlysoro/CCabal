#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main(int argc, char *argv[])
{
	FILE * IngresoArchivo, *SalidaArchivo;
	
	int ch, Contar = 0;
	
	char ArchivoNombre[LEN];
	
	if(argc < 2)
	{
		fprintf(stderr, "Usado: %s ArchivoNombre\n", argv[0]);
		exit(1);
	}
	
	if((IngresoArchivo = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "No puedo abrir el archivo \"%s\"\n", argv[1]);
		exit(2);
	}
	
	strncpy(ArchivoNombre, argv[1], LEN - 5);
	ArchivoNombre[LEN - 5] = '\0';
	strcat(ArchivoNombre, ".red");
	
	if((SalidaArchivo = fopen(ArchivoNombre, "w")) == NULL)
	{
		fprintf(stderr, "No puedo crear el archivo de salida.\n");
		exit(3);
	}
	
	while((ch = getc(IngresoArchivo)) != EOF)
	if(!(Contar++ %3))
	putc(ch, SalidaArchivo);
	
	if(fclose(IngresoArchivo) != 0 || fclose(SalidaArchivo) != 0)
	fprintf(stderr, "Error: No puede cerrar los archivos\n");
	return 0;
}
