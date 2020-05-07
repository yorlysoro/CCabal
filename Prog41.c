#include <stdio.h>

int main(void)
{
	puts("\n\tOrden de Precedencia de operadores\n");
	puts("\t()");
	puts("\t++, --, sizeof, (cast)");
	puts("\t/, *, %");
	puts("\t+, -");
	puts("\t<, <=, >=, >");
	puts("\t==, !=");
	puts("\t&&");
	puts("\t||");
	puts("\t+=, -=, /=, *=, %=");
	puts("\t=\n");
	
	printf("\t4 + 5 * 2 = %d\n", 4 + 5 * 2);
	
	printf("\t( 4 + 5 ) * 2 = %d\n", ( 4 + 5 ) * 2);
	
	printf("\t1 && 1 || 0 && 0 = %d\n", 1 && 1 || 0 && 0);
	
	printf("\t1 && ( 1 || 0 ) && 0 = %d\n\n", 1 && ( 1 || 0) && 0 );
	
	return 0;
}
