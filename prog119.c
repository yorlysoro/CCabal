#include <stdio.h>

#define LARGO 20

struct Nombres{
	char Nombre[LARGO];
	char Apellido[LARGO];
};

struct Personas 
{
	struct Nombres handle;
	char ComidaPreferida[LARGO];
	char Profesion[LARGO];
	float IngresoMensual;
};

int main(void)
{
	struct Personas Companero[2] =
	{ 
		{
			{"Horacio", "Villanueva"},
			"salmon", "Gogalop", 58112.00
		},
	
		{
			{"Rupert", "Delgado" },
			"menudo", "Editor de revistas", 32400.00
		}
	 };
	 
	 struct Personas * El;
	 El = &Companero[0];
	 
	 printf("\nPointer: %p\n", El);
	 printf("Nombre: %s\n", El->handle.Nombre);
	 printf("Apellido: %s\n", El->handle.Apellido);
	 printf("Comida Preferida: %s\n", El->ComidaPreferida);
	 printf("Profesion: %s\n", El->Profesion);
	 printf("Ingreso Mesual: %.2f\n", El->IngresoMensual);
	 
	 El++;
	 
	 printf("\nPonter: %p\n", El);
	 printf("Nombre: %s\n", (*El).handle.Nombre);
	 printf("Apellido: %s\n", (*El).handle.Apellido);
	 printf("Comida Preferida: %s\n", (*El).ComidaPreferida);
	 printf("Profesion: %s\n", (*El).Profesion);
	 printf("Ingreso Mensual: %.2f\n", (*El).IngresoMensual);
	 
	 return 0;
}
