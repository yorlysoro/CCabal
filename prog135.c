#include <stdio.h>

#define A_VER
#define LIMIT 4

int main(void)
{
	int i;
	
	int total = 0;
	
	for(i = 1; i <= LIMIT; i++)
	{
		total += 2 * i * i + 1;
		
		#ifdef A_VER
		
		printf("i = %d, Subtotal = %d\n", total);
		
		#endif
		
	}
	
	printf("Total = %d\n", total);
	
	return 0;
}
