#include <stdio.h>
#include <string.h>

union Fechas
{
	char FechaCorta[6];
	char FechaMediana[11];
	char FechaLarga[21];
} FechaPrueba;

union Canasta{
	int GuardaInt;
	double GuardaDoble;
	char GuardaChar;
} Prueba;

int main(void)
{
	strcpy(FechaPrueba.FechaCorta, "29/09");
	
	printf("\nCon FechaDePruebaCorta = \"29/09\"\n"
	"Corta: |%s| \tMediana; |%s| \tLarga: |%s|\n", FechaPrueba.FechaCorta, FechaPrueba.FechaMediana, FechaPrueba.FechaLarga);
	
	strcpy(FechaPrueba.FechaMediana, "29-09-2012");
	printf("\nCon FechaPruebaFechaMediana = \"29-09-2012\"\n"
	"Corta:|%s| \tMediana:|%s|\tLarga:|%s|\n", FechaPrueba.FechaCorta, FechaPrueba.FechaMediana, FechaPrueba.FechaLarga);
	
	strcpy(FechaPrueba.FechaLarga, "29/09/2012 15:25:36");
	printf("\nCon FechaPrueba.FechaLarga = \"29/09/2012 15:25:36\"\n"
	"Corta: |%s|\tMediana: |%s|\tLarga: |%s|\n", FechaPrueba.FechaCorta, FechaPrueba.FechaMediana, FechaPrueba.FechaLarga);
	
	Prueba.GuardaInt = 123;
	
	printf("\nCon Prueba.GuardaInt = 123\n"
	"PGint: |%d|\tPGD |%f|\tPGC:|%c|\n", Prueba.GuardaInt, Prueba.GuardaDoble, Prueba.GuardaChar);
	
	Prueba.GuardaDoble = 123.321;
	printf("\nCon Pruba.GueadaDoble = 123.321\n"
	"PGint: |%d|\tPGD: |%f|\tPGC: |%c|\n", Prueba.GuardaInt, Prueba.GuardaDoble, Prueba.GuardaChar);
	
	Prueba.GuardaChar = 'R';
	printf("\nCon Prueba.GuardaChar = 'R'\n"
	"PGint: |%d|\tPGD:|%f|\tPGC:|%c|\n", Prueba.GuardaInt, Prueba.GuardaDoble, Prueba.GuardaChar);
	
	Prueba.GuardaDoble = 'R';
	
	printf("\nCon Prueba.GuardaDoble = 'R'\n"
	"PGint: |%d|\tPGD: |%f|\tPGD:|%c|\n", Prueba.GuardaInt, Prueba.GuardaDoble, Prueba.GuardaChar);
	
	Prueba.GuardaInt = 'R';
	printf("\nCon Prueba.GuardaInt = 'R'\n"
	"PGint: |%d|\tPGD:|%f|\tPGC:|%c|\n", Prueba.GuardaInt, Prueba.GuardaDoble, Prueba.GuardaChar);
	return 0;
}
