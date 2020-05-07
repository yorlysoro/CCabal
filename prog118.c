#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXVALL 12
#define MAXLIBROS 100

struct Libro{
	char Titulo[MAXTITL];
	char Autor[MAXAUTL];
	float Valor;
	};
	
int main(void)
{
	struct Libro Biblioteca[MAXLIBROS];
	int Conteo = 0, Index, NumPuntos, i;
	
	char ValSTR[MAXVALL];
	
	printf("Ingresa el nombre del libro: ");
	
	while(Conteo < MAXLIBROS)
	{
		if(fgets(Biblioteca[Conteo].Titulo, MAXTITL - 2, stdin) &&
		Biblioteca[Conteo].Titulo[0] != '\n')
		{
			if(*(Biblioteca[Conteo].Titulo + strlen(Biblioteca[Conteo].Titulo) - 1) != '\n')
			{
				printf("El titulo que entrastes es demaciado largo.\n"
				"Solo %d chars MAX\n", MAXTITL - 2);
				exit(1);
			}
			*(Biblioteca[Conteo].Titulo + strlen(Biblioteca[Conteo].Titulo) - 1) = '\0';
			
		}
		else
		break;
		
		printf("Ingresa el nombre del autor: ");
		if(fgets(Biblioteca[Conteo].Autor, MAXAUTL - 2, stdin) &&
		Biblioteca[Conteo].Autor[0] != '\n')
		{
			if(*(Biblioteca[Conteo].Autor +
			strlen(Biblioteca[Conteo].Autor) - 1) != '\n')
			{
				printf("El autor que entrastes es demasiado largo.\n"
				"Solo %d chars MAX\n", MAXAUTL - 2);
				exit(1);
			}
			*(Biblioteca[Conteo].Autor + strlen(Biblioteca[Conteo].Autor) - 1) = '\0';
		}
		else
		{
			printf("Faltan el nombre del autor de \"%s\"\n", Biblioteca[Conteo].Titulo);
			exit(1);
		}
		NumPuntos = 1;
		printf("Ingresa el valor: ");
		if(fgets(ValSTR, MAXVALL - 2, stdin) && ValSTR[0] != '\n')
		{
			if(*(ValSTR + strlen(ValSTR) - 1) != '\n')
			{
				printf("El valor que entrastes es demasiado largo\n"
				"Solo %d chars MAX\n", MAXVALL - 2);
				exit(1);
			 }
			 *(ValSTR + strlen(ValSTR) - 1) = '\0';
			 
			 if(ValSTR[0] == '-')
			 {
				 puts("No se permite valores negativos.");
				 exit(1);
			 }
			 
			 for(i = 0; i < strlen(ValSTR) - 1; i++)
			 {
				 if(ValSTR[i] < '0' || ValSTR[i] > '9')
				 {
					 if(ValSTR[i] = '.')
					 {
						 if(++NumPuntos > 2)
						 {
							 fprintf(stderr, "Se permite un solo punto.\n");
							 exit(1);
						 }
						 if(strlen(ValSTR) - i > 3)
						 {
							 puts("Se permite solo 2 numerales despues del punto");
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
			 Biblioteca[Conteo++].Valor = atof(ValSTR);
		 }
		 else
		 {
			 printf("Faltan el valor de \"%s\"\n", Biblioteca[Conteo].Titulo);
			 exit(1);
		 }
		 if(Conteo < MAXLIBROS)
		 printf("Ingresa el siguiente titulo: (<Enter> a terminar): ");
	 }
	 if(Conteo > 0)
	 {
		 puts("Aqui es la lista de sus libros:");
		 for(Index = 0; Index < Conteo; Index++)
		 printf("\t\"%s\" por \"%s\": $%.2f\n", Biblioteca[Index].Titulo, Biblioteca[Index].Autor, Biblioteca[Index].Valor);
	  }
	  else
	  puts("Lo siento pero no tengo libros a mostrar.");
	  return 0;
}
