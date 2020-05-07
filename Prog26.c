#include <stdio.h>

#define ADJUSTAR 7.64
#define ESCALA 0.325

int main(void)
{
	double zapato, pie;
	
	zapato = 9.0;
	pie = ESCALA * zapato + ADJUSTAR;
	printf("Tamaño del zapato de hombres	pie		largo\n");
	printf("%36.1f %8.2f pulgadas\n", zapato, pie);
	
	return 0;
}
