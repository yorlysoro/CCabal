#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTL 31
#define MAXVALL 10

struct Libro
{
	char Titulo[MAXTITL];
	char Autor[MAXAUTL];
	float Valor;
};

int main(void)
{
	int i;
	char ValSTR[MAXVALL + 1];
	struct Libro Biblio;
	
	printf("Ingresa el nombre del libro: ");
	
	fgets(Biblio.Titulo, MAXTITL - 2, stdin);
	if(*(Biblio.Titulo + strlen(Biblio.Titulo) - 1) != '\n')
	{
		printf("El nombre que entraste es demaciado largo.\n"
		"Solo %d chars MAX\n", MAXTITL - 2);
		exit(1);
	}
	
	else
	*(Biblio.Titulo + strlen(Biblio.Titulo) - 1) = '\0';
	
	printf("Ingresa el nombre del autor: ");
	fgets(Biblio.Autor, MAXAUTL - 2, stdin);
	
	if(*(Biblio.Autor + strlen(Biblio.Autor) - 1) != '\n')
	{
		printf("El nombre que entrastes es demasiado largo.\n"
		"Solo %d chars MAX\n", MAXAUTL - 2);
		exit(1);
	}
	
	else
	*(Biblio.Autor + strlen(Biblio.Autor) - 1) = '\0';
	printf("Ingresa el valor: ");
	scanf("%10s", ValSTR);
	
	if(strlen(ValSTR) > MAXVALL -1)
	{
		printf("El valor que entraste es demasiado largo.\n"
		"%d chars MAX\n", MAXVALL - 1);
		exit(1);
	}
	
	if(ValSTR[0] == '-')
	{
		puts("No se permitr valores negativos.");
		exit(1);
	}
	for(i = 0; i < strlen(ValSTR) - 1; i++)
	{
		if(ValSTR[i] < '0' || ValSTR[i] > '9')
		{
			if(ValSTR[i] == '.')
			{
				if(strlen(ValSTR) - i > 3)
				{
					puts("Se permite solo 2 numerales despues del punto.");
					exit(1);
				}
			}
			else
			{
				puts("Caracteres ilegales en su valor.");
				exit(1);
			}
		}
	}
	Biblio.Valor = atof(ValSTR);
	printf("%s por %s: $%.2f\n", Biblio.Titulo, Biblio.Autor, Biblio.Valor);
	printf("%s: \"%s\" ($%.2f)\n", Biblio.Autor, Biblio.Titulo, Biblio.Valor);
	puts("Listo.");
	
	return 0;
}
