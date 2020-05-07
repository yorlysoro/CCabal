#include <stdio.h>

int main(void)
{
	int n;
	
	printf("Ingresa tres(3) enteros por favor:\n");
	scanf("%*d %*d %d", &n);
	printf("El ultimo entero fue %d\n", n);
	
	return 0;
	}
