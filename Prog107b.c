#include <stdio.h>

extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)
{
	int Contar;
	int Semilla;
	
	printf("Ingresa una semilla (entero positivo): ");
	
	while(scanf("%u", &Semilla) == 1)
	{
		srand1(Semilla);
		
		for (Contar = 0; Contar < 5; Contar++)
		printf("%hd\n", rand1());
		printf("ingresa una semilla (entero positivo o q a terminar): ");
	}
	
	printf("Listo\n");
	return 0;
}
