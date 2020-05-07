#include <stdio.h>

#define MAX 20

int main(void)
{
	char Nombre[MAX], Apellido[MAX], Compuesto[2 * MAX + 10];
	
	int Numero;
	
	printf("¿Cual es su nombre?");
	scanf("%19s", Nombre);
	while(getchar() != '\n');
	
	printf("¿Cual es su apellido?");
	scanf("%19s", Apellido);
	while(getchar() != '\n');
	
	printf("¿Cual es tu numero de la suerte?");
	scanf("%d", &Numero);
	while(getchar() != '\n');
	
	sprintf(Compuesto, "El numero de la suerte de %s %s es %d\n", Nombre, Apellido, Numero);
	
	puts(Compuesto);
	
	return 0;
}
