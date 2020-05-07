#include <stdio.h>

int main(void)
{
	char NoEs[] = "Solo para inicializarme con un NULL", Letra = 'A';
	
	int i;
	
	for(i = 0; i < 4; i++)
	NoEs[i] = Letra + i;
	
	puts(NoEs);
	
	return 0;
}
