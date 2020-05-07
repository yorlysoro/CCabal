#include <stdio.h>
#include <string.h>

#define TAMANODELALISTA 5

int main(void)
{
	const char * lista[TAMANODELALISTA] = 
	{
		"astronomy", "astounding",
		"astrophysics", "ostracize",
		"astrerism"
	};
	
	int count = 0, i;
	
	for(i = 0; i < TAMANODELALISTA; i++)
	if(!strncmp(lista[i], "astro", 5) )
	{
		printf("Descubri: %s\n", lista[i]);
		count++;
	}
	
	printf("La lista tiene %d palabras iniciando"
	" con astro.\n", count);
	
	return 0;
}
