#include <stdio.h>
#define MESES 12

int main(void)
{
	int dias[MESES] = {31,28,31,30,31,30,31,31,30,31,30,31}, index;
	for(index = 0; index < MESES; index++)
	printf("Mes %2d tiene %d dias.\n", index + 1, *(dias + index));
	
	return 0;
}
