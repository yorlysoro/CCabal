#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

enum espectro {rojo, naranja, amarillo, verde, azul, violeta};

const char * colores[] = { "rojo", "naranja", "amarillo", "verde", "azul", "violeta"};

#define TAMANO 30

int main(void)
{
	char opcion[TAMANO], prueba[TAMANO];
	
	enum espectro color;
	
	int i;
	
	bool color_se_encuentra = false;
	
	printf("Ingresa un color (<Enter> para terminar): ");
	while(fgets(opcion, TAMANO - 2, stdin) && opcion[0] != '\n')
	{
		if(*(opcion + strlen(opcion) - 1 ) != '\n')
		{
			printf("El color que entrastes es demasiado largo.\n"
			"Solo %d chars MAX\n", TAMANO - 2);
			exit(1);
		}
		else
		*(opcion + strlen(opcion) - 1) = '\0';
		
		for(i = 0; i < strlen(opcion); i++)
		prueba[i] = tolower(opcion[i]);
		prueba[i] = '\0';
		
		for(color = rojo; color <= violeta; color++)
		{
			if(strcmp(prueba, colores[color]) == 0)
			{
				color_se_encuentra = true;
				break;
			}
		}
		
		if(color_se_encuentra)
		switch(color)
		{
			case rojo:
			puts("Las rosas son de color rojo.");
			break;
			case naranja:
			puts("Las amapolas son de color naranja.");
			break;
			case amarillo:
			puts("Los girasoles son de color amarillo.");
			break;
			case verde:
			puts("la hierba es de color verde.");
			break;
			case azul:
			puts("Las naranjas son de color azul.");
			break;
			case violeta:
			puts("Las violetas son de color violeta.");
			break;
		}
		else
		printf("No conosco el color %s\n", opcion);
		color_se_encuentra = false;
		printf("Ingresa un color (<Enter> para terminar): ");
	}
	puts("\n¡Adios!\n");
	return 0;
	
}
