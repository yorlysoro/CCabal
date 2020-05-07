#include <stdio.h>
#define MESES 12

int main(void)
{
	int dias[MESES] = {31, 28, [4] = 31,30,31, [1] = 29};
	int i;
	
	for(i = 0; i < MESES; i++)
	printf("%2d %d\n", i + 1, dias[i]);
	return 0;
}
