#include <stdio.h>

void IntenteSeQuedan(void);

int main(void)
{
	int Contador;
	
	for(Contador = 1; Contador <= 3; Contador++)
	{
		printf("Aqui viene la iteracion %d\n", Contador);
		IntenteSeQuedan();
	}
	
	return 0;
}

void IntenteSeQuedan(void)
{
	int decolorarse = 1;
	static int quedese = 1;
	
	printf("decolorarse = %d y quedese = %d\n", decolorarse++, quedese++);
}
