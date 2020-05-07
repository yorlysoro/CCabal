#include <stdio.h>

#define COBERTURA 66

int main(void)
{
	int m2;
	int latas;
	
	printf("Cuantos metros cuadrados quieres pintar: ");
	
	while(scanf("%d", &m2) == 1)
	{
		latas = m2 / COBERTURA;
		latas += (( m2 % COBERTURA) == 0)? 0 : 1;
		printf("Necesitas %d %s de pintura.\n", latas, latas == 1 ? "lata" : "latas");
		printf("Introduzca nuevo valor (q to quit): ");
	}
	return 0;
}
