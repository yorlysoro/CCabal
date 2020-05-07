#include <stdio.h>

#define MESES 12
#define ANOS 5

int main(void)
{
	const float lluvia[ANOS][MESES] =
	{
		
		  			            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	int ano, mes;
	float subtot, total;
	puts("Año Lluvia (pulgadas)");
	for(ano = 0, total = 0; ano < ANOS; ano++)
	{
		for(mes = 0, subtot = 0; mes < MESES; mes++)
		subtot += lluvia[ano][mes];
		printf("%5d %15.1f\n", 2000 + ano, subtot);
		total += subtot;
	}
	
	printf("\nEl promedio es %.1f pulgadas.\n\n", total/ANOS);
	printf("Promedios Mensuales:\n\n");
	printf("Ene	Feb	Mar	Abr	May	Jun	Jul	Ago	Sep	Oct Nov Dec\n");
	
	for(mes = 0; mes < MESES; mes++)
	{
		for(ano = 0, subtot = 0; ano < ANOS; ano++)
		subtot += lluvia[ano][mes];
		printf("%4.1f", subtot/ANOS);
	}
	puts("");
	return 0;
}
