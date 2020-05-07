#include <stdio.h>

#define TAMANO 5

void Muestra_Arreglo(const double ar[], int n);
void Mult_Arreglo(double ar[], int n, double mult);

int main(void)
{
	double dip[TAMANO] = {20.0, 17.66, 8.2, 15.3, 22.22};
	
	printf("El arreglo original dip:\n");
	Muestra_Arreglo(dip, TAMANO);
	Mult_Arreglo(dip, TAMANO, 2.5);
	printf("El arreglo dip despues de Mult_Arreglo():\n");
	Muestra_Arreglo(dip, TAMANO);
	
	return 0;
}

void Muestra_Arreglo(const double ar[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	printf("%8.3f",ar[i]);
	putchar('\n');
}

void Mult_Arreglo(double ar[], int n, double mult)
{
	int i;
	
	for(i = 0; i < n; i++)
	ar[i] *= mult;
}
