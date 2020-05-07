#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Prog108.h"

int main(void)
{
	int Dados, Lados = 0, NumCharsLeidos, NumValidosChars, Tira, i;
	
	char NumSTR[10];
	
	srand((unsigned int)time(0));
	printf("Ingreso el numero de lados de los dados, 0 para temrinar: ");
	
	while(fgets(NumSTR, 9, stdin))
	{
		NumValidosChars = 0;
		NumCharsLeidos = strlen(NumSTR);
		if(NumSTR[0] == '0')
		break;
		
		if(*(NumSTR + NumCharsLeidos - 1) != '\n')
		{
			puts("Entrada ¡INVALIDA!");
			while(getchar() != '\n');
			printf("Ingreso el numero de lados de los dados, 0 para terminar: ");
			continue;
		}
		
		else
		*(NumSTR + NumCharsLeidos - 1) = '\n';
		for(i = 0; i < NumCharsLeidos - 1; i++)
		if((*(NumSTR + i) >= '0' && *(NumSTR + i) <= '9'))
		NumValidosChars++;
		if(NumCharsLeidos == 1 || NumValidosChars != NumCharsLeidos - 1)
		{
			puts("Entrada ¡INVALIDA!");
			printf("Ingreso el numero de lados de los dados, 0 para terminar: ");
			continue;
		}
		Lados = atoi(NumSTR);
		
		printf("¿Cuantos dados?");
		fgets(NumSTR, 9, stdin);
		NumValidosChars = 0;
		NumCharsLeidos = strlen(NumSTR);
		
		if(*(NumSTR + NumCharsLeidos - 1) != '\n')
		{
			puts("Entrada ¡INVALIDA! por returno");
			while(getchar() != '\n');
			printf("Ingreso el numero de los lados, 0 para terminar: ");
			continue;
		}
		else
		*(NumSTR + NumCharsLeidos - 1) = '\0';
		for(i = 0; i < NumCharsLeidos - 1; i++)
		if((*(NumSTR +i) >= '0' && *(NumSTR + i) <= '9'))
		NumValidosChars++;
		
		if(NumCharsLeidos == 1 || NumValidosChars != NumCharsLeidos - 1)
		{
			puts("\nEntrada ¡INVALIDA!");
			printf("Ingreso el numero de lados de los dados, 0 para terminar: ");
			continue;
		}
		
		
		Dados = atoi(NumSTR);
		if(Dados < 1)
		{
			puts("\nNUmero de dados ¡INVALIDA!");
			printf("Ingreso el numero de lados de dados, 0 para terminar: ");
		}
		Tira = Tira_n_Dados(Dados, Lados);
		printf("Tirastes %d usando %d dados de %d lados\n", Tira, Dados, Lados);
		printf("Ingreso numero de lados de los dados, 0 para terminar: ");
	}
	printf("La funcion rollem() se uso %d veces.\n", ContarLosTiros);
	puts("¡Buen suerte!\n");
	return 0;
}
