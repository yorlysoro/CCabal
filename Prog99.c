#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, Veces;
	
	if(argc < 2 || (Veces = atoi(argv[1]) ) < 1)
	printf("\n\tUsage: %s \n\n\t\tn = Numero positivo > 0\n\n", argv[0]);
	else
	for(i = 0; i < Veces; i++)
	puts("Parece Bien!");
	return 0;
}
