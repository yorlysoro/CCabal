#include <stdio.h>

#define DEF "soy una cadena #define"

int main(void)
{
	char str1[80] = "un arregle se inicializo en mi.";
	const char * str2 = "un pointer se inicializo en mi.";
	
	puts("Soy un argumento a puts().");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);
	puts(str2+4);
	
	return 0;
}
