/*Archivo prog105a.c
 */
#include <stdio.h>

void InformeDelConteo(void);
extern void acumularse(int);

int Contar = 0;

int main(void)
{
	int Valor;
	register int i;
	
	printf("ingresa un numero entero positivo (0 para terminar): ");
	while(scanf("%d", &Valor) == 1 && Valor > 0)
	{
		++Contar;
		for(i = Valor; i >= 0; i--)
		acumularse(i);
		printf("Ingresa un numero entero positivo(0 para terminar): ");
	}
	InformeDelConteo();
	return 0;
}

void InformeDelConteo(void)
{
	printf("El while loop fue ejecutado %d veces\n", Contar);
}
