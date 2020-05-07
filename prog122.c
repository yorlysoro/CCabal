#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXVALL 12
#define MAXLIBROS 100

struct Libro
{
	char Titulo[MAXTITL];
	char Autor[MAXAUTL];
	float Valor;
};

int main(void)
{
	struct Libro Biblioteca[MAXLIBROS];
	
	int Conteo = 0,	ConteoDelArchivo, NumPuntos, Index, Tamano = sizeof(struct Libro), i;
	
	char ValSTR[MAXVALL];
	
	FILE * PLibros;
	
	if((PLibros = fopen("Libros.dat", "a+b")) == NULL)
	{
		fputs("No pueda abrir Libros.dat\n", stderr);
		exit(1);
	}
	
	rewind(PLibros);
	
	while(Conteo < MAXLIBROS && fread(&Biblioteca[Conteo], Tamano, 1, PLibros) == 1)
	{
		if(Conteo == 0)
		puts("Los contenidos de Libros.dat ahora: ");
		printf("\t%s por %s: $%.2f\n", Biblioteca[Conteo].Titulo, Biblioteca[Conteo].Autor, Biblioteca[Conteo].Valor);
		Conteo++;
	}
	
	ConteoDelArchivo = Conteo;
	
	if(Conteo == MAXLIBROS)
	{
		fputs("El archivo: Libros.dat esta lleno.", stderr);
		fclose(PLibros);
		exit(2);
	}
	
	printf("\nIngresa el nombre del libro: ");
	while(Conteo < MAXLIBROS)
	{
		if(fgets(Biblioteca[Conteo].Titulo, MAXTITL - 2, stdin) && Biblioteca[Conteo].Titulo[0] != '\n')
		{
			if(*(Biblioteca[Conteo].Titulo + strlen(Biblioteca[Conteo].Titulo) - 1) != '\n')
			{
				fprintf(stderr, "El titulo que entrastes es demasiado largo.\n"
				"Solo %d chars MAX\n", MAXTITL - 2);
				fclose(PLibros);
				exit(1);
			}
			*(Biblioteca[Conteo].Titulo + strlen(Biblioteca[Conteo].Titulo) - 1) = '\0';
		}
		else
		break;
		printf("Ingresa el nombre del autor: ");
		if(fgets(Biblioteca[Conteo].Autor, MAXAUTL - 2, stdin) &&  Biblioteca[Conteo].Autor[0] != '\n')
		{
			if(*(Biblioteca[Conteo].Autor + strlen(Biblioteca[Conteo].Autor) - 1) != '\n')
			{
				fprintf(stderr, "El autor que entrastes es demasiado largo.\n"
				"Solo %d chars MAX\n", MAXAUTL - 2);
				fclose(PLibros);
				exit(1);
			}
			*(Biblioteca[Conteo].Autor + strlen(Biblioteca[Conteo].Autor) - 1) = '\0';
		}
		else
		{
			fprintf(stderr, "Faltan el nombre del autor de \"%s\"\n", Biblioteca[Conteo].Titulo);
			fclose(PLibros);
			exit(1);
		}
		
		NumPuntos = 0;
		printf("Ingersa el valor: ");
		if(fgets(ValSTR, MAXVALL - 2, stdin) && ValSTR[0] != '\n')
		{
			if(*(ValSTR + strlen(ValSTR) - 1) != '\n')
			{
				fprintf(stderr, "El valor que entrastes es demasiado largo\n"
				"Solo %d chars MAX\n", MAXVALL - 2);
				fclose(PLibros);
				exit(1);
			}
			
			*(ValSTR + strlen(ValSTR) - 1) = '\0';
			
			if(ValSTR[0] == '-')
			{
				fputs("No se permiten valores negativos.", stderr);
				fclose(PLibros);
				exit(1);
			}
			for(i = 0; i < strlen(ValSTR) - 1; i++)
			{
				if(ValSTR[i] < '0' || ValSTR[i] > '9')
				{
					if(ValSTR[i] == '.' )
					{
						if(++NumPuntos > 1)
						{
							fprintf(stderr, "Se permite solo 1 punto.\n");
							fclose(PLibros);
							exit(1);
						}
						if(strlen(ValSTR) - i > 3)
						{
							fputs("Se permite solo 2 numerales despues del punto.", stderr);
							fclose(PLibros);
							exit(1);
						}
					}
					else
					{
						fputs("Caracteres ilegales en su valor.", stderr);
						fclose(PLibros);
						exit(1);
					}
				}
			}
			Biblioteca[Conteo++].Valor = atof(ValSTR);
		}
	else
	{
		fprintf(stderr, "Faltan el valor de \"%s\"\n", Biblioteca[Conteo].Titulo);
		fclose(PLibros);
		exit(1);
	}
	}
	if(Conteo < MAXLIBROS)
	{
		puts("\nAqui es la lista de sus libros: ");
		for(Index = 0; Index < Conteo; Index++)
		printf("\t\"%s\" por \"%s\": %.2f\n", Biblioteca[Index].Titulo, Biblioteca[Index].Autor, Biblioteca[Index].Valor);
		fwrite(&Biblioteca[ConteoDelArchivo], Tamano, Conteo - ConteoDelArchivo, PLibros);
	}
	else
	puts("Lo siento pero no tengo libros nuevos a mostrar.");
	
	puts("\n¡Adios!\n");
	fclose(PLibros);
	return 0;
}
