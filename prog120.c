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

void ObtenInfo(struct NombreConteo * );
void mkInfo(struct NombreConteo *);
void DesplegaInfo( const struct NombreConteo *);

int main(void)
{
	struct NombreConteo Persona;
	ObtenInfo(&Persona);
	mkInfo(&Persona);
	DesplegaInfo(&Persona);
	
	return 0;
}

void ObtenInfo(struct NombreConteo * pst)
{
	printf("Favor de ingresar su nombre: ");
	if(fgets(pst->Nombre, MAXNOMBRELEN - 2, stdin) &&
	pst->Nombre[0] != '\n')
	{
		if(*(pst->Nombre + strlen(pst->Nombre) - 1) != '\n')
		{
			printf("El nombre que entrastes es demasiado largo.\n"
			"Solo %d chars MAX\n", MAXNOMBRELEN - 2);
			exit(1);
		}
		*(pst->Nombre + strlen(pst->Nombre) - 1 ) = '\0';
	}
	else
	{
		puts("Falta su nombre");
		exit(1);
	}
	
	printf("Favor de ingresar su apellido paterno: ");
	if(fgets(pst->Apellido, MAXNOMBRELEN - 2, stdin) && 
	pst->Apellido[0] != '\n')
	{
		if(*(pst->Apellido + strlen(pst-> Apellido) - 1) != '\n')
		{
			printf("El apellido paterno que entrastes es demasiado largo.\n"
			"Solo %d chars MAX\n", MAXNOMBRELEN - 2);
			exit(1);
		}
		*(pst->Apellido + strlen(pst->Apellido) - 1) = '\0';
	}
	else
	{
		puts("Falta el apellido paterno");
		exit(1);
	}
		
}

void mkInfo(struct NombreConteo * pst)
{
	pst->Letras = strlen(pst->Nombre) +
	strlen(pst->Apellido);
}

void DesplegaInfo(const struct NombreConteo * pst)
{
	printf("%s %s, tu nombre contiene %d letras.\n",
	pst->Nombre, pst->Apellido, pst->Letras);
}
