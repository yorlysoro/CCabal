#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0l;
	_Bool ingreso_es_valido;
	
	printf("Introduzca un entero para agregar: ");
	printf("(q para terminar): ");
	ingreso_es_valido = (scanf("%ld", &num) == 1 );
	
	while(ingreso_es_valido)
	{
		sum = sum + num;
		printf("Introduzca otro entero para agregar, (q para terminar): ");
		ingreso_es_valido = (scanf("%ld", &num) == 1 );
	}
	printf("Los enteros suman a %ld.\n", sum);
	return 0;
}
