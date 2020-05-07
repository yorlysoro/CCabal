#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNOMBRELEN 20

struct NombreConteo
{
	char Nombre[MAXNOMBRELEN];
	char Apellido[MAXNOMBRELEN];
	int Letras;
};

struct NombreConteo ObtenInfo(void);
struct NombreConteo mkInfo(struct NombreConteo);
void DesplegaInfo(const struct NombreConteo);

int main(void)
{
	struct NombreConteo Persona;
	Persona = ObtenInfo();
	Persona = mkInfo(Persona);
	DesplegaInfo(Persona);
	return 0;
}

struct NombreConteo ObtenInfo(void)
{
	struct NombreConteo temp;
	printf("Favor de ingresar su nombre: ");
	if(fgets(temp.Nombre, MAXNOMBRELEN - 2, stdin) &&
	temp.Nombre[0] != '\n')
	{
		if(*(temp.Nombre + strlen(temp.Nombre) - 1) != '\n')
		{
			printf("El nombre que entrastes es demasiado largo.\n"
			"Solo %d chars MAX\n", MAXNOMBRELEN - 2);
			exit(1);
		}
		*(temp.Nombre + strlen(temp.Nombre) - 1) = '\0';
	}
	else
	{
		puts("Falta su nombre");
		exit(1);
	}
	printf("Favor de ingresar su apellido paterno: ");
	if(fgets(temp.Apellido, MAXNOMBRELEN - 2, stdin) && temp.Apellido[0] != '\n')
	{
		if(*(temp.Apellido + strlen(temp.Apellido) -1 ) != '\n')
		{
			printf("El apellido paterno que entrastes es demasiado largo.\n"
			"Solo %d chars MAX\n", MAXNOMBRELEN - 2);
			exit(1);
		}
		*(temp.Apellido + strlen(temp.Apellido) - 1 ) = '\0';
	}
	else
	{
		puts("Falta su apellido paterno");
		exit(1);
	}
	return temp;
}

struct NombreConteo mkInfo(struct NombreConteo info)
{
	info.Letras = strlen(info.Nombre) +
	strlen(info.Apellido);
	return info;
}

void DesplegaInfo(const struct NombreConteo info)
{
	printf("%s %s, su nombre contiene %d letras\n",
	info.Nombre, info.Apellido, info.Letras);
}
