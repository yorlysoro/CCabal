#include <stdio.h>

int main(void)
{
	unsigned int counter = 5;
	unsigned long factorial = 1;
	
	do
	{
		factorial *= counter--;
	}while(counter > 0);
	
	printf("%lu\n", factorial);
	
	return 0;
}
