#include <stdio.h>

#define ADJUSTAR 7.64
#define ESCALA 0.325

int main(void)
{
	double zapato, pie;
	
	printf("Tamaño del zapato de hombres	Pie		Largo\n");
	zapato = 3.0;
	
	while(zapato < 18.5)
	{
		pie = ESCALA * zapato + ADJUSTAR;
		printf("%36.1f %8.2f pulgadas\n", zapato, pie);
		zapato = zapato + 1.0;
	}
	
	printf("listo.\n");
	return 0;
}
