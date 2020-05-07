#include <stdio.h>

int main(int argc, char *argv[])
{
	int count;
	
	printf("El comando tuvo %d argumentos:\n", argc - 1);
	for(count = 0; count < argc; count++)
	printf("%d: %s\n", count, argv[count]);
	printf("\n");
	
	return 0;
	
}
