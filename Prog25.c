#include <stdio.h>

int main(void)
{
	unsigned ancho, presicion;
	
	int numero = 256;
	
	double peso = 242.5;
	
	printf("Cual es el ancho?\n");
	scanf("%d", &ancho);
	printf("El numero es: %*d:\n",ancho, numero);
	printf("Ingresa un ancho y un presicion:\n");
	scanf("%d %d", &ancho, &presicion);
	printf("Peso = %*.*f\n", ancho, presicion, peso);
	printf("Listo!\n");
	
	return 0;
}
