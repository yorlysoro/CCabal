#include <stdio.h>
#define MAXLINEA 20

int main(void)
{
	char Linea[MAXLINEA];
	
	while(fgets(Linea, MAXLINEA - 1, stdin) != NULL && Linea[0] != '\n')
	fputs(Linea, stdout);
	
	return 0;
}
