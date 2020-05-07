#include <stdio.h>
#include <stdbool.h>

bool mallimite(int inicio, int termina, int bajo, int alto);
int obten_int(void);
double suma_cuadrados(int a, int b);

int main(void)
{
	const int MIN = -1000;
	const int MAX = +1000;
	int inicio;
	int termina;
	double respuesta;
	
	printf("Este programa calcula la suma de los cuadrados enteros\n"
	"en un rango entre -1000 y +1000.\n"
	"Entra los limites (0 en los dos limites para terminar)\n"
	"Limite bajo: ");
	inicio = obten_int();
	printf("Limite alto: ");
	termina = obten_int();
	while(inicio != 0 || termina != 0)
	{
		if(mallimite(inicio, termina, MIN, MAX))
		printf("Otra vez por favor.\n");
		else
		{
			respuesta = suma_cuadrados(inicio, termina);
			printf("La suma de los cuadrados de los enteros");
			printf(" entra %d a %d es %g\n", inicio, termina, respuesta);
		}
		printf("entra los limites (0 en los dos "
		"Para terminar)\n");
		printf("Limite Bajo: ");
		inicio = obten_int();
		printf("Limite alto: ");
		termina = obten_int();
	}
	
	printf("Listo.\n");
	return 0;
}

int obten_int(void)
{
		int ingreso;
		char ch;
		
		while(scanf ("%d", &ingreso) != 1)
		{
			while((ch = getchar() ) != '\n')
			putchar(ch);
			printf("no es un entero.\nFavor a entrar un ");
			printf("entero como 25, -178, o 3: ");
		}
		return ingreso;
}

double suma_cuadrados(int a, int b)
{
	double total = 0;
	int i;
	
	for(i = a; i <= b; i++)
	total += i * i;
	return total;
}

bool mallimite(int inicio, int termina, int bajo, int alto)
{
	bool no_bueno = false;
	if(inicio > termina)
	{
		printf("%d no es menor que %d.\n", inicio, termina);
		no_bueno = true;
	}
	if(inicio > alto || termina > alto)
	{
		printf("Valores deben se %d o menor.\n", alto);
		no_bueno = true;
	}
	return no_bueno;
}
