#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void itobs(int, char *);
void Muestra_bstr(const char *);

int main(void)
{
	char Bin_str[8 * sizeof(int) + 1], Buf[12];
	
	int i, Numero;
	
	puts("\n\tDecimal a binario Convertido");
	printf("\nDame un numero positivo entre 0 y 99999999: ");
	
	while(fgets(Buf, 10, stdin) && Buf[0] != '\n')
	{
		if(*(Buf + strlen(Buf) - 1) != '\n')
		{
			fputs("La linea que entrastes es demasiado largo.\nSolo 10 chars MAX", stderr);
			exit(1);
		}
		*(Buf + strlen(Buf) - 1) = '\0';
		
		for(i = 0; i < strlen(Buf); i++)
		{
			if(Buf[i] < '0' || Buf[i] > '9')
			{
				fputs("Carateres ilegales en su ingreso\n", stderr);
				exit(1);
			}
		}
		
		Numero = atoi(Buf);
		if(Numero > 99999999)
		{
			fputs("Su entrada esta fuera del rango especificadao\n", stderr);
			exit(1);
		}
		itobs(Numero, Bin_str);
		printf("%d is", Numero);
		Muestra_bstr(Bin_str);
		putchar('\n');
		printf("\nDame un numero positivo entre 0 y 99999999"
		"(<Enter> para terminar): ");
	}
	puts("¡Adios!\n");
	return 0;
}

void itobs(int n, char * ps)
{
	int i;
	
	int size = 8 * sizeof(int);
	for(i = size - 1; i >= 0; i--, n >>= 1)
	ps[i] = (1 & n) + '0';
	ps[size] = '\0';
}

void Muestra_bstr(const char * str)
{
	int i = 0;
	
	putchar('\t');
	while(str[i])
	{
		putchar(str[i]);
		if(++i % 4 == 0 && str[i])
		putchar(' ');
	}
}
