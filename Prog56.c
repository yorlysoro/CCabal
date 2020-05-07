#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch;
	FILE * fp;
	char NArchivo[50];
	
	printf("¿Que archivo quieres ver? ");
	scanf("%s", NArchivo);
	
	if((fp = fopen(NArchivo, "r")) == NULL)
	{
		printf("No puede abrir %s\n", NArchivo);
		exit(1);
	}
	while((ch = getc(fp)) != EOF )
	putchar(ch);
	fclose(fp);
	return 0;
}
