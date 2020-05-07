#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char DesplegaMenu(void);
void ComeLinea(void);
void Desplega(void(*fp)(char *), char * str);
void AMayuscula(char *);
void AMinuscula(char *);
void Invierta(char *);
void Tonto(char *);

int main(void)
{
	char Linea[81];
	char Copia[81];
	char Seleccion;
	void (*pfun)(char *);
	
	printf("\nIngresa una linea (<Enter> para terminar): ");
	while(fgets(Linea, 79, stdin) && Linea[0] != '\n')
	{
		if(*(Linea + strlen(Linea) - 1 ) != '\n')
		{
			fputs("La linea que entrastes es demasiado largo.\nSolo 79 chars MAX\n", stderr);
			exit(1);
		}
		*(Linea + strlen(Linea) - 1) = '\0';
		
		while((Seleccion = DesplegaMenu()) != 's')
		{
			switch(Seleccion)
			{

				case 'y' : pfun = AMayuscula; break;
				case 'n' : pfun = AMinuscula; break;
				case 'i' : pfun = Invierta; break;
				case 'o' : pfun = Tonto; break;
			}
			strcpy(Copia, Linea);
			Desplega( pfun, Copia );
		}
		printf("\nIngresa una linea (<Enter> para terminar):");
	}
	puts("\n¡Adios!\n");
	return 0;
}

char DesplegaMenu(void)
{
	char ans;
	puts("\n\t\ty)Todo Mayusculas \t\tn)Todo Minusculas");
	puts("\t\ti)Invertir \t\to)Como original");
	puts("\t\ts) Siguiente string:");
	printf("\tElige una opcion: ");
	ans = getchar();
	ans = tolower(ans);
	ComeLinea();
	while(strchr ("ynios", ans) == NULL)
	{
		printf("\tElige y,n,i,o, o s: ");
		ans = tolower(getchar() );
		ComeLinea();
	}
	return ans;
}

void ComeLinea(void)
{
	while(getchar() != '\n')
	continue;
}

void AMayuscula(char * str)
{
	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void AMinuscula(char * str)
{
	while(*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void Invierta(char * str)
{
	while(*str)
	{
		if(islower(*str))
		*str = toupper(*str);
		else if(isupper(*str));
		*str = tolower(*str);
		str++;
	}
}
void Tonto(char * str)
{}
void Desplega(void (*fp)(char *), char * str)
{
	(*fp)(str);
	printf("\n\tEl resultado: %s\n", str);
}
