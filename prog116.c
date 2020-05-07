#include <stdio.h>
#include <stdlib.h>

#define TAMANOAR 1000

int main(void)
{
	double Numeros[TAMANOAR], Valor;
	
	const char * Archivo = "Numeros.dat";
	
	int i;
	
	long pos;
	
	FILE *ioArchivo;
	
	for(i = 0; i < TAMANOAR; i++)
	Numeros[i] = 100.0 * i + 1.0 / (i+1);
	
	if((ioArchivo = fopen(Archivo, "wb")) == NULL)
	{
		fprintf(stderr, "No puedo abrir el archivo salida: %s\n", Archivo);
		exit(1);
	}
	
	fwrite(Numeros, sizeof(double), TAMANOAR, ioArchivo);
	fclose(ioArchivo);
	
	if((ioArchivo = fopen(Archivo, "rb")) == NULL)
	{
		fprintf(stderr, "No puedo abrir el archivo %s para acceso random\n", Archivo);
		exit(1);
	}
	
	printf("Ingresa un index en el rango 0-%d ", TAMANOAR - 1);
	scanf("%d", &i);
	while(i >= 0 && i < TAMANOAR)
	{
		pos = (long)i * sizeof(double);
		fseek(ioArchivo, pos, SEEK_SET);
		fread(&Valor, sizeof(double), 1, ioArchivo);
		printf("El valor alla es %f\n", Valor);
		printf("Siguiente index (a fuera del rango para terminar): ");
		scanf("%d", &i);
	}
	
	fclose( ioArchivo );
	puts("\n¡Adios!\n");
	return 0;
}
