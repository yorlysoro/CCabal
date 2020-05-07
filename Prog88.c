#include <stdio.h>
#include <string.h>

#define TAMANO 80

int main(void)
{
	char flor[TAMANO], agregado[] = "s huelen como zapatos viejos.";
	
	printf("¿Cual es su flor preferida?");
	fgets( flor, 51, stdin );
	*(flor + strlen(flor) - 1) = '\0';
	strcat( flor, agregado );
	puts(flor);
	
	return 0;
}
