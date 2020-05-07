#include <stdio.h>

void Porque_yo(void);

int main(void)
{
	printf("Este archivo se llama \"%s\"\n", __FILE__);
	printf("La fecha es %s\n", __DATE__);
	printf("Las horas son %s\n", __TIME__);
	printf("Esta codigo es en la linea %d\n", __LINE__);
	printf("Estamos en la funcion \"%s\"\n", __func__);
	
	Porque_yo();
	
	return 0;
}

void Porque_yo(void)
{
	printf("Estamos en la funcion \"%s\"\n", __func__);
	printf("Esta codigo esta en la linea %d\n", __LINE__);
}
