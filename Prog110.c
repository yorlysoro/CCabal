#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ch;
	
	FILE *fp;
	
	long count = 0;
	
	if(argc != 2)
	{
		printf("Usado: %s NombreDeArchivo\n", argv[0]);
		exit(1);
	}
	
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("No puedo abrir %s\n", argv[1]);
		exit(1);
	}
	
	while((ch = getc (fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	
	fclose(fp);
	
	printf("El archivo %s tiene %ld caracteres\n", argv[1], count);
	return 0;
}
