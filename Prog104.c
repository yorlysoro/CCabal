#include <stdio.h>

int main(void)
{
	register char Saludo[] = "Hola";
	register int Numero = 25;
	
	printf("%d es una register variable\n", Numero);
	
	return 0;
}
