#include <stdio.h>

int main(void)
{
	float PI = 3.141592;
	
	char Siete = '7';
	puts("\n\tEl operador cast\n");
	
	printf("\tPI como intero sin cast = %i\n", PI);
	printf("\tPI como intero con cast = %i\n", (int)PI);
	
	printf("\tSiete como char = %c\n", Siete);
	printf("\tSiete como int con cast = %i\n", (int)Siete);
	printf("\tSiete como float con cast = %f\n", (float)Siete);
	
	return 0;
}
