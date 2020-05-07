#include <stdio.h>

int main(void)
{
	int n = 0;
	size_t TamanoDeInt;
	
	puts("\n\tEl operador sizeof()\n");
	TamanoDeInt = sizeof(int);
	
	printf("\tn = %d, n tiene %zd bytes; Todos los ints tienen %zd bytes.\n\n", n, sizeof n, TamanoDeInt);
	
	return 0;
}
