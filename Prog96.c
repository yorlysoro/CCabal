#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char *strings[], int num);

int main(void)
{
	char Entrada[LIM][SIZE];
	char *ptstr[LIM];
	int ct = 0;
	int k;
	
	printf("Escribe hasta %d lineas y yo los ordeno.\n", LIM);
	printf("Presiona la tecla enter solo en una linea nueva para terminar.\n");
	
	while(ct < LIM && gets(Entrada[ct]) != NULL
	&& Entrada[ct][0] != '\0')
	{
		ptstr[ct] = Entrada[ct];
		ct++;
	}
	stsrt(ptstr, ct);
	puts("\nAqui es la lista ordenada:\n");
	for(k = 0; k < ct; k++)
	puts(ptstr[k]);
	
	return 0;
}

void stsrt(char *strings[], int num)
{
	char *temp;
	int ParteSuperior, Buscar;
	
	for(ParteSuperior = 0; ParteSuperior < num - 1; ParteSuperior++ )
	for(Buscar = ParteSuperior + 1; Buscar < num; Buscar++)
	if(strcmp(strings[ParteSuperior], strings[Buscar]) > 0)
	{
		temp = strings[ParteSuperior];
		strings[ParteSuperior] = strings[Buscar];
		strings[Buscar] = temp;
	}
}
