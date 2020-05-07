#include <stdio.h>

#define SEC_PER_MIN 60

int main(void)
{
	int sec, min, restante;
	
	puts("¡Convertir segundos en minuitos y segundos!\n");
	printf("Introduzca el numero de segundos (<=0 para terminar): ");
	scanf("%d", &sec);
	
	while(sec > 0)
	{
		min = sec / SEC_PER_MIN;
		restante = sec / SEC_PER_MIN;
		printf("%d segundos es %d minutos y %d segundos.\n", sec, min, restante);
		
		printf("Introduzca otro numero de segundos (<=0 t quit): ");
		scanf("%d", &sec);
	}
	
	printf("¡listo!\n");
	return 0;
}
