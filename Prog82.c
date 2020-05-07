#include <stdio.h>

#define MAX 5

int main(void)
{
	char nombre[MAX];
	char * ptr;
	
	printf("Hola, como se llama usted?\n");
	
	ptr = fgets(nombre, MAX, stdin);
	printf("%s? Ah! %s!\n", nombre, ptr);
	
	return 0;
}
