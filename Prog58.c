#include <stdio.h>

char obten_eleccion(void);
char obten_primer(void);
int obten_int(void);
void count(void);

int main(void)
{
	int eleccion;
	
	while((eleccion = obten_eleccion()) != 'q')
	{
		switch(eleccion)
		{
			case 'a' : printf("Compra bajo, vende alto.\n");
			break;
			case 'b' : putchar('\a');
			break;
			case 'c' : count();
			break;
			default: printf("¡Error en el programa!\n");
			break;
		}
	}
	printf("Adios\n");
	return 0;
}


void count(void)
{
	int i, n;
	
	printf("Entrar un intero:\n");
	n = obten_int();
	for(i = 1; i <= n; i++)
	printf("%d\n", i);
	while(getchar() != '\n')
	continue;
}

char obten_eleccion(void)
{
	int ch;
	printf("\ta.aviso		b.timbre\n"
	"\tc.count		q.terminar\n"
	"\tEntra una letra: ");
	
	ch = obten_primer();
	while((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Responde por favor con a, b, c, or q: ");
		ch = obten_primer();
	}
	return ch;
}

char obten_primer(void)
{
	int ch;
	ch = getchar();
	while(getchar() != '\n')
	continue;
	return ch;
}

int obten_int(void)
{
	int ingreso;
	char ch;
	
	while(scanf("%d", &ingreso) != 1)
	{
		while((ch = getchar()) != '\n')
		putchar(ch);
		printf("No es un intero.\nFavor a ingresar un"
		"intero como 25, -178, or 3: ");
	 }
	 return ingreso;
}
