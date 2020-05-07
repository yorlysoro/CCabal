#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	double * ptd;
	
	char NumSTR[10];
	
	char * endptr;
	
	int i = 0, Max, NumCharsLeidos, NumEntradas, NumPuntos, NumValidosChars, Numero;
	
	printf("¿Cual es el numero de dobles que vamos a guardar?");
	
	fgets(NumSTR, 4, stdin);
	NumValidosChars = 0;
	if((NumCharsLeidos = strlen(NumSTR)) > 4)
	{
		puts("Entrada ¡Invalido!\nDebe ser menor que 99");
		exit(1);
	}
	
	if(NumSTR[0] == '0')
	{
		puts("Debemos guarar un minimo de doble");
		exit(1);
	}
	
	if(*(NumSTR + NumCharsLeidos - 1) != '\n')
	{
		puts("Entrada ¡Invalido!\nDebe ser menor que 99");
		exit(1);
	}
	
	else
	*(NumSTR + NumCharsLeidos - 1) = '\0';
	for(i = 0; i < NumCharsLeidos - 1; i++)
	if((*(NumSTR + i) >= '0' && *(NumSTR + i) <= '9'))
	NumValidosChars++;
	
	if(NumCharsLeidos == 1 || NumValidosChars != NumCharsLeidos - 1)
	{
		puts("Entrada ¡Invalido!");
		exit(1);
	}
	
	Max = atoi(NumSTR);
	ptd = (double *)malloc(Max * sizeof(double));
	if(ptd == NULL)
	{
		puts("Fallor la asignacion de memoria. Adios");
		exit(EXIT_FAILURE);
	}
	
	puts("Ingrese los dobles (q para terminar): ");
	
	NumEntradas = 0;
	
	while((NumEntradas < Max) && fgets(NumSTR, 8, stdin))
	{
		NumValidosChars = 0;
		NumCharsLeidos = strlen(NumSTR);
		
		if(NumSTR[0] == 'q' && NumCharsLeidos == 2)
		break;
		
		if(*(NumSTR + NumCharsLeidos - 1) != '\n')
		{
			puts("Entrada ¡Invalido!(Tan grande - no mas 6 chars)");
			while(getchar() != '\n');
			puts("Ingresa los dobles: ");
			continue;
		}
		
		else
		*(NumSTR + NumCharsLeidos - 1) = '\0';
		
		NumPuntos = 0;
		
		for(i = 0; i < NumCharsLeidos - 1; i++)
		if((*(NumSTR + i) >= '0' && *(NumSTR + i) <= '9') ||
		(*(NumSTR) == '-' &&  i == '0') ||
		(*(NumSTR + i) == '.' &&  ++NumPuntos < 2) )
		NumValidosChars++;
		if(NumCharsLeidos == 1 || NumValidosChars != NumCharsLeidos - 1)
		{
			puts("Entrada ¡Invalido!");
			puts("Ingresa los dobles: ");
			continue;
		}
		ptd[NumEntradas++] = strtod(NumSTR, &endptr);
		
	}
	
	printf("\nAqui son sus dobles %d dobles:\n", Numero = NumEntradas);
	for(i = 0; i < Numero; i++)
	{
		printf("%7.2f", ptd[i]);
		if(i % 7 == 6)
		putchar('\n');
	}
	if(i % 7 != 0)
	putchar('\n');
	
	puts("¡Listo!");
	free(ptd);
	return 0;
}
