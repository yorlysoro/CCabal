#include <stdio.h>
#include "prog136.h"

int main(void)
{
	nombres ganador = { "Omar", "Rodriguez" };
	
	printf("El ganador es %s %s\n", ganador.nombre, ganador.apellido);
	return 0;
}
