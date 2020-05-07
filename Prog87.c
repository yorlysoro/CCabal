#include <stdio.h>
#include <string.h>

#define TAMANO 80

int main(void)
{
	char flor[TAMANO], agregado[] = "s huelen como zapatos viejos.";
	
	printf("Cual es su flor preferida? ");
	gets(flor);
	strcat(flor, agregado);
	puts(flor);
	
	return 0;
}
